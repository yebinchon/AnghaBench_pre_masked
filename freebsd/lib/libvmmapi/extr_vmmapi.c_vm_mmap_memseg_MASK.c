
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_paddr_t ;
typedef scalar_t__ vm_ooffset_t ;
struct vmctx {int memflags; int fd; } ;
struct vm_memmap {scalar_t__ gpa; int segid; scalar_t__ segoff; size_t len; int prot; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,struct vm_memmap*) ;
 int FUNC_1 (struct vmctx*,scalar_t__*,int*,scalar_t__*,size_t*,int*,int*) ;

int
FUNC_2(struct vmctx *VAR_5, vm_paddr_t VAR_6, int VAR_7, vm_ooffset_t VAR_8,
    size_t VAR_9, int VAR_10)
{
 struct vm_memmap VAR_11;
 int VAR_12, VAR_13;

 VAR_11.gpa = VAR_6;
 VAR_11.segid = VAR_7;
 VAR_11.segoff = VAR_8;
 VAR_11.len = VAR_9;
 VAR_11.prot = VAR_10;
 VAR_11.flags = 0;

 if (VAR_5->memflags & VAR_2)
  VAR_11.flags |= VAR_1;





 VAR_12 = FUNC_1(VAR_5, &VAR_6, &VAR_7, &VAR_8, &VAR_9, &VAR_10, &VAR_13);
 if (VAR_12 == 0 && VAR_6 == VAR_11.gpa) {
  if (VAR_7 != VAR_11.segid || VAR_8 != VAR_11.segoff ||
      VAR_10 != VAR_11.prot || VAR_13 != VAR_11.flags) {
   VAR_4 = VAR_0;
   return (-1);
  } else {
   return (0);
  }
 }

 VAR_12 = FUNC_0(VAR_5->fd, VAR_3, &VAR_11);
 return (VAR_12);
}
