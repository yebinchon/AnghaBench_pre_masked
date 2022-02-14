
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pool_state_t ;
typedef scalar_t__ boolean_t ;


 int VAR_0 ;




 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (char const*,int*) ;
 int FUNC_2 (char*) ;
 int VAR_1 ;
 char* FUNC_3 (char*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (char const*,int ) ;
 int FUNC_6 (char*,char const*,...) ;
 scalar_t__ FUNC_7 (int ,int,int*,char**,scalar_t__*) ;

__attribute__((used)) static int
FUNC_8(const char *VAR_2, boolean_t VAR_3, boolean_t VAR_4)
{
 char *VAR_5;
 int VAR_6;
 int VAR_7 = 0;
 int VAR_8;
 pool_state_t VAR_9;
 boolean_t VAR_10;
 if ((VAR_6 = FUNC_5(VAR_2, VAR_0)) < 0)
  return (0);

 if (FUNC_7(VAR_1, VAR_6, &VAR_9, &VAR_5, &VAR_10) == 0 && VAR_10) {
  const char *VAR_11;

  switch (VAR_9) {
  case 131:
   VAR_11 = FUNC_3("active");
   break;

  case 130:
   VAR_11 = FUNC_3("exported");
   break;

  case 129:
   VAR_11 = FUNC_3("potentially active");
   break;

  default:
   VAR_11 = FUNC_3("unknown");
   break;
  }




  if (VAR_9 == 128 && VAR_4)
   return (0);

  if (VAR_9 == 131 ||
      VAR_9 == 128 || !VAR_3) {
   switch (VAR_9) {
   case 128:
    FUNC_6(FUNC_3("%s is reserved as a hot "
        "spare for pool %s\n"), VAR_2, VAR_5);
    break;
   default:
    FUNC_6(FUNC_3("%s is part of %s pool "
        "'%s'\n"), VAR_2, VAR_11, VAR_5);
    break;
   }
   VAR_7 = -1;
  }

  FUNC_2(VAR_5);
 }

 (void) FUNC_0(VAR_6);
 return (VAR_7);
}
