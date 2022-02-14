
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 long VAR_1 ;
 int FUNC_0 (int ) ;
 long FUNC_1 () ;
 long FUNC_2 () ;
 long FUNC_3 (long) ;
 int FUNC_4 (char*,long**,long*) ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_5(void *VAR_3)
{
 long *VAR_4 = VAR_3, VAR_5;

 FUNC_4("child: stack ~= %p, frobme = %p\n", &VAR_4, VAR_4);
 FUNC_0(VAR_2);

 if (VAR_4[0] != FUNC_2())
  return 1;

 if (VAR_4[0] == FUNC_1())
  return 2;

 VAR_5 = FUNC_3(VAR_4[1] - (long) &VAR_4);

 if (VAR_5 > 1024)
  return 3;

 VAR_4[1] = VAR_1;

 return (VAR_0);
}
