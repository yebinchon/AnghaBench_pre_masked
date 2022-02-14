
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int KBDC ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(KBDC VAR_2)
{
 int VAR_3, VAR_4;

 FUNC_1(VAR_2, 10);
 VAR_3 = VAR_4 = -1;
 if (FUNC_3(VAR_2, VAR_0) != VAR_1)
  return -1;

 FUNC_0(10000);
 VAR_3 = FUNC_2(VAR_2);
 if (VAR_3 != -1)
  VAR_4 = FUNC_2(VAR_2);

 if ((VAR_3 == -1) || (VAR_4 == -1)) {
  FUNC_1(VAR_2, 10);
  FUNC_4(VAR_2);
  FUNC_5(VAR_2);
  return -1;
 }
 return ((VAR_4 << 8) | VAR_3);
}
