
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef char wchar_t ;
struct TYPE_6__ {int (* func ) (TYPE_1__*,int,char const**) ;int * name; } ;
struct TYPE_5__ {int el_prog; } ;
typedef TYPE_1__ EditLine ;


 TYPE_4__* VAR_0 ;
 char* FUNC_0 (size_t,int) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int ,char*) ;
 int FUNC_3 (TYPE_1__*,int,char const**) ;
 char* FUNC_4 (char const*,int) ;
 scalar_t__ FUNC_5 (int *,char const*) ;
 int FUNC_6 (char*,char const*,size_t) ;

int
FUNC_7(EditLine *VAR_1, int VAR_2, const wchar_t *VAR_3[])
{
 const wchar_t *VAR_4;
 int VAR_5;

 if (VAR_2 < 1)
  return -1;
 VAR_4 = FUNC_4(VAR_3[0], L':');
 if (VAR_4 != ((void*)0)) {
  wchar_t *VAR_6;
  size_t VAR_7;

  if (VAR_4 == VAR_3[0])
   return 0;
  VAR_7 = (size_t)(VAR_4 - VAR_3[0]);
  VAR_6 = FUNC_0(VAR_7 + 1, sizeof(*VAR_6));
  if (VAR_6 == ((void*)0))
   return 0;
  (void) FUNC_6(VAR_6, VAR_3[0], VAR_7);
  VAR_6[VAR_7] = '\0';
  VAR_4++;
  VAR_7 = (size_t)FUNC_2(VAR_1->el_prog, VAR_6);
  FUNC_1(VAR_6);
  if (!VAR_7)
   return 0;
 } else
  VAR_4 = VAR_3[0];

 for (VAR_5 = 0; VAR_0[VAR_5].name != ((void*)0); VAR_5++)
  if (FUNC_5(VAR_0[VAR_5].name, VAR_4) == 0) {
   VAR_5 = (*VAR_0[VAR_5].func) (VAR_1, VAR_2, VAR_3);
   return -VAR_5;
  }
 return -1;
}
