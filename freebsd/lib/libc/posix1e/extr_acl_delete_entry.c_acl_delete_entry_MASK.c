
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct acl_entry {int dummy; } ;
struct acl {int acl_cnt; int * acl_entry; } ;
typedef TYPE_1__* acl_t ;
typedef struct acl_entry* acl_entry_t ;
struct TYPE_4__ {scalar_t__ ats_cur_entry; struct acl ats_acl; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (struct acl_entry*) ;
 scalar_t__ FUNC_2 (int *,struct acl_entry*) ;
 int FUNC_3 (int *,int) ;
 int VAR_2 ;

int
FUNC_4(acl_t VAR_3, acl_entry_t VAR_4)
{
 struct acl *VAR_5;
 struct acl_entry VAR_6;
 int VAR_7, VAR_8, VAR_9 = 0;

 if (VAR_3 == ((void*)0) || VAR_4 == ((void*)0)) {
  VAR_2 = VAR_1;
  return (-1);
 }

 VAR_5 = &VAR_3->ats_acl;

 if (FUNC_1(VAR_4) != FUNC_0(VAR_3)) {
  VAR_2 = VAR_1;
  return (-1);
 }

 if ((VAR_3->ats_acl.acl_cnt < 1) ||
     (VAR_3->ats_acl.acl_cnt > VAR_0)) {
  VAR_2 = VAR_1;
  return (-1);
 }


 VAR_6 = *VAR_4;

 for (VAR_7 = 0; VAR_7 < VAR_3->ats_acl.acl_cnt;) {
  if (FUNC_2(&(VAR_3->ats_acl.acl_entry[VAR_7]), &VAR_6)) {

   for (VAR_8 = VAR_7; VAR_8 < VAR_3->ats_acl.acl_cnt - 1; ++VAR_8)
    VAR_3->ats_acl.acl_entry[VAR_8] =
        VAR_3->ats_acl.acl_entry[VAR_8+1];

   VAR_3->ats_acl.acl_cnt--;
   FUNC_3(&VAR_3->ats_acl.acl_entry[VAR_8],
       sizeof(struct acl_entry));
   VAR_3->ats_cur_entry = 0;


   VAR_9 = 1;
  } else
   VAR_7++;
 }

 if (VAR_9)
  return (0);

 VAR_2 = VAR_1;
 return (-1);
}
