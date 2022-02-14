
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct cudbg_hdr {scalar_t__ hdr_len; } ;
struct cudbg_entity_hdr {int dummy; } ;


 int VAR_0 ;

int FUNC_0(void *VAR_1, int VAR_2, u32 VAR_3,
     struct cudbg_entity_hdr **VAR_4)
{
 int VAR_5 = 0;
 struct cudbg_hdr *VAR_6 = (struct cudbg_hdr *)VAR_1;

 if (VAR_6->hdr_len + (sizeof(struct cudbg_entity_hdr)*VAR_2) > VAR_3)
  return VAR_0;

 *VAR_4 = (struct cudbg_entity_hdr *)
        ((char *)VAR_1+VAR_6->hdr_len +
         (sizeof(struct cudbg_entity_hdr)*(VAR_2-1)));
 return VAR_5;
}
