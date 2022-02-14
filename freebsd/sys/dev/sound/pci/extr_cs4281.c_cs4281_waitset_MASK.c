
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct sc_info {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct sc_info*,int) ;

__attribute__((used)) static int
FUNC_2(struct sc_info *VAR_0, int VAR_1, u_int32_t VAR_2, int VAR_3)
{
    u_int32_t VAR_4;

    while (VAR_3 > 0) {
 FUNC_0(100);
 VAR_4 = FUNC_1(VAR_0, VAR_1);
 if ((VAR_4 & VAR_2) == VAR_2) break;
 VAR_3 --;
    }
    return VAR_3;
}
