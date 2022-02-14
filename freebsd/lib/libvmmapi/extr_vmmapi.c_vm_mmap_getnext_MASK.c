
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_paddr_t ;
typedef int vm_ooffset_t ;
struct vmctx {int fd; } ;
struct vm_memmap {int segid; size_t len; int prot; int flags; int segoff; int gpa; } ;


 int VAR_0 ;
 int FUNC_0 (struct vm_memmap*,int) ;
 int FUNC_1 (int ,int ,struct vm_memmap*) ;

int
FUNC_2(struct vmctx *VAR_1, vm_paddr_t *VAR_2, int *VAR_3,
    vm_ooffset_t *VAR_4, size_t *VAR_5, int *VAR_6, int *VAR_7)
{
 struct vm_memmap VAR_8;
 int VAR_9;

 FUNC_0(&VAR_8, sizeof(struct vm_memmap));
 VAR_8.gpa = *VAR_2;
 VAR_9 = FUNC_1(VAR_1->fd, VAR_0, &VAR_8);
 if (VAR_9 == 0) {
  *VAR_2 = VAR_8.gpa;
  *VAR_3 = VAR_8.segid;
  *VAR_4 = VAR_8.segoff;
  *VAR_5 = VAR_8.len;
  *VAR_6 = VAR_8.prot;
  *VAR_7 = VAR_8.flags;
 }
 return (VAR_9);
}
