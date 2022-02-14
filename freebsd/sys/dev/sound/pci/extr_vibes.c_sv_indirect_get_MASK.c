
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
struct sc_info {int enh_sh; int enh_st; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;

__attribute__((used)) static u_int8_t
FUNC_2(struct sc_info *VAR_5, u_int8_t VAR_6)
{
 if (VAR_6 == VAR_4 || VAR_6 == VAR_3)
  VAR_6 |= VAR_2;

 FUNC_1(VAR_5->enh_st, VAR_5->enh_sh, VAR_1, VAR_6);
 return FUNC_0(VAR_5->enh_st, VAR_5->enh_sh, VAR_0);
}
