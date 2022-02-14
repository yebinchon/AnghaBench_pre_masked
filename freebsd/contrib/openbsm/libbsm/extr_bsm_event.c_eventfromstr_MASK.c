
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct au_mask {int am_success; } ;
struct au_event_ent {int ae_class; int ae_number; int ae_desc; int ae_name; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (char*,struct au_mask*) ;
 int FUNC_2 (int ,char*,scalar_t__) ;
 scalar_t__ FUNC_3 (char*) ;
 char* FUNC_4 (char*,int ,char**) ;

__attribute__((used)) static struct au_event_ent *
FUNC_5(char *VAR_3, struct au_event_ent *VAR_4)
{
 char *VAR_5, *VAR_6, *VAR_7, *VAR_8;
 struct au_mask VAR_9;
 char *VAR_10;

 VAR_5 = FUNC_4(VAR_3, VAR_2, &VAR_10);
 VAR_6 = FUNC_4(((void*)0), VAR_2, &VAR_10);
 VAR_7 = FUNC_4(((void*)0), VAR_2, &VAR_10);
 VAR_8 = FUNC_4(((void*)0), VAR_2, &VAR_10);

 if ((VAR_5 == ((void*)0)) || (VAR_6 == ((void*)0)))
  return (((void*)0));

 if (FUNC_3(VAR_6) >= VAR_1)
  return (((void*)0));

 FUNC_2(VAR_4->ae_name, VAR_6, VAR_1);
 if (VAR_7 != ((void*)0)) {
  if (FUNC_3(VAR_7) >= VAR_0)
   return (((void*)0));
  FUNC_2(VAR_4->ae_desc, VAR_7, VAR_0);
 } else
  FUNC_2(VAR_4->ae_desc, "", VAR_0);

 VAR_4->ae_number = FUNC_0(VAR_5);




 if (VAR_8 != ((void*)0)) {
  if (FUNC_1(VAR_8, &VAR_9) != 0)
   VAR_4->ae_class = 0;
  else
   VAR_4->ae_class = VAR_9.am_success;
 } else
  VAR_4->ae_class = 0;

 return (VAR_4);
}
