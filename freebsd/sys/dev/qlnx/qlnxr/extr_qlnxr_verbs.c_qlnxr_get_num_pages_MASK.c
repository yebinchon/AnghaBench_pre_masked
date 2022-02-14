
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct ib_phys_buf {scalar_t__ size; } ;
typedef int qlnx_host_t ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static size_t
FUNC_0(qlnx_host_t *VAR_1, struct ib_phys_buf *VAR_2,
 int VAR_3)
{
 int VAR_4;
 size_t VAR_5 = 0;
 u64 VAR_6;

 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {

  VAR_6 = 0;
  while (VAR_6 < VAR_2->size) {
   VAR_6 += VAR_0;
   VAR_5++;
  }
  VAR_2++;
 }
 return (VAR_5);
}
