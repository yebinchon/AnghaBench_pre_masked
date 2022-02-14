
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u_short ;
typedef int u_long ;
struct ctl_var {int flags; char* text; } ;


 int VAR_0 ;
 char* FUNC_0 (struct ctl_var**,int ,void*) ;
 char* FUNC_1 (int ) ;
 char* FUNC_2 (void*,int ) ;
 int FUNC_3 (char*,char const*,int ) ;

void
FUNC_4(
 struct ctl_var **VAR_1,
 const char *VAR_2,
 u_long VAR_3,
 u_short VAR_4
 )
{
 struct ctl_var *VAR_5;
 const char *VAR_6;
 const char *VAR_7;
 char *VAR_8;

 if (((void*)0) == VAR_2 || !VAR_3)
  return;

 VAR_5 = *VAR_1;
 if (VAR_5 != ((void*)0)) {
  while (!(VAR_0 & VAR_5->flags)) {
   if (((void*)0) == VAR_5->text) {
    VAR_8 = FUNC_1(VAR_3);
    FUNC_3(VAR_8, VAR_2, VAR_3);
    VAR_5->text = VAR_8;
    VAR_5->flags = VAR_4;
    return;
   } else {
    VAR_6 = VAR_2;
    VAR_7 = VAR_5->text;
    while (*VAR_7 != '=' && *VAR_6 == *VAR_7) {
     VAR_6++;
     VAR_7++;
    }
    if (*VAR_6 == *VAR_7 && ((*VAR_7 == '=') || !*VAR_7)) {
     VAR_8 = FUNC_2((void *)(intptr_t)VAR_5->text, VAR_3);
     FUNC_3(VAR_8, VAR_2, VAR_3);
     VAR_5->text = VAR_8;
     VAR_5->flags = VAR_4;
     return;
    }
   }
   VAR_5++;
  }
 }
 VAR_8 = FUNC_0(VAR_1, VAR_3, VAR_4);
 FUNC_3(VAR_8, VAR_2, VAR_3);
}
