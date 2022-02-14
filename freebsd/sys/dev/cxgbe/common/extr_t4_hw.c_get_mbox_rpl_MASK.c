
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct adapter {int dummy; } ;
typedef int __be64 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct adapter*,int) ;

__attribute__((used)) static void FUNC_2(struct adapter *VAR_0, __be64 *VAR_1, int VAR_2,
    u32 VAR_3)
{
 for ( ; VAR_2; VAR_2--, VAR_3 += 8)
  *VAR_1++ = FUNC_0(FUNC_1(VAR_0, VAR_3));
}
