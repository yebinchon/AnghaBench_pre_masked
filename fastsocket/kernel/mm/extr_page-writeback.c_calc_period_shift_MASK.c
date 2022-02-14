
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (unsigned long) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_2(void)
{
 unsigned long VAR_3;

 if (VAR_1)
  VAR_3 = VAR_1 / VAR_0;
 else
  VAR_3 = (VAR_2 * FUNC_0()) /
    100;
 if (VAR_3 < 2)
  VAR_3 = 2;

 return 2 + FUNC_1(VAR_3 - 1);
}
