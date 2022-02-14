
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_mode; int i_gid; int i_uid; } ;
struct TYPE_2__ {scalar_t__ k_objectid; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (struct inode*) ;

__attribute__((used)) static int FUNC_5(struct inode *VAR_1, struct inode *VAR_2, int VAR_3)
{




 VAR_1->i_uid = FUNC_3();
 VAR_1->i_mode = VAR_3;


 FUNC_0(VAR_1)->k_objectid = 0;

 if (VAR_2->i_mode & VAR_0) {
  VAR_1->i_gid = VAR_2->i_gid;
  if (FUNC_1(VAR_3))
   VAR_1->i_mode |= VAR_0;
 } else {
  VAR_1->i_gid = FUNC_2();
 }
 FUNC_4(VAR_1);
 return 0;
}
