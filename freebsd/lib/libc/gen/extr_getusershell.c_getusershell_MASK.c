
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__* VAR_0 ;
 scalar_t__* FUNC_0 () ;

char *
FUNC_1(void)
{
 char *VAR_1;

 if (VAR_0 == ((void*)0))
  VAR_0 = FUNC_0();

 VAR_1 = (char *)*VAR_0;
 if (VAR_1 != ((void*)0))
  VAR_0++;
 return (VAR_1);
}
