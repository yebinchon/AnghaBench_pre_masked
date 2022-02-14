
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct iser_conn {int num_rx_descs; scalar_t__ login_resp_buf; void* rx_descs; } ;



__attribute__((used)) static inline bool
FUNC_0(struct iser_conn *VAR_0, void *VAR_1)
{
 void *VAR_2 = VAR_0->rx_descs;
 u64 VAR_3 = VAR_0->num_rx_descs * sizeof(*VAR_0->rx_descs);
 void *VAR_4 = (void *)((uintptr_t)VAR_2 + (uintptr_t)VAR_3);

 if (VAR_2) {
  if (VAR_1 >= VAR_2 && VAR_1 < VAR_4)
   return 0;
 } else {
  return ((uintptr_t)VAR_1 != (uintptr_t)VAR_0->login_resp_buf);
 }

 return 1;
}
