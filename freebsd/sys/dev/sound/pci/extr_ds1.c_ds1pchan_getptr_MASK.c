
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct sc_pchinfo {int fmt; struct pbank* lslot; struct sc_info* parent; } ;
struct sc_info {int currbank; } ;
struct pbank {int PgStart; } ;
typedef int kobj_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static u_int32_t
FUNC_1(kobj_t VAR_1, void *VAR_2)
{
 struct sc_pchinfo *VAR_3 = VAR_2;
 struct sc_info *VAR_4 = VAR_3->parent;
 volatile struct pbank *VAR_5;
 int VAR_6;
 u_int32_t VAR_7;

 VAR_6 = (FUNC_0(VAR_3->fmt) > 1)? 1 : 0;
 VAR_6 += (VAR_3->fmt & VAR_0)? 1 : 0;

 VAR_5 = VAR_3->lslot + VAR_4->currbank;

 VAR_7 = VAR_5->PgStart;
 VAR_7 <<= VAR_6;
 return VAR_7;
}
