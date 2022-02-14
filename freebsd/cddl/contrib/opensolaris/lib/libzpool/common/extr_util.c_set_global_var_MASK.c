
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef scalar_t__ u_longlong_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (void*) ;
 void* FUNC_1 (char*,int ) ;
 scalar_t__* FUNC_2 (void*,char*) ;
 int FUNC_3 (int ,char*,...) ;
 int VAR_6 ;
 char* FUNC_4 (char*,char) ;
 scalar_t__ FUNC_5 (char*,int *,int ) ;

int
FUNC_6(char *VAR_7)
{
 void *VAR_8;
 char *VAR_9 = VAR_7, *VAR_10;
 u_longlong_t VAR_11;







 FUNC_3(VAR_6, "Setting global variables is only supported on "
     "little-endian systems\n", VAR_9);
 return (VAR_2);

 if ((VAR_10 = FUNC_4(VAR_7, '=')) != ((void*)0)) {
  *VAR_10 = '\0';
  VAR_10++;
  VAR_11 = FUNC_5(VAR_10, ((void*)0), 0);
  if (VAR_11 > VAR_5) {
   FUNC_3(VAR_6, "Value for global variable '%s' must "
       "be a 32-bit unsigned integer\n", VAR_9);
   return (VAR_3);
  }
 } else {
  return (VAR_0);
 }

 VAR_8 = FUNC_1("libzpool.so", VAR_4);
 if (VAR_8 != ((void*)0)) {
  uint32_t *VAR_12;
  VAR_12 = FUNC_2(VAR_8, VAR_9);
  if (VAR_12 == ((void*)0)) {
   FUNC_3(VAR_6, "Global variable '%s' does not exist "
       "in libzpool.so\n", VAR_9);
   return (VAR_0);
  }
  *VAR_12 = (uint32_t)VAR_11;

  FUNC_0(VAR_8);
 } else {
  FUNC_3(VAR_6, "Failed to open libzpool.so to set global "
      "variable\n");
  return (VAR_1);
 }

 return (0);
}
