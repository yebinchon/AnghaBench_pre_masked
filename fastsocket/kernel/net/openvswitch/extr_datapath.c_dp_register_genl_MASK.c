
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct genl_family_and_ops {scalar_t__ group; int family; int n_ops; int ops; } ;


 int FUNC_0 (struct genl_family_and_ops*) ;
 struct genl_family_and_ops* VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_4(void)
{
 int VAR_1;
 int VAR_2;
 int VAR_3;

 VAR_1 = 0;
 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0); VAR_3++) {
  const struct genl_family_and_ops *VAR_4 = &VAR_0[VAR_3];

  VAR_2 = FUNC_2(VAR_4->family, VAR_4->ops,
          VAR_4->n_ops);
  if (VAR_2)
   goto error;
  VAR_1++;

  if (VAR_4->group) {
   VAR_2 = FUNC_3(VAR_4->family, VAR_4->group);
   if (VAR_2)
    goto error;
  }
 }

 return 0;

error:
 FUNC_1(VAR_1);
 return VAR_2;
}
