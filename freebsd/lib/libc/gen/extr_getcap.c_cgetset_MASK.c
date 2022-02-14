
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ VAR_2 ;
 int * FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *,char const*) ;
 scalar_t__ FUNC_3 (char const*) ;
 int * VAR_3 ;
 scalar_t__ VAR_4 ;

int
FUNC_4(const char *VAR_5)
{
 if (VAR_5 == ((void*)0)) {
  if (VAR_3)
   FUNC_0(VAR_3);
                VAR_3 = ((void*)0);
                VAR_4 = 0;
                return (0);
        }
        VAR_4 = FUNC_3(VAR_5);
        if ((VAR_3 = FUNC_1 (VAR_4 + 1)) == ((void*)0)) {
  VAR_1 = VAR_0;
                return (-1);
 }
 VAR_2 = 0;
        (void)FUNC_2(VAR_3, VAR_5);
        return (0);
}
