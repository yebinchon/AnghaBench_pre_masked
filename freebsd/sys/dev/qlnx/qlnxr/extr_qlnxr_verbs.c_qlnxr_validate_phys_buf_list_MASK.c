
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef scalar_t__ u64 ;
struct ib_phys_buf {scalar_t__ size; } ;
typedef int qlnx_host_t ;


 int FUNC_0 (int *,char*,struct ib_phys_buf*,int) ;

__attribute__((used)) static int
FUNC_1(qlnx_host_t *VAR_0, struct ib_phys_buf *VAR_1,
 int VAR_2, uint64_t *VAR_3)
{
 u64 VAR_4 = 0;

 *VAR_3 = 0;

 if (!VAR_2 || VAR_1 == ((void*)0)) {
  FUNC_0(VAR_0,
   "failed buf_list = %p buf_cnt = %d\n", VAR_1, VAR_2);
  return (-1);
 }

 VAR_4 = VAR_1->size;

 if (!VAR_4) {
  FUNC_0(VAR_0,
   "failed buf_list = %p buf_cnt = %d"
   " buf_list->size = 0\n", VAR_1, VAR_2);
  return (-1);
 }

 while (VAR_2) {

  *VAR_3 += VAR_1->size;

  if (VAR_1->size != VAR_4) {
   FUNC_0(VAR_0,
    "failed buf_list = %p buf_cnt = %d"
    " all buffers should have same size\n",
    VAR_1, VAR_2);
   return (-1);
  }

  VAR_1++;
  VAR_2--;
 }
 return (0);
}
