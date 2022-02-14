
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hda_codec {scalar_t__ beep_mode; int addr; struct hda_beep* beep; TYPE_2__* bus; } ;
struct hda_beep {int nid; scalar_t__ mode; int mutex; int beep_work; int unregister_work; int register_work; struct hda_codec* codec; int phys; } ;
struct TYPE_4__ {TYPE_1__* card; } ;
struct TYPE_3__ {int number; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct hda_beep*) ;
 struct hda_beep* FUNC_3 (int,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct hda_codec*,int,int ,int ,int) ;
 int FUNC_6 (struct hda_beep*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_7 (struct hda_codec*,char*) ;
 int FUNC_8 (int ,int,char*,int,int) ;

int FUNC_9(struct hda_codec *VAR_8, int VAR_9)
{
 struct hda_beep *VAR_10;

 if (!FUNC_7(VAR_8, "beep"))
  return 0;
 if (VAR_8->beep_mode == VAR_3)
  return 0;

 VAR_10 = FUNC_3(sizeof(*VAR_10), VAR_2);
 if (VAR_10 == ((void*)0))
  return -VAR_1;
 FUNC_8(VAR_10->phys, sizeof(VAR_10->phys),
  "card%d/codec#%d/beep0", VAR_8->bus->card->number, VAR_8->addr);

 FUNC_5(VAR_8, VAR_9, 0,
  VAR_0, 0x01);

 VAR_10->nid = VAR_9;
 VAR_10->codec = VAR_8;
 VAR_10->mode = VAR_8->beep_mode;
 VAR_8->beep = VAR_10;

 FUNC_1(&VAR_10->register_work, &VAR_5);
 FUNC_0(&VAR_10->unregister_work, &VAR_6);
 FUNC_1(&VAR_10->beep_work, &VAR_7);
 FUNC_4(&VAR_10->mutex);

 if (VAR_10->mode == VAR_4) {
  int VAR_11 = FUNC_6(VAR_10);
  if (VAR_11 < 0) {
   FUNC_2(VAR_10);
   VAR_8->beep = ((void*)0);
   return VAR_11;
  }
 }

 return 0;
}
