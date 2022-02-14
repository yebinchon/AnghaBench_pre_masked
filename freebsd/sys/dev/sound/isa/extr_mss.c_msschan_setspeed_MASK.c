
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct mss_info {int dummy; } ;
struct mss_chinfo {struct mss_info* parent; } ;
typedef int kobj_t ;


 int FUNC_0 (struct mss_info*) ;
 int FUNC_1 (struct mss_chinfo*,int ) ;
 int FUNC_2 (struct mss_info*) ;

__attribute__((used)) static u_int32_t
FUNC_3(kobj_t VAR_0, void *VAR_1, u_int32_t VAR_2)
{
 struct mss_chinfo *VAR_3 = VAR_1;
 struct mss_info *VAR_4 = VAR_3->parent;
 u_int32_t VAR_5;

 FUNC_0(VAR_4);
 VAR_5 = FUNC_1(VAR_3, VAR_2);
 FUNC_2(VAR_4);

 return VAR_5;
}
