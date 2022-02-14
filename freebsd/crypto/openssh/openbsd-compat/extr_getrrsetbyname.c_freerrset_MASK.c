
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int16_t ;
struct rrsetinfo {size_t rri_nrdatas; size_t rri_nsigs; struct rrsetinfo* rri_name; struct rrsetinfo* rri_sigs; struct rrsetinfo* rdi_data; struct rrsetinfo* rri_rdatas; } ;


 int FUNC_0 (struct rrsetinfo*) ;

void
FUNC_1(struct rrsetinfo *VAR_0)
{
 u_int16_t VAR_1;

 if (VAR_0 == ((void*)0))
  return;

 if (VAR_0->rri_rdatas) {
  for (VAR_1 = 0; VAR_1 < VAR_0->rri_nrdatas; VAR_1++) {
   if (VAR_0->rri_rdatas[VAR_1].rdi_data == ((void*)0))
    break;
   FUNC_0(VAR_0->rri_rdatas[VAR_1].rdi_data);
  }
  FUNC_0(VAR_0->rri_rdatas);
 }

 if (VAR_0->rri_sigs) {
  for (VAR_1 = 0; VAR_1 < VAR_0->rri_nsigs; VAR_1++) {
   if (VAR_0->rri_sigs[VAR_1].rdi_data == ((void*)0))
    break;
   FUNC_0(VAR_0->rri_sigs[VAR_1].rdi_data);
  }
  FUNC_0(VAR_0->rri_sigs);
 }

 if (VAR_0->rri_name)
  FUNC_0(VAR_0->rri_name);
 FUNC_0(VAR_0);
}
