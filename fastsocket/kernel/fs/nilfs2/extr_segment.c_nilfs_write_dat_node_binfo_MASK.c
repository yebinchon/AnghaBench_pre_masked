
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nilfs_binfo_dat {int dummy; } ;
union nilfs_binfo {struct nilfs_binfo_dat bi_dat; } ;
struct nilfs_segsum_pointer {int dummy; } ;
struct nilfs_sc_info {int dummy; } ;


 struct nilfs_binfo_dat* FUNC_0 (struct nilfs_sc_info*,struct nilfs_segsum_pointer*,int) ;

__attribute__((used)) static void FUNC_1(struct nilfs_sc_info *VAR_0,
           struct nilfs_segsum_pointer *VAR_1,
           union nilfs_binfo *VAR_2)
{
 struct nilfs_binfo_dat *VAR_3 =
  FUNC_0(VAR_0, VAR_1, sizeof(*VAR_3));
 *VAR_3 = VAR_2->bi_dat;
}
