
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ssize_t ;
typedef TYPE_2__* acl_t ;
typedef int acl_entry_t ;
struct TYPE_5__ {int acl_cnt; } ;
struct TYPE_6__ {TYPE_1__ ats_acl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__* const,int,int *) ;
 int FUNC_1 (int) ;
 int VAR_4 ;
 int FUNC_2 (char*,int,int ,int) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (int) ;
 char* FUNC_5 (char*) ;
 int FUNC_6 (char*) ;

char *
FUNC_7(const acl_t VAR_5, ssize_t *VAR_6, int VAR_7)
{
 int VAR_8, VAR_9 = 0, VAR_10, VAR_11 = VAR_0;
 char *VAR_12;
 acl_entry_t VAR_13;

 if (VAR_5->ats_acl.acl_cnt == 0)
  return FUNC_5("");

 VAR_10 = VAR_5->ats_acl.acl_cnt * VAR_3;
 VAR_12 = FUNC_4(VAR_10);
 if (VAR_12 == ((void*)0))
  return (((void*)0));

 while (FUNC_0(VAR_5, VAR_11, &VAR_13) == 1) {
  VAR_11 = VAR_1;

  FUNC_1(VAR_9 < VAR_10);

  VAR_8 = FUNC_2(VAR_12 + VAR_9, VAR_10 - VAR_9, VAR_13, VAR_7);
  if (VAR_8) {
   FUNC_3(VAR_12);
   VAR_4 = VAR_2;
   return (((void*)0));
  }

  VAR_9 = FUNC_6(VAR_12);
 }

 FUNC_1(VAR_9 < VAR_10);
 VAR_12[VAR_9] = '\0';

 if (VAR_6 != ((void*)0))
  *VAR_6 = VAR_9;

 return (VAR_12);
}
