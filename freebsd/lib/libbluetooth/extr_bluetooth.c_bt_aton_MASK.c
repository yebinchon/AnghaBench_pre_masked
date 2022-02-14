
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int* b; } ;
typedef TYPE_1__ bdaddr_t ;


 int FUNC_0 (char const*) ;
 int FUNC_1 (char const) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 char* FUNC_3 (char const*,char) ;
 int FUNC_4 (char const*) ;

int
FUNC_5(char const *VAR_0, bdaddr_t *VAR_1)
{
 int VAR_2, VAR_3;
 char *VAR_4 = ((void*)0);

 FUNC_2(VAR_1, 0, sizeof(*VAR_1));

 for (VAR_2 = 5, VAR_4 = FUNC_3(VAR_0, ':');
      VAR_2 > 0 && *VAR_0 != '\0' && VAR_4 != ((void*)0);
      VAR_2 --, VAR_0 = VAR_4 + 1, VAR_4 = FUNC_3(VAR_0, ':')) {
  switch (VAR_4 - VAR_0) {
  case 1:
   VAR_3 = FUNC_1(VAR_0[0]);
   break;

  case 2:
   VAR_3 = FUNC_0(VAR_0);
   break;

  default:
   VAR_3 = -1;
   break;
  }

  if (VAR_3 < 0)
   return (0);

  VAR_1->b[VAR_2] = VAR_3;
 }

 if (VAR_2 != 0 || VAR_4 != ((void*)0) || *VAR_0 == 0)
  return (0);

 switch (FUNC_4(VAR_0)) {
 case 1:
  VAR_3 = FUNC_1(VAR_0[0]);
  break;

 case 2:
  VAR_3 = FUNC_0(VAR_0);
  break;

 default:
  VAR_3 = -1;
  break;
 }

 if (VAR_3 < 0)
  return (0);

 VAR_1->b[VAR_2] = VAR_3;

 return (1);
}
