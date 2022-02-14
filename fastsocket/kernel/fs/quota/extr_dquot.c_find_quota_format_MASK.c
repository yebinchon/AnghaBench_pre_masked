
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct quota_format_type {int qf_fmt_id; int qf_owner; struct quota_format_type* qf_next; } ;
struct TYPE_2__ {int qm_fmt_id; int qm_mod_name; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 struct quota_format_type* VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static struct quota_format_type *FUNC_4(int VAR_3)
{
 struct quota_format_type *VAR_4;

 FUNC_1(&VAR_0);
 for (VAR_4 = VAR_2; VAR_4 && VAR_4->qf_fmt_id != VAR_3;
      VAR_4 = VAR_4->qf_next)
  ;
 if (!VAR_4 || !FUNC_3(VAR_4->qf_owner)) {
  int VAR_5;

  FUNC_2(&VAR_0);

  for (VAR_5 = 0; VAR_1[VAR_5].qm_fmt_id &&
        VAR_1[VAR_5].qm_fmt_id != VAR_3; VAR_5++)
   ;
  if (!VAR_1[VAR_5].qm_fmt_id ||
      FUNC_0(VAR_1[VAR_5].qm_mod_name))
   return ((void*)0);

  FUNC_1(&VAR_0);
  for (VAR_4 = VAR_2; VAR_4 && VAR_4->qf_fmt_id != VAR_3;
       VAR_4 = VAR_4->qf_next)
   ;
  if (VAR_4 && !FUNC_3(VAR_4->qf_owner))
   VAR_4 = ((void*)0);
 }
 FUNC_2(&VAR_0);
 return VAR_4;
}
