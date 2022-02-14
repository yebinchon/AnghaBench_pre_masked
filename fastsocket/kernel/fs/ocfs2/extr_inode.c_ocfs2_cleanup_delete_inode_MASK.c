
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_data; } ;
struct TYPE_2__ {scalar_t__ ip_blkno; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int FUNC_1 (int ,char*,unsigned long long,int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct inode*,int) ;

__attribute__((used)) static void FUNC_4(struct inode *VAR_0,
           int VAR_1)
{
 FUNC_1(0, "Cleanup inode %llu, sync = %d\n",
      (unsigned long long)FUNC_0(VAR_0)->ip_blkno, VAR_1);
 if (VAR_1)
  FUNC_3(VAR_0, 1);
 FUNC_2(&VAR_0->i_data, 0);
}
