
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * device_t ;


 int VAR_0 ;
 int * FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int VAR_1 ;
 int FUNC_3 () ;

__attribute__((used)) static int
FUNC_4(void)
{
 device_t VAR_2;

 if (!VAR_1)
  return (0);

 VAR_2 = FUNC_0(0, 0, 0);
 if (VAR_2 != ((void*)0) && FUNC_2(FUNC_1(VAR_2),
     VAR_0))
  return (1);

 return (FUNC_3());
}
