
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct agg_chinfo {int stereo; int qs16; int us; } ;
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
 struct agg_chinfo *VAR_8 = VAR_6;

 if (VAR_7 & VAR_0 || VAR_7 & VAR_2)
  return VAR_4;
 VAR_8->stereo = VAR_8->qs16 = VAR_8->us = 0;
 if (FUNC_0(VAR_7) > 1)
  VAR_8->stereo = 1;

 if (VAR_7 & VAR_3 || VAR_7 & VAR_1) {
  if (VAR_7 & VAR_3)
   VAR_8->us = 1;
 } else
  VAR_8->qs16 = 1;
 return 0;
}
