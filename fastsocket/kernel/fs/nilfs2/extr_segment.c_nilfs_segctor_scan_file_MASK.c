
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nilfs_sc_operations {int * collect_bmap; int * collect_node; int * collect_data; } ;
struct TYPE_3__ {int flags; } ;
struct nilfs_sc_info {TYPE_1__ sc_stage; } ;
struct inode {int dummy; } ;
struct TYPE_4__ {int i_bmap; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_2 (struct inode*) ;
 int VAR_2 ;
 int FUNC_3 (int ,int *) ;
 size_t FUNC_4 (struct inode*,int *,size_t,int ,int ) ;
 int FUNC_5 (struct inode*,int *) ;
 int FUNC_6 (struct nilfs_sc_info*,struct inode*,int *,int *) ;
 size_t FUNC_7 (struct nilfs_sc_info*) ;
 int FUNC_8 (struct nilfs_sc_info*,struct inode*) ;
 int VAR_3 ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static int FUNC_10(struct nilfs_sc_info *VAR_4,
       struct inode *VAR_5,
       struct nilfs_sc_operations *VAR_6)
{
 FUNC_1(VAR_2);
 FUNC_1(VAR_3);
 int VAR_7;

 if (!(VAR_4->sc_stage.flags & VAR_1)) {
  size_t VAR_8, VAR_9 = FUNC_7(VAR_4);

  VAR_8 = FUNC_4(
   VAR_5, &VAR_2, VAR_9 + 1, 0, VAR_0);
  if (VAR_8 > VAR_9) {
   VAR_7 = FUNC_6(
    VAR_4, VAR_5, &VAR_2,
    VAR_6->collect_data);
   FUNC_0(!VAR_7);
   goto break_or_fail;
  }
 }
 FUNC_5(VAR_5, &VAR_3);

 if (!(VAR_4->sc_stage.flags & VAR_1)) {
  VAR_7 = FUNC_6(
   VAR_4, VAR_5, &VAR_2, VAR_6->collect_data);
  if (FUNC_9(VAR_7)) {

   FUNC_6(
    VAR_4, VAR_5, &VAR_3, ((void*)0));
   goto break_or_fail;
  }
  VAR_4->sc_stage.flags |= VAR_1;
 }

 VAR_7 = FUNC_6(
  VAR_4, VAR_5, &VAR_3, VAR_6->collect_node);
 if (FUNC_9(VAR_7))
  goto break_or_fail;

 FUNC_3(FUNC_2(VAR_5)->i_bmap, &VAR_3);
 VAR_7 = FUNC_6(
  VAR_4, VAR_5, &VAR_3, VAR_6->collect_bmap);
 if (FUNC_9(VAR_7))
  goto break_or_fail;

 FUNC_8(VAR_4, VAR_5);
 VAR_4->sc_stage.flags &= ~VAR_1;

 break_or_fail:
 return VAR_7;
}
