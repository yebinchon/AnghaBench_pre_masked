
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int lzh; } ;
typedef TYPE_1__ libbe_handle_t ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

 int FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 (TYPE_1__*,char const*,char*) ;
 int FUNC_2 (TYPE_1__*,char*,int) ;
 int VAR_6 ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (char*,int,char*,char const*,char const*) ;
 int FUNC_5 (char*,char const*,int) ;
 int FUNC_6 (char*,scalar_t__,int) ;
 scalar_t__ FUNC_7 (char*,char) ;
 int FUNC_8 (int ,char*,int,int *) ;

int
FUNC_9(libbe_handle_t *VAR_7, const char *VAR_8, const char *VAR_9,
    bool VAR_10, char *VAR_11)
{
 char VAR_12[VAR_4];
 int VAR_13;

 FUNC_1(VAR_7, VAR_8, VAR_12);

 if ((VAR_13 = FUNC_0(VAR_7, VAR_12)) != 0)
  return (FUNC_3(VAR_7, VAR_13));

 if (VAR_9 != ((void*)0)) {
  if (FUNC_5(VAR_12, "@", sizeof(VAR_12)) >= sizeof(VAR_12))
   return (FUNC_3(VAR_7, VAR_0));

  if (FUNC_5(VAR_12, VAR_9, sizeof(VAR_12)) >= sizeof(VAR_12))
   return (FUNC_3(VAR_7, VAR_0));

  if (VAR_11 != ((void*)0))
   FUNC_4(VAR_11, VAR_4, "%s@%s", VAR_8,
       VAR_9);
 } else {
  FUNC_2(VAR_7, VAR_12, sizeof(VAR_12));

  if (VAR_11 != ((void*)0) && FUNC_6(VAR_11, FUNC_7(VAR_12, '/') + 1,
      sizeof(VAR_12)) >= sizeof(VAR_12))
   return (FUNC_3(VAR_7, VAR_0));
 }
 if ((VAR_13 = FUNC_8(VAR_7->lzh, VAR_12, VAR_10, ((void*)0))) != 0) {
  switch (VAR_13) {
  case 128:
   return (FUNC_3(VAR_7, VAR_0));

  default:






   if (VAR_6 == VAR_5)
    return (FUNC_3(VAR_7, VAR_1));
   return (FUNC_3(VAR_7, VAR_3));
  }
 }

 return (VAR_2);
}
