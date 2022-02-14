
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mii_phydesc {int mpd_name; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 struct mii_phydesc* FUNC_2 (int ,struct mii_phydesc const*) ;

int
FUNC_3(device_t VAR_1, const struct mii_phydesc *VAR_2, int VAR_3)
{

 VAR_2 = FUNC_2(FUNC_0(VAR_1), VAR_2);
 if (VAR_2 != ((void*)0)) {
  FUNC_1(VAR_1, VAR_2->mpd_name);
  return (VAR_3);
 }
 return (VAR_0);
}
