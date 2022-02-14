
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int KBDC ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int*,int ,int) ;
 scalar_t__ FUNC_1 (int ,int) ;
 scalar_t__ FUNC_2 (int ,int) ;
 scalar_t__ FUNC_3 (int ,int) ;

__attribute__((used)) static int
FUNC_4(KBDC VAR_2, int VAR_3, int VAR_4, int *VAR_5)
{
 int VAR_6;

 if (VAR_3 == 2) {
  VAR_6 = FUNC_3(VAR_2, 1) == 0;
  VAR_6 |= FUNC_1(VAR_2, VAR_4) == 0;
 } else {
  VAR_6 = FUNC_2(VAR_2, VAR_0) != VAR_1;
  VAR_6 |= FUNC_2(VAR_2, VAR_4) != VAR_1;
 }
 VAR_6 |= FUNC_0(VAR_2, VAR_5, 0, 3) != 3;

 return (VAR_6);
}
