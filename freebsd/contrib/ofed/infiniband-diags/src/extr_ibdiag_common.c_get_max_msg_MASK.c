
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_13__ {int * info; int * ext_info; TYPE_5__* remoteport; TYPE_2__* node; } ;
typedef TYPE_6__ ibnd_port_t ;
struct TYPE_12__ {int * info; int * ext_info; TYPE_4__* node; } ;
struct TYPE_11__ {scalar_t__ type; TYPE_3__** ports; } ;
struct TYPE_10__ {int info; } ;
struct TYPE_9__ {scalar_t__ type; TYPE_1__** ports; } ;
struct TYPE_8__ {int info; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 char* FUNC_3 (int ,char*,int,int*) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (char*,int,char*,...) ;

void FUNC_6(char *VAR_12, char *VAR_13, int VAR_14, ibnd_port_t * VAR_15)
{
 char VAR_16[64];
 uint32_t VAR_17 = 0;
 uint32_t VAR_18, VAR_19, VAR_20;
 uint8_t *VAR_21 = ((void*)0);

 uint32_t VAR_22 = FUNC_2(FUNC_4(VAR_15->info, 0,
         VAR_11)
         & FUNC_4(VAR_15->remoteport->info, 0,
           VAR_11));
 if ((VAR_22 & FUNC_4(VAR_15->info, 0,
           VAR_10)) == 0)


  FUNC_5(VAR_12, VAR_14, "Could be %s",
    FUNC_3(VAR_10,
          VAR_16, 64, &VAR_22));

 if (VAR_15->node->type == VAR_3) {
  if (VAR_15->node->ports[0])
   VAR_21 = (uint8_t *)&VAR_15->node->ports[0]->info;
 }
 else
  VAR_21 = (uint8_t *)&VAR_15->info;

 if (VAR_21)
  VAR_18 = FUNC_4(VAR_21, 0, VAR_4);
 else
  VAR_18 = 0;

 VAR_21 = ((void*)0);
 if (VAR_15->remoteport->node->type == VAR_3) {
  if (VAR_15->remoteport->node->ports[0])
   VAR_21 = (uint8_t *)&VAR_15->remoteport->node->ports[0]->info;
 } else
  VAR_21 = (uint8_t *)&VAR_15->remoteport->info;

 if (VAR_21)
  VAR_19 = FUNC_4(VAR_21, 0, VAR_4);
 else
  VAR_19 = 0;
 if (VAR_18 & FUNC_0(VAR_5) &&
     VAR_19 & FUNC_0(VAR_5))
  goto check_ext_speed;
check_fdr10_supp:
 VAR_20 = (FUNC_4(VAR_15->ext_info, 0,
          VAR_2) & VAR_0)
  && (FUNC_4(VAR_15->remoteport->ext_info, 0,
      VAR_2) & VAR_0);
 if (VAR_20)
  goto check_fdr10_active;

 VAR_17 = FUNC_1(FUNC_4(VAR_15->info, 0,
       VAR_9)
       & FUNC_4(VAR_15->remoteport->info, 0,
         VAR_9));
 if ((VAR_17 & FUNC_4(VAR_15->info, 0,
           VAR_6)) == 0)


  FUNC_5(VAR_13, VAR_14, "Could be %s",
    FUNC_3(VAR_6,
          VAR_16, 64, &VAR_17));
 return;

check_ext_speed:
 if (FUNC_4(VAR_15->info, 0,
     VAR_8) == 0 ||
     FUNC_4(VAR_15->remoteport->info, 0,
     VAR_8) == 0)
  goto check_fdr10_supp;
 VAR_17 = FUNC_1(FUNC_4(VAR_15->info, 0,
       VAR_8)
       & FUNC_4(VAR_15->remoteport->info, 0,
         VAR_8));
 if ((VAR_17 & FUNC_4(VAR_15->info, 0,
           VAR_7)) == 0)


  FUNC_5(VAR_13, VAR_14, "Could be %s",
    FUNC_3(VAR_7,
          VAR_16, 64, &VAR_17));
 return;

check_fdr10_active:
 if ((FUNC_4(VAR_15->ext_info, 0,
      VAR_1) & VAR_0) == 0) {

  if (FUNC_4(VAR_15->info, 0, VAR_6) == 4)
   FUNC_5(VAR_13, VAR_14,
     "Could be FDR10 (Found link at QDR but expected speed is FDR10)");
  else
   FUNC_5(VAR_13, VAR_14, "Could be FDR10");
 }
}
