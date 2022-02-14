
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct devinfo_i_rman {struct devinfo_i_rman* dd_location; struct devinfo_i_rman* dd_pnpinfo; struct devinfo_i_rman* dd_drivername; struct devinfo_i_rman* dd_desc; struct devinfo_i_rman* dd_name; } ;
struct devinfo_i_res {struct devinfo_i_res* dd_location; struct devinfo_i_res* dd_pnpinfo; struct devinfo_i_res* dd_drivername; struct devinfo_i_res* dd_desc; struct devinfo_i_res* dd_name; } ;
struct devinfo_i_dev {struct devinfo_i_dev* dd_location; struct devinfo_i_dev* dd_pnpinfo; struct devinfo_i_dev* dd_drivername; struct devinfo_i_dev* dd_desc; struct devinfo_i_dev* dd_name; } ;


 struct devinfo_i_rman* FUNC_0 (int *) ;
 int FUNC_1 (int *,struct devinfo_i_rman*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct devinfo_i_rman*) ;

void
FUNC_3(void)
{
 struct devinfo_i_dev *VAR_8;
 struct devinfo_i_rman *VAR_9;
 struct devinfo_i_res *VAR_10;

 while ((VAR_8 = FUNC_0(&VAR_1)) != ((void*)0)) {
  FUNC_1(&VAR_1, VAR_8, VAR_0);
  FUNC_2(VAR_8->dd_name);
  FUNC_2(VAR_8->dd_desc);
  FUNC_2(VAR_8->dd_drivername);
  FUNC_2(VAR_8->dd_pnpinfo);
  FUNC_2(VAR_8->dd_location);
  FUNC_2(VAR_8);
 }
 while ((VAR_9 = FUNC_0(&VAR_5)) != ((void*)0)) {
  FUNC_1(&VAR_5, VAR_9, VAR_6);
  FUNC_2(VAR_9);
 }
 while ((VAR_10 = FUNC_0(&VAR_4)) != ((void*)0)) {
  FUNC_1(&VAR_4, VAR_10, VAR_7);
  FUNC_2(VAR_10);
 }
 VAR_3 = 0;
 VAR_2 = 0;
}
