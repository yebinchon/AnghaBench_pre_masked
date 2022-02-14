
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct au_info {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct au_info*,int ,int ,int) ;
 int FUNC_1 (struct au_info*,int ,int ,int,int) ;

__attribute__((used)) static void
FUNC_2(struct au_info *VAR_1, u_int32_t VAR_2, u_int32_t VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(VAR_1, 0, VAR_0, 4);
 VAR_4 &= ~(1 << VAR_2);
 VAR_4 |= (VAR_3 << VAR_2);
 FUNC_1(VAR_1, 0, VAR_0, VAR_4, 4);
}
