
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int u_short ;
typedef int u_char ;
struct seq_softc {int unit; int seq_lock; int music; } ;
typedef TYPE_4__* kobj_t ;
struct TYPE_12__ {size_t max_voice; int* map; } ;
struct TYPE_13__ {int (* bender ) (TYPE_4__*,int,int) ;int vc_mtx; TYPE_2__ alloc; TYPE_1__* chn_info; } ;
struct TYPE_14__ {TYPE_3__ synth; int midiunit; } ;
struct TYPE_11__ {int bender_value; } ;


 int VAR_0 ;



 int VAR_1 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (TYPE_4__*,int,int) ;
 int FUNC_2 (TYPE_4__*,int,int,int) ;
 int FUNC_3 (TYPE_4__*,int,int) ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 char* FUNC_4 (int,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*,int,...) ;
 int FUNC_8 (TYPE_4__*,size_t,int) ;
 int FUNC_9 (TYPE_4__*,int,int) ;

__attribute__((used)) static int
FUNC_10(struct seq_softc *VAR_5, kobj_t VAR_6, u_char *VAR_7)
{
 int VAR_8;
 u_short VAR_9;
 u_char VAR_10, VAR_11, VAR_12;

 VAR_8 = 0;
 VAR_10 = VAR_7[2];
 VAR_11 = VAR_7[3];
 VAR_12 = VAR_7[4];
 VAR_9 = *(u_short *)&VAR_7[6];

 FUNC_0(5, FUNC_7("seq_chncommon: unit %d, dev %d, cmd %s, chn %d,"
     " p1 %d, w14 %d.\n", VAR_5->unit, VAR_7[1],
     FUNC_4(VAR_10, VAR_2), VAR_11, VAR_12, VAR_9));
 FUNC_6(&VAR_5->seq_lock);
 switch (VAR_10) {
 case 129:
  FUNC_0(4, FUNC_7("seq_chncommon pgmchn chn %d pg %d\n",
      VAR_11, VAR_12));
  FUNC_3(VAR_6, VAR_11, VAR_12);
  break;
 case 130:
  FUNC_0(4, FUNC_7("seq_chncommon ctlch chn %d pg %d %d\n",
      VAR_11, VAR_12, VAR_9));
  FUNC_2(VAR_6, VAR_11, VAR_12, VAR_9);
  break;
 case 128:
  if (VAR_5->music) {
  } else
   FUNC_1(VAR_6, VAR_11, VAR_9);
  break;
 default:
  VAR_8 = 1;
  FUNC_0(2,
      FUNC_7("seq_chncommon event type %d not handled.\n",
      VAR_7[1]));
  break;

 }
 FUNC_5(&VAR_5->seq_lock);
 return VAR_8;
}
