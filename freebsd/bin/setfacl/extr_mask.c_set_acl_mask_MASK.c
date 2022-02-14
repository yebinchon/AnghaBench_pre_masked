
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ acl_tag_t ;
typedef int * acl_t ;
typedef int * acl_entry_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int **) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int,int **) ;
 int FUNC_4 (int *,scalar_t__*) ;
 int FUNC_5 (int,char*,char const*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (char*,char const*) ;
 int FUNC_7 (char*,char const*) ;

int
FUNC_8(acl_t *VAR_5, const char *VAR_6)
{
 acl_entry_t VAR_7;
 acl_t VAR_8;
 acl_tag_t VAR_9;
 int VAR_10;

 VAR_7 = ((void*)0);






 if (VAR_3)
  return (0);

 VAR_8 = FUNC_1(*VAR_5);
 if (VAR_8 == ((void*)0))
  FUNC_5(1, "%s: acl_dup() failed", VAR_6);

 if (!VAR_4) {







  if (FUNC_0(&VAR_8)) {
   FUNC_6("%s: acl_calc_mask() failed", VAR_6);
   FUNC_2(VAR_8);
   return (-1);
  }
 } else {






  VAR_10 = VAR_0;

  while (FUNC_3(VAR_8, VAR_10, &VAR_7) == 1) {
   VAR_10 = VAR_2;
   if (FUNC_4(VAR_7, &VAR_9) == -1)
    FUNC_5(1, "%s: acl_get_tag_type() failed",
        VAR_6);

   if (VAR_9 == VAR_1) {
    FUNC_2(VAR_8);
    return (0);
   }
  }







  FUNC_7("%s: warning: no mask entry", VAR_6);
  FUNC_2(VAR_8);
  return (0);
 }

 FUNC_2(*VAR_5);
 *VAR_5 = FUNC_1(VAR_8);
 FUNC_2(VAR_8);

 return (0);
}
