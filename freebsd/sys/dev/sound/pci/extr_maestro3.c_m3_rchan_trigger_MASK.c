
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sc_rchinfo {struct sc_info* parent; } ;
struct sc_info {int dummy; } ;
typedef int kobj_t ;


 int FUNC_0 (struct sc_info*) ;
 int FUNC_1 (struct sc_info*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,void*,int) ;

__attribute__((used)) static int
FUNC_4(kobj_t VAR_0, void *VAR_1, int VAR_2)
{
 struct sc_rchinfo *VAR_3 = VAR_1;
 struct sc_info *VAR_4 = VAR_3->parent;
 int VAR_5;

 if (!FUNC_2(VAR_2))
  return (0);

 FUNC_0(VAR_4);
 VAR_5 = FUNC_3(VAR_0, VAR_1, VAR_2);
 FUNC_1(VAR_4);

 return (VAR_5);
}
