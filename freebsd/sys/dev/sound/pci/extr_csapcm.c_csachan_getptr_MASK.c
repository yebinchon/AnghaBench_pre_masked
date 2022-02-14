
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct csa_info {int res; } ;
struct csa_chinfo {scalar_t__ dir; int fmt; int buffer; struct csa_info* parent; } ;
typedef int kobj_t ;
typedef int csa_res ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static u_int32_t
FUNC_2(kobj_t VAR_5, void *VAR_6)
{
 struct csa_chinfo *VAR_7 = VAR_6;
 struct csa_info *VAR_8 = VAR_7->parent;
 csa_res *VAR_9;
 u_int32_t VAR_10;

 VAR_9 = &VAR_8->res;

 if (VAR_7->dir == VAR_4) {
  VAR_10 = FUNC_0(VAR_9, VAR_3) - FUNC_1(VAR_7->buffer);
  if ((VAR_7->fmt & VAR_1) != 0 || (VAR_7->fmt & VAR_0) != 0)
   VAR_10 >>= 1;
 } else {
  VAR_10 = FUNC_0(VAR_9, VAR_2) - FUNC_1(VAR_7->buffer);
  if ((VAR_7->fmt & VAR_1) != 0 || (VAR_7->fmt & VAR_0) != 0)
   VAR_10 >>= 1;
 }

 return (VAR_10);
}
