
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hda_codec {int addr; struct hda_bus* bus; } ;
struct TYPE_2__ {int (* command ) (struct hda_bus*,unsigned int) ;unsigned int (* get_response ) (struct hda_bus*,int ) ;int (* bus_reset ) (struct hda_bus*) ;} ;
struct hda_bus {int no_response_fallback; scalar_t__ response_reset; TYPE_1__ ops; scalar_t__ rirb_error; int cmd_mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct hda_codec*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct hda_codec*) ;
 int FUNC_4 (struct hda_codec*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (struct hda_bus*,unsigned int) ;
 unsigned int FUNC_7 (struct hda_bus*,int ) ;
 unsigned int FUNC_8 (struct hda_bus*,int ) ;
 int FUNC_9 (struct hda_bus*) ;
 int FUNC_10 (struct hda_bus*) ;
 int FUNC_11 (struct hda_codec*,unsigned int) ;
 int FUNC_12 (struct hda_codec*,unsigned int) ;

__attribute__((used)) static int FUNC_13(struct hda_codec *VAR_2, unsigned int VAR_3,
      int VAR_4, unsigned int *VAR_5)
{
 struct hda_bus *VAR_6 = VAR_2->bus;
 int VAR_7;

 if (VAR_3 == ~0)
  return -1;

 if (VAR_5)
  *VAR_5 = -1;
 again:
 FUNC_4(VAR_2);
 FUNC_1(&VAR_6->cmd_mutex);
 if (VAR_4 & VAR_1)
  VAR_6->no_response_fallback = 1;
 for (;;) {
  FUNC_12(VAR_2, VAR_3);
  VAR_7 = VAR_6->ops.command(VAR_6, VAR_3);
  if (VAR_7 != -VAR_0)
   break;

  VAR_6->ops.get_response(VAR_6, VAR_2->addr);
 }
 if (!VAR_7 && VAR_5) {
  *VAR_5 = VAR_6->ops.get_response(VAR_6, VAR_2->addr);
  FUNC_11(VAR_2, *VAR_5);
 }
 VAR_6->no_response_fallback = 0;
 FUNC_2(&VAR_6->cmd_mutex);
 FUNC_3(VAR_2);
 if (!FUNC_0(VAR_2) && VAR_5 && *VAR_5 == -1 && VAR_6->rirb_error) {
  if (VAR_6->response_reset) {
   FUNC_5("hda_codec: resetting BUS due to "
       "fatal communication error\n");
   FUNC_10(VAR_6);
   VAR_6->ops.bus_reset(VAR_6);
  }
  goto again;
 }

 if (!VAR_7 || FUNC_0(VAR_2))
  VAR_6->response_reset = 0;
 return VAR_7;
}
