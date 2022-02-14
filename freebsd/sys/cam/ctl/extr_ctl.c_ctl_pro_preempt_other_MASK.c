
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int residx; scalar_t__ res_type; int sa_res_key; } ;
struct TYPE_4__ {TYPE_1__ pr_info; } ;
union ctl_ha_msg {TYPE_2__ pr; } ;
typedef scalar_t__ uint64_t ;
struct ctl_lun {scalar_t__ pr_res_idx; int pr_key_count; scalar_t__ pr_res_type; int pr_generation; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (struct ctl_lun*,int) ;
 int FUNC_1 (struct ctl_lun*,int,int ) ;
 scalar_t__ FUNC_2 (struct ctl_lun*,int) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(struct ctl_lun *VAR_9, union ctl_ha_msg *VAR_10)
{
 uint64_t VAR_11;
 int VAR_12;

 VAR_11 = FUNC_3(VAR_10->pr.pr_info.sa_res_key);

 if (VAR_9->pr_res_idx == VAR_1
  || VAR_9->pr_res_idx == VAR_2
  || VAR_11 != FUNC_2(VAR_9, VAR_9->pr_res_idx)) {
  if (VAR_11 == 0) {




   for(VAR_12 = 0; VAR_12 < VAR_0; VAR_12++) {
    if (VAR_12 == VAR_10->pr.pr_info.residx ||
        FUNC_2(VAR_9, VAR_12) == 0)
     continue;

    FUNC_0(VAR_9, VAR_12);
    FUNC_1(VAR_9, VAR_12, VAR_3);
   }

   VAR_9->pr_key_count = 1;
   VAR_9->pr_res_type = VAR_10->pr.pr_info.res_type;
   if (VAR_9->pr_res_type != VAR_7 &&
       VAR_9->pr_res_type != VAR_5)
    VAR_9->pr_res_idx = VAR_10->pr.pr_info.residx;
  } else {
          for (VAR_12 = 0; VAR_12 < VAR_0; VAR_12++) {
    if (VAR_11 == FUNC_2(VAR_9, VAR_12))
     continue;

    FUNC_0(VAR_9, VAR_12);
    VAR_9->pr_key_count--;
    FUNC_1(VAR_9, VAR_12, VAR_3);
   }
  }
 } else {
  for (VAR_12 = 0; VAR_12 < VAR_0; VAR_12++) {
   if (VAR_12 == VAR_10->pr.pr_info.residx ||
       FUNC_2(VAR_9, VAR_12) == 0)
    continue;

   if (VAR_11 == FUNC_2(VAR_9, VAR_12)) {
    FUNC_0(VAR_9, VAR_12);
    VAR_9->pr_key_count--;
    FUNC_1(VAR_9, VAR_12, VAR_3);
   } else if (VAR_10->pr.pr_info.res_type != VAR_9->pr_res_type
       && (VAR_9->pr_res_type == VAR_8 ||
        VAR_9->pr_res_type == VAR_6)) {
    FUNC_1(VAR_9, VAR_12, VAR_4);
   }
  }
  VAR_9->pr_res_type = VAR_10->pr.pr_info.res_type;
  if (VAR_9->pr_res_type != VAR_7 &&
      VAR_9->pr_res_type != VAR_5)
   VAR_9->pr_res_idx = VAR_10->pr.pr_info.residx;
  else
   VAR_9->pr_res_idx = VAR_1;
 }
 VAR_9->pr_generation++;

}
