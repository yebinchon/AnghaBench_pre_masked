
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
struct sc_info {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct sc_info*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct sc_info*,int ) ;
 int FUNC_3 (struct sc_info*,int ,int) ;

__attribute__((used)) static u_int8_t
FUNC_4(struct sc_info *VAR_3)
{
 u_int8_t VAR_4, VAR_5;

 FUNC_1(VAR_3);

 VAR_4 = FUNC_2(VAR_3, VAR_0);
 VAR_5 = VAR_4 & ~VAR_2;
        FUNC_0(10 * 1000);
 FUNC_3(VAR_3, VAR_0, VAR_5 & ~VAR_1);
        FUNC_0(10 * 1000);

 return VAR_5;
}
