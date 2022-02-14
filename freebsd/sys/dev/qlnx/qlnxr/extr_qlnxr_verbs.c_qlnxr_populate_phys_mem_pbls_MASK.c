
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct regpair {void* hi; void* lo; } ;
struct qlnxr_pbl_info {int num_pbes; int pbl_size; scalar_t__ two_layered; } ;
struct qlnxr_pbl {scalar_t__ va; } ;
struct qlnxr_dev {int * ha; } ;
struct ib_phys_buf {int size; int addr; } ;
typedef int qlnx_host_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*,...) ;
 void* FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(struct qlnxr_dev *VAR_2,
 struct ib_phys_buf *VAR_3, int VAR_4,
 struct qlnxr_pbl *VAR_5, struct qlnxr_pbl_info *VAR_6)
{
 struct regpair *VAR_7;
 struct qlnxr_pbl *VAR_8;
 int VAR_9, VAR_10, VAR_11, VAR_12 = 0;
 qlnx_host_t *VAR_13;
        int VAR_14;
 u64 VAR_15;

 VAR_13 = VAR_2->ha;

 FUNC_1(VAR_13, "enter\n");

 if (!VAR_6) {
  FUNC_0(VAR_13, "PBL_INFO not initialized\n");
  return;
 }

 if (!VAR_6->num_pbes) {
  FUNC_0(VAR_13, "pbl_info->num_pbes == 0\n");
  return;
 }




 if (VAR_6->two_layered)
  VAR_8 = &VAR_5[1];
 else
  VAR_8 = VAR_5;

 VAR_7 = (struct regpair *)VAR_8->va;
 if (!VAR_7) {
  FUNC_1(VAR_13, "pbe is NULL\n");
  return;
 }

 VAR_11 = 0;

 for (VAR_14 = 0; VAR_14 < VAR_4; VAR_14++) {

  VAR_10 = VAR_3->size >> VAR_0;

  for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9++) {


   VAR_15 = VAR_3->addr + (VAR_1 * VAR_9);

   VAR_7->lo = FUNC_2((u32)VAR_15);
   VAR_7->hi = FUNC_2(((u32)(VAR_15 >> 32)));

   FUNC_1(VAR_13, "Populate pbl table:"
    " pbe->addr=0x%x:0x%x "
    " pbe_cnt = %d total_num_pbes=%d"
    " pbe=%p\n", VAR_7->lo, VAR_7->hi, VAR_11,
    VAR_12, VAR_7);

   VAR_11 ++;
   VAR_12 ++;
   VAR_7++;

   if (VAR_12 == VAR_6->num_pbes)
    return;




   if (VAR_11 == (VAR_6->pbl_size / sizeof(u64))) {
    VAR_8++;
    VAR_7 = (struct regpair *)VAR_8->va;
    VAR_11 = 0;
   }
  }
  VAR_3++;
 }
 FUNC_1(VAR_13, "exit\n");
 return;
}
