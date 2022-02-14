
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct sc_info {int dummy; } ;


 int FUNC_0 (struct sc_info*,int,int) ;

__attribute__((used)) static void
FUNC_1(struct sc_info *VAR_0, int VAR_1, int VAR_2, int VAR_3, int VAR_4, int VAR_5,
    u_int32_t *VAR_6)
{
 FUNC_0(VAR_0, (*VAR_6) * 2, (VAR_4 << 12) | VAR_5);
 FUNC_0(VAR_0, (*VAR_6) * 2 + 1, (VAR_1 << 24) | (VAR_2 << 12) | VAR_3);
 (*VAR_6)++;
}
