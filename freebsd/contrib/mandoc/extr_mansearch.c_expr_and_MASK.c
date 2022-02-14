
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mansearch {int dummy; } ;
struct expr {struct expr* next; struct expr* child; int type; } ;


 int VAR_0 ;
 void* FUNC_0 (struct mansearch const*,int,char**,int*) ;
 struct expr* FUNC_1 (int,int) ;
 scalar_t__ FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,...) ;

__attribute__((used)) static struct expr *
FUNC_4(const struct mansearch *VAR_1, int VAR_2, char *VAR_3[], int *VAR_4)
{
 struct expr *VAR_5, *VAR_6;
 int VAR_7;

 VAR_7 = 1;
 VAR_5 = VAR_6 = ((void*)0);
 while (*VAR_4 < VAR_2) {
  if (FUNC_2(")", VAR_3[*VAR_4]) == 0) {
   if (VAR_7)
    FUNC_3("missing term "
        "before closing parenthesis");
   VAR_7 = 0;
   break;
  }
  if (FUNC_2("-o", VAR_3[*VAR_4]) == 0)
   break;
  if (FUNC_2("-a", VAR_3[*VAR_4]) == 0) {
   if (VAR_7) {
    if (*VAR_4 > 0)
     FUNC_3("ignoring -a after %s",
         VAR_3[*VAR_4 - 1]);
    else
     FUNC_3("ignoring initial -a");
   }
   VAR_7 = 1;
   ++*VAR_4;
   continue;
  }
  if (VAR_7 == 0)
   break;
  if (VAR_6 == ((void*)0)) {
   VAR_6 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4);
   if (VAR_6 != ((void*)0))
    VAR_7 = 0;
   continue;
  }
  VAR_7 = 0;
  if (VAR_5 == ((void*)0)) {
   VAR_5 = FUNC_1(1, sizeof(*VAR_5));
   VAR_5->type = VAR_0;
   VAR_5->next = ((void*)0);
   VAR_5->child = VAR_6;
  }
  VAR_6->next = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4);
  if (VAR_6->next != ((void*)0)) {
   VAR_6 = VAR_6->next;
   VAR_7 = 0;
  }
 }
 if (VAR_7 && *VAR_4)
  FUNC_3("ignoring trailing %s", VAR_3[*VAR_4 - 1]);
 return VAR_5 == ((void*)0) ? VAR_6 : VAR_5;
}
