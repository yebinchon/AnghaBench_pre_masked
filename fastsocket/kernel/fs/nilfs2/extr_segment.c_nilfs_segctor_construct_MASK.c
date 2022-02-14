
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct the_nilfs {int ns_sem; int ns_ndirtyblks; } ;
struct nilfs_segctor_req {scalar_t__ mode; int sc_err; int sb_err; } ;
struct nilfs_sc_info {int sc_flags; struct nilfs_sb_info* sc_sbi; } ;
struct nilfs_sb_info {struct the_nilfs* s_nilfs; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct the_nilfs*) ;
 int FUNC_4 (struct nilfs_sb_info*,int ) ;
 scalar_t__ FUNC_5 (struct the_nilfs*) ;
 int FUNC_6 (struct nilfs_sc_info*) ;
 int FUNC_7 (struct nilfs_sc_info*,scalar_t__) ;
 scalar_t__ FUNC_8 (int ,int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct nilfs_sc_info *VAR_3,
       struct nilfs_segctor_req *VAR_4)
{
 struct nilfs_sb_info *VAR_5 = VAR_3->sc_sbi;
 struct the_nilfs *VAR_6 = VAR_5->s_nilfs;
 int VAR_7 = 0;

 if (FUNC_5(VAR_6))
  VAR_4->mode = VAR_2;
 if (!FUNC_6(VAR_3)) {
  VAR_7 = FUNC_7(VAR_3, VAR_4->mode);
  VAR_4->sc_err = VAR_7;
 }
 if (FUNC_2(!VAR_7)) {
  if (VAR_4->mode != VAR_1)
   FUNC_0(&VAR_6->ns_ndirtyblks, 0);
  if (FUNC_8(VAR_0, &VAR_3->sc_flags) &&
      FUNC_5(VAR_6)) {
   FUNC_1(&VAR_6->ns_sem);
   VAR_4->sb_err = FUNC_4(VAR_5,
     FUNC_3(VAR_6));
   FUNC_9(&VAR_6->ns_sem);
  }
 }
 return VAR_7;
}
