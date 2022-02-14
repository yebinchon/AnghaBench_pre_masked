
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct agg_rchinfo {int hwptr; scalar_t__ stereo; } ;
typedef int kobj_t ;



__attribute__((used)) static u_int32_t
FUNC_0(kobj_t VAR_0, void *VAR_1)
{
 struct agg_rchinfo *VAR_2 = VAR_1;

 return VAR_2->stereo? VAR_2->hwptr << 2 : VAR_2->hwptr << 1;
}
