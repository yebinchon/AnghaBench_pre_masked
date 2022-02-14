
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ibcw; } ;
typedef int SCR ;
typedef char CHAR_T ;


 int FUNC_0 (int *,int ,char*,scalar_t__,char*,size_t) ;
 TYPE_1__* FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,size_t) ;
 int FUNC_3 (int *,char*,size_t,size_t) ;
 int FUNC_4 (char) ;
 char* FUNC_5 (int *,char) ;
 int FUNC_6 (char*) ;
 char* FUNC_7 (size_t) ;
 scalar_t__ FUNC_8 (char const*) ;

char *
FUNC_9(
 SCR *VAR_0,
 const char *VAR_1,
 int *VAR_2)
{
 size_t VAR_3, VAR_4;
 char *VAR_5, *VAR_6, *VAR_7, *VAR_8;
 CHAR_T *VAR_9, *VAR_10;
 size_t VAR_11;

 *VAR_2 = 0;


 FUNC_0(VAR_0, FUNC_1(VAR_0)->ibcw, (char *)VAR_1, FUNC_8(VAR_1) + 1, VAR_9, VAR_11);
 for (VAR_10 = VAR_9; *VAR_10 != '\0'; ++VAR_10)
  if (!FUNC_4(*VAR_10))
   break;
 if (*VAR_10 == '\0')
  return ((char *)VAR_1);

 VAR_4 = 0;
 if (0) {
retry: if (VAR_0 == ((void*)0))
   FUNC_6(VAR_5);
  else
   FUNC_2(VAR_0, VAR_5, VAR_3);
  *VAR_2 = 0;
 }
 VAR_4 += 256;
 if (VAR_0 == ((void*)0)) {
  if ((VAR_5 = FUNC_7(VAR_4)) == ((void*)0))
   goto alloc_err;
 } else
  FUNC_3(VAR_0, VAR_5, VAR_3, VAR_4);
 if (0) {
alloc_err: return ("");
 }
 *VAR_2 = 1;

 for (VAR_7 = VAR_5, VAR_6 = (VAR_5 + VAR_3) - 1; *VAR_9 != '\0' && VAR_7 < VAR_6; ++VAR_9)
  for (VAR_8 = FUNC_5(VAR_0, *VAR_9); *VAR_8 != '\0' && VAR_7 < VAR_6; *VAR_7++ = *VAR_8++);
 if (VAR_7 == VAR_6)
  goto retry;
 *VAR_7 = '\0';
 return (VAR_5);
}
