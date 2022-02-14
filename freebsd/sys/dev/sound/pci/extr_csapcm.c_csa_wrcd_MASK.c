
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct csa_info {int res; } ;
typedef int kobj_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct csa_info*,int) ;
 int FUNC_1 (int *,scalar_t__,int ) ;

__attribute__((used)) static int
FUNC_2(kobj_t VAR_1, void *VAR_2, int VAR_3, u_int32_t VAR_4)
{
 struct csa_info *VAR_5 = (struct csa_info *)VAR_2;

 FUNC_0(VAR_5, 1);
 FUNC_1(&VAR_5->res, VAR_3 + VAR_0, VAR_4);
 FUNC_0(VAR_5, -1);

 return 0;
}
