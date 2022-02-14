
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct shmid_kernel {TYPE_3__* shm_file; } ;
struct shmem_inode_info {int lock; scalar_t__ swapped; } ;
struct inode {struct address_space* i_mapping; } ;
struct hstate {int dummy; } ;
struct address_space {unsigned long nrpages; } ;
struct TYPE_6__ {TYPE_1__* dentry; } ;
struct TYPE_7__ {TYPE_2__ f_path; } ;
struct TYPE_5__ {struct inode* d_inode; } ;


 struct shmem_inode_info* FUNC_0 (struct inode*) ;
 struct hstate* FUNC_1 (TYPE_3__*) ;
 scalar_t__ FUNC_2 (TYPE_3__*) ;
 unsigned long FUNC_3 (struct hstate*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct shmid_kernel *VAR_0,
 unsigned long *VAR_1, unsigned long *VAR_2)
{
 struct inode *VAR_3;

 VAR_3 = VAR_0->shm_file->f_path.dentry->d_inode;

 if (FUNC_2(VAR_0->shm_file)) {
  struct address_space *VAR_4 = VAR_3->i_mapping;
  struct hstate *VAR_5 = FUNC_1(VAR_0->shm_file);
  *VAR_1 += FUNC_3(VAR_5) * VAR_4->nrpages;
 } else {







  *VAR_1 += VAR_3->i_mapping->nrpages;

 }
}
