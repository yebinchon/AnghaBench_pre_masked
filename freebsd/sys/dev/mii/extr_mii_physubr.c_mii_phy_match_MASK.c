
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mii_phydesc {int dummy; } ;
struct mii_attach_args {int dummy; } ;


 struct mii_phydesc const* FUNC_0 (struct mii_attach_args const*,struct mii_phydesc const*,int) ;

const struct mii_phydesc *
FUNC_1(const struct mii_attach_args *VAR_0, const struct mii_phydesc *VAR_1)
{

 return (FUNC_0(VAR_0, VAR_1, sizeof(struct mii_phydesc)));
}
