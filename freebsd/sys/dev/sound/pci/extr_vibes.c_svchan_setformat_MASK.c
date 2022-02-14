
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct sc_chinfo {int fmt; } ;
typedef int kobj_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_1(kobj_t VAR_5, void *VAR_6, u_int32_t VAR_7)
{
 struct sc_chinfo *VAR_8 = VAR_6;


 VAR_8->fmt = (FUNC_0(VAR_7) > 1) ? VAR_3 : VAR_1;
 VAR_8->fmt |= (VAR_7 & VAR_0) ? VAR_2 : VAR_4;
 return 0;
}
