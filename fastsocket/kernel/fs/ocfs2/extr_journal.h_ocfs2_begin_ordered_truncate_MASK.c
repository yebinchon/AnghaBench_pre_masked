
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct inode {int i_sb; } ;
typedef int loff_t ;
struct TYPE_6__ {int ip_jinode; } ;
struct TYPE_5__ {TYPE_1__* journal; } ;
struct TYPE_4__ {int j_journal; } ;


 TYPE_3__* FUNC_0 (struct inode*) ;
 TYPE_2__* FUNC_1 (int ) ;
 int FUNC_2 (int ,int *,int ) ;

__attribute__((used)) static inline int FUNC_3(struct inode *VAR_0,
            loff_t VAR_1)
{
 return FUNC_2(
    FUNC_1(VAR_0->i_sb)->journal->j_journal,
    &FUNC_0(VAR_0)->ip_jinode,
    VAR_1);
}
