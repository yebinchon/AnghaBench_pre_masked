
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u_int32_t ;
struct sc_info {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,unsigned int) ;
 int FUNC_1 (struct sc_info*,int ,unsigned int,int) ;

__attribute__((used)) static void
FUNC_2(struct sc_info *VAR_3, unsigned VAR_4)
{
 u_int32_t VAR_5;




 VAR_5 = VAR_2 << 8 | VAR_2;
 FUNC_1(VAR_3, VAR_0, VAR_4 * 2, 1);
 FUNC_1(VAR_3, VAR_1, VAR_5, 2);
 FUNC_1(VAR_3, VAR_0, VAR_4 * 2 + 1, 1);
 FUNC_1(VAR_3, VAR_1, VAR_5, 2);
}
