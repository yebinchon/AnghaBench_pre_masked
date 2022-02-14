
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cudbg_hdr {int dummy; } ;
struct cudbg_flash_hdr {int dummy; } ;
struct cudbg_entity_hdr {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (void*,void*,int,int) ;

int FUNC_1(void *VAR_1, void *VAR_2, u32 VAR_3)
{
 int VAR_4;
 u32 VAR_5, VAR_6;
 void *VAR_7 = ((void*)0);
 u32 VAR_8 = 0;

 VAR_6 = VAR_0 * sizeof(struct cudbg_entity_hdr) +
  sizeof(struct cudbg_hdr);
 VAR_5 = VAR_6 + sizeof(struct cudbg_flash_hdr);


 VAR_4 = FUNC_0(VAR_1, VAR_2, VAR_5, 0);
 if (VAR_4 != 0)
  goto out;
 VAR_7 = (char *)VAR_2 + VAR_5;
 VAR_8 = VAR_3 - VAR_5;


 VAR_4 = FUNC_0(VAR_1, VAR_7, VAR_8, 1);
 if (VAR_4 != 0)
  goto out;

out:
 return VAR_4;
}
