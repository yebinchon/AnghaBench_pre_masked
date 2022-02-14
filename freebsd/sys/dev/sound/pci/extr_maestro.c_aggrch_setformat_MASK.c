
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct agg_rchinfo {int stereo; } ;
typedef int kobj_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_1(kobj_t VAR_2, void *VAR_3, u_int32_t VAR_4)
{
 struct agg_rchinfo *VAR_5 = VAR_3;

 if (!(VAR_4 & VAR_0))
  return VAR_1;
 if (FUNC_0(VAR_4) > 1)
  VAR_5->stereo = 1;
 else
  VAR_5->stereo = 0;
 return 0;
}
