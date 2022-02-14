
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nilfs_sc_info {int sc_dsync_end; int sc_dsync_start; } ;
struct inode {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_2 (struct inode*,int *,size_t,int ,int ) ;
 int FUNC_3 (struct nilfs_sc_info*,struct inode*,int *,int ) ;
 size_t FUNC_4 (struct nilfs_sc_info*) ;
 int FUNC_5 (struct nilfs_sc_info*,struct inode*) ;

__attribute__((used)) static int FUNC_6(struct nilfs_sc_info *VAR_2,
      struct inode *VAR_3)
{
 FUNC_1(VAR_0);
 size_t VAR_4, VAR_5 = FUNC_4(VAR_2);
 int VAR_6;

 VAR_4 = FUNC_2(VAR_3, &VAR_0, VAR_5 + 1,
         VAR_2->sc_dsync_start,
         VAR_2->sc_dsync_end);

 VAR_6 = FUNC_3(VAR_2, VAR_3, &VAR_0,
       VAR_1);
 if (!VAR_6) {
  FUNC_5(VAR_2, VAR_3);
  FUNC_0(VAR_4 > VAR_5);

 }
 return VAR_6;
}
