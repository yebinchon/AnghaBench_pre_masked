
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mii_phydesc {scalar_t__ mpd_oui; scalar_t__ mpd_model; int * mpd_name; } ;
struct mii_attach_args {int mii_id2; int mii_id1; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;

const struct mii_phydesc *
FUNC_2(const struct mii_attach_args *VAR_0,
  const struct mii_phydesc *VAR_1, size_t VAR_2)
{

 for (; VAR_1->mpd_name != ((void*)0);
     VAR_1 = (const struct mii_phydesc *)((const char *)VAR_1 + VAR_2)) {
  if (FUNC_1(VAR_0->mii_id1, VAR_0->mii_id2) == VAR_1->mpd_oui &&
      FUNC_0(VAR_0->mii_id2) == VAR_1->mpd_model)
   return (VAR_1);
 }
 return (((void*)0));
}
