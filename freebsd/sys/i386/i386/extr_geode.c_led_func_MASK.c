
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,int) ;

__attribute__((used)) static void
FUNC_2(void *VAR_1, int VAR_2)
{
 uint32_t VAR_3;
 int VAR_4;

 VAR_4 = *(int *)VAR_1;
 if (VAR_4 < 0) {
  VAR_4 = -VAR_4;
  VAR_2 = !VAR_2;
 }

 VAR_3 = FUNC_0(VAR_0 + 4);
 if (VAR_2)
  VAR_3 |= 1 << VAR_4;
 else
  VAR_3 &= ~(1 << VAR_4);
 FUNC_1(VAR_0, VAR_3);
}
