
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mthca_profile {int num_uar; int num_srq; scalar_t__ uarc_size; } ;
struct mthca_init_hca_param {int dummy; } ;
struct mthca_dev_lim {int uar_size; int max_srqs; } ;
struct mthca_dev {int mthca_flags; } ;
typedef int s64 ;


 int VAR_0 ;
 int VAR_1 ;
 struct mthca_profile VAR_2 ;
 int FUNC_0 (struct mthca_dev*,struct mthca_init_hca_param*) ;
 int FUNC_1 (struct mthca_dev*) ;
 int FUNC_2 (struct mthca_dev*) ;
 int FUNC_3 (struct mthca_dev*) ;
 int FUNC_4 (struct mthca_dev*) ;
 int FUNC_5 (struct mthca_dev*,struct mthca_dev_lim*) ;
 int FUNC_6 (struct mthca_dev*,char*,int) ;
 int FUNC_7 (struct mthca_dev*,struct mthca_profile*,struct mthca_dev_lim*,struct mthca_init_hca_param*) ;

__attribute__((used)) static int FUNC_8(struct mthca_dev *VAR_3)
{
 s64 VAR_4;
 int VAR_5;
 struct mthca_dev_lim VAR_6;
 struct mthca_profile VAR_7;
 struct mthca_init_hca_param VAR_8;

 VAR_5 = FUNC_4(VAR_3);
 if (VAR_5) {
  FUNC_6(VAR_3, "SYS_EN command returned %d, aborting.\n", VAR_5);
  return VAR_5;
 }

 VAR_5 = FUNC_2(VAR_3);
 if (VAR_5) {
  FUNC_6(VAR_3, "QUERY_FW command returned %d,"
    " aborting.\n", VAR_5);
  goto err_disable;
 }
 VAR_5 = FUNC_1(VAR_3);
 if (VAR_5) {
  FUNC_6(VAR_3, "QUERY_DDR command returned %d, aborting.\n", VAR_5);
  goto err_disable;
 }

 VAR_5 = FUNC_5(VAR_3, &VAR_6);
 if (VAR_5) {
  FUNC_6(VAR_3, "QUERY_DEV_LIM command returned %d, aborting.\n", VAR_5);
  goto err_disable;
 }

 VAR_7 = VAR_2;
 VAR_7.num_uar = VAR_6.uar_size / VAR_1;
 VAR_7.uarc_size = 0;
 if (VAR_3->mthca_flags & VAR_0)
  VAR_7.num_srq = VAR_6.max_srqs;

 VAR_4 = FUNC_7(VAR_3, &VAR_7, &VAR_6, &VAR_8);
 if (VAR_4 < 0) {
  VAR_5 = VAR_4;
  goto err_disable;
 }

 VAR_5 = FUNC_0(VAR_3, &VAR_8);
 if (VAR_5) {
  FUNC_6(VAR_3, "INIT_HCA command returned %d, aborting.\n", VAR_5);
  goto err_disable;
 }

 return 0;

err_disable:
 FUNC_3(VAR_3);

 return VAR_5;
}
