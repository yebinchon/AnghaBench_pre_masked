
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int adapter_t ;


 int FUNC_0 (int *,unsigned int) ;
 int FUNC_1 (int *,unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_2(adapter_t *VAR_0, unsigned int VAR_1,
        unsigned int VAR_2, u32 *VAR_3, unsigned int VAR_4,
        unsigned int VAR_5)
{
 while (VAR_4--) {
  FUNC_1(VAR_0, VAR_1, VAR_5);
  *VAR_3++ = FUNC_0(VAR_0, VAR_2);
  VAR_5++;
 }
}
