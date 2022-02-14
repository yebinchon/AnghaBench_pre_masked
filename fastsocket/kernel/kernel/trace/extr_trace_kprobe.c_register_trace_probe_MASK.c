
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int addr; int flags; } ;
struct TYPE_5__ {TYPE_3__ kp; } ;
struct TYPE_4__ {int system; int name; } ;
struct trace_probe {int list; TYPE_2__ rp; TYPE_1__ call; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct trace_probe* FUNC_0 (int ,int ) ;
 int FUNC_1 (struct trace_probe*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (struct trace_probe*) ;
 scalar_t__ FUNC_9 (struct trace_probe*) ;
 int FUNC_10 (struct trace_probe*) ;
 int FUNC_11 (struct trace_probe*) ;

__attribute__((used)) static int FUNC_12(struct trace_probe *VAR_5)
{
 struct trace_probe *VAR_6;
 int VAR_7;

 FUNC_3(&VAR_4);


 VAR_6 = FUNC_0(VAR_5->call.name, VAR_5->call.system);
 if (VAR_6) {

  VAR_7 = FUNC_11(VAR_6);
  if (VAR_7 < 0)
   goto end;
  FUNC_1(VAR_6);
 }
 VAR_7 = FUNC_8(VAR_5);
 if (VAR_7) {
  FUNC_5("Failed to register probe event(%d)\n", VAR_7);
  goto end;
 }

 VAR_5->rp.kp.flags |= VAR_2;
 if (FUNC_9(VAR_5))
  VAR_7 = FUNC_7(&VAR_5->rp);
 else
  VAR_7 = FUNC_6(&VAR_5->rp.kp);

 if (VAR_7) {
  FUNC_5("Could not insert probe(%d)\n", VAR_7);
  if (VAR_7 == -VAR_0) {
   FUNC_5("Probing address(0x%p) is not an "
       "instruction boundary.\n",
       VAR_5->rp.kp.addr);
   VAR_7 = -VAR_1;
  }
  FUNC_10(VAR_5);
 } else
  FUNC_2(&VAR_5->list, &VAR_3);
end:
 FUNC_4(&VAR_4);
 return VAR_7;
}
