
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct genl_ops {int dummy; } ;
struct genl_family {int dummy; } ;


 int FUNC_0 (struct genl_family*) ;
 int FUNC_1 (struct genl_family*,struct genl_ops*) ;
 int FUNC_2 (struct genl_family*) ;

int FUNC_3(struct genl_family *VAR_0,
 struct genl_ops *VAR_1, size_t VAR_2)
{
 int VAR_3, VAR_4;

 VAR_3 = FUNC_0(VAR_0);
 if (VAR_3)
  return VAR_3;

 for (VAR_4 = 0; VAR_4 < VAR_2; ++VAR_4, ++VAR_1) {
  VAR_3 = FUNC_1(VAR_0, VAR_1);
  if (VAR_3)
   goto err_out;
 }
 return 0;
err_out:
 FUNC_2(VAR_0);
 return VAR_3;
}
