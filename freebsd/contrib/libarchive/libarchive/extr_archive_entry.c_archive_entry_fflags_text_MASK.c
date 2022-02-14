
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_entry {scalar_t__ ae_fflags_set; scalar_t__ ae_fflags_clear; int ae_fflags_text; int archive; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,char*) ;
 char* FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (int *,char*) ;
 scalar_t__ FUNC_3 (int ,int *,char const**) ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (char*) ;

const char *
FUNC_5(struct archive_entry *VAR_2)
{
 const char *VAR_3;
 char *VAR_4;

 if (FUNC_3(VAR_2->archive,
     &VAR_2->ae_fflags_text, &VAR_3) == 0) {
  if (VAR_3 != ((void*)0))
   return (VAR_3);
 } else if (VAR_1 == VAR_0)
  FUNC_0(1, "No memory");

 if (VAR_2->ae_fflags_set == 0 && VAR_2->ae_fflags_clear == 0)
  return (((void*)0));

 VAR_4 = FUNC_1(VAR_2->ae_fflags_set, VAR_2->ae_fflags_clear);
 if (VAR_4 == ((void*)0))
  return (((void*)0));

 FUNC_2(&VAR_2->ae_fflags_text, VAR_4);
 FUNC_4(VAR_4);
 if (FUNC_3(VAR_2->archive,
     &VAR_2->ae_fflags_text, &VAR_3) == 0)
  return (VAR_3);
 if (VAR_1 == VAR_0)
  FUNC_0(1, "No memory");
 return (((void*)0));
}
