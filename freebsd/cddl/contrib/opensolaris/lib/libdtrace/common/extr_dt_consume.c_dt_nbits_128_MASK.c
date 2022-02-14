
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 scalar_t__ FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int) ;

__attribute__((used)) static int
FUNC_2(uint64_t *VAR_0)
{
 int VAR_1 = 0;
 uint64_t VAR_2[2];
 uint64_t VAR_3[2] = { 0, 0 };

 VAR_2[0] = VAR_0[0];
 VAR_2[1] = VAR_0[1];

 FUNC_1(VAR_2, -1);
 while (FUNC_0(VAR_2, VAR_3)) {
  FUNC_1(VAR_2, -1);
  VAR_1++;
 }

 return (VAR_1);
}
