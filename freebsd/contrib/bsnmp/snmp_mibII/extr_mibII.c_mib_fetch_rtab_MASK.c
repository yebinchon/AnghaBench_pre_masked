
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int*) ;
 int * FUNC_2 (int *,size_t) ;
 int FUNC_3 (int*,int ,int *,size_t*,int *,int ) ;
 int FUNC_4 (int ,char*,...) ;

u_char *
FUNC_5(int VAR_5, int VAR_6, int VAR_7, size_t *VAR_8)
{
 int VAR_9[6];
 u_char *VAR_10, *VAR_11;

 VAR_9[0] = VAR_0;
 VAR_9[1] = VAR_3;
 VAR_9[2] = 0;
 VAR_9[3] = VAR_5;
 VAR_9[4] = VAR_6;
 VAR_9[5] = VAR_7;

 *VAR_8 = 0;


 if (FUNC_3(VAR_9, FUNC_1(VAR_9), ((void*)0), VAR_8, ((void*)0), 0) == -1) {
  FUNC_4(VAR_2, "sysctl estimate (%d,%d,%d,%d,%d,%d): %m",
      VAR_9[0], VAR_9[1], VAR_9[2], VAR_9[3], VAR_9[4], VAR_9[5]);
  return (((void*)0));
 }
 if (*VAR_8 == 0)
  return (((void*)0));

 VAR_10 = ((void*)0);
 for (;;) {
  if ((VAR_11 = FUNC_2(VAR_10, *VAR_8)) == ((void*)0)) {
   FUNC_4(VAR_2, "sysctl buffer: %m");
   FUNC_0(VAR_10);
   return (((void*)0));
  }
  VAR_10 = VAR_11;

  if (FUNC_3(VAR_9, FUNC_1(VAR_9), VAR_10, VAR_8, ((void*)0), 0) == 0)
   break;

  if (VAR_4 != VAR_1) {
   FUNC_4(VAR_2, "sysctl get: %m");
   FUNC_0(VAR_10);
   return (((void*)0));
  }
  *VAR_8 += *VAR_8 / 8 + 1;
 }

 return (VAR_10);
}
