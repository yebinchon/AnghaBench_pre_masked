
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u64 ;
struct vm_area_struct {unsigned long vm_pgoff; unsigned long vm_end; unsigned long vm_start; int vm_flags; void* vm_page_prot; } ;
struct qlnxr_ucontext {int dpi; int dpi_size; } ;
struct qlnxr_dev {unsigned long db_phys_addr; unsigned long db_size; int * ha; } ;
struct ib_ucontext {int device; } ;
typedef int qlnx_host_t ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,char*,...) ;
 int VAR_3 ;
 struct qlnxr_dev* FUNC_2 (int ) ;
 struct qlnxr_ucontext* FUNC_3 (struct ib_ucontext*) ;
 int FUNC_4 (struct vm_area_struct*,int,unsigned long,unsigned long,void*) ;
 void* FUNC_5 (void*) ;
 int FUNC_6 (struct qlnxr_ucontext*,unsigned long,unsigned long) ;

int
FUNC_7(struct ib_ucontext *VAR_4, struct vm_area_struct *VAR_5)
{
 struct qlnxr_ucontext *VAR_6 = FUNC_3(VAR_4);
 struct qlnxr_dev *VAR_7 = FUNC_2((VAR_4->device));
 unsigned long VAR_8 = VAR_5->vm_pgoff << VAR_1;
 u64 VAR_9;
 unsigned long VAR_10 = (VAR_5->vm_end - VAR_5->vm_start);
 int VAR_11 = 0;
 bool VAR_12;
 qlnx_host_t *VAR_13;

 VAR_13 = VAR_7->ha;




 VAR_9 = VAR_7->db_phys_addr;


 FUNC_1(VAR_13, "qedr_mmap enter vm_page=0x%lx"
  " vm_pgoff=0x%lx unmapped_db=0x%llx db_size=%x, len=%lx\n",
  VAR_8, VAR_5->vm_pgoff, VAR_9,
  VAR_7->db_size, VAR_10);

 if ((VAR_5->vm_start & (VAR_2 - 1)) || (VAR_10 & (VAR_2 - 1))) {
  FUNC_0(VAR_13, "Vma_start not page aligned "
   "vm_start = %ld vma_end = %ld\n", VAR_5->vm_start,
   VAR_5->vm_end);
  return -VAR_0;
 }

 VAR_12 = FUNC_6(VAR_6, VAR_8, VAR_10);
 if (!VAR_12) {
  FUNC_0(VAR_13, "Vma_pgoff not found in mapped array = %ld\n",
   VAR_5->vm_pgoff);
  return -VAR_0;
 }

 FUNC_1(VAR_13, "Mapping doorbell bar\n");
 if ((VAR_8 >= VAR_9) && (VAR_8 <= (VAR_9 +
  VAR_7->db_size))) {

  FUNC_1(VAR_13, "Mapping doorbell bar\n");

  VAR_5->vm_page_prot = FUNC_5(VAR_5->vm_page_prot);

  VAR_11 = FUNC_4(VAR_5, VAR_5->vm_start, VAR_5->vm_pgoff,
         VAR_2, VAR_5->vm_page_prot);
 } else {
  FUNC_1(VAR_13, "Mapping chains\n");
  VAR_11 = FUNC_4(VAR_5, VAR_5->vm_start,
      VAR_5->vm_pgoff, VAR_10, VAR_5->vm_page_prot);
 }



 FUNC_1(VAR_13, "exit [%d]\n", VAR_11);
 return VAR_11;
}
