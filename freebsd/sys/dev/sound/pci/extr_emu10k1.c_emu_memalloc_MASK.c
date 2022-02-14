
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u_int32_t ;
struct emu_mem {int* bmap; int* ptb_pages; int blocks; } ;
struct sc_info {struct emu_mem mem; } ;
struct emu_memblk {int buf; int pte_start; int pte_size; scalar_t__ buf_addr; int buf_map; } ;
typedef scalar_t__ bus_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,struct emu_memblk*,int ) ;
 void* FUNC_1 (struct sc_info*,int,scalar_t__*,int *) ;
 int FUNC_2 (struct emu_memblk*,int ) ;
 int VAR_4 ;
 struct emu_memblk* FUNC_3 (int,int ,int ) ;
 int FUNC_4 (char*,int,int,int) ;

__attribute__((used)) static void *
FUNC_5(struct sc_info *VAR_5, u_int32_t VAR_6, bus_addr_t *VAR_7)
{
 u_int32_t VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
 struct emu_mem *VAR_14 = &VAR_5->mem;
 struct emu_memblk *VAR_15;
 void *VAR_16;

 VAR_8 = VAR_6 / VAR_1;
 if (VAR_6 > (VAR_8 * VAR_1))
  VAR_8++;

 VAR_13 = 0;
 VAR_9 = 1;
 while (!VAR_13 && VAR_9 + VAR_8 < VAR_0) {
  VAR_13 = 1;
  for (VAR_10 = VAR_9; VAR_10 < VAR_9 + VAR_8; VAR_10++)
   if (VAR_14->bmap[VAR_10 >> 3] & (1 << (VAR_10 & 7)))
    VAR_13 = 0;
  if (!VAR_13)
   VAR_9++;
 }
 if (!VAR_13)
  return ((void*)0);
 VAR_15 = FUNC_3(sizeof(*VAR_15), VAR_2, VAR_3);
 if (VAR_15 == ((void*)0))
  return ((void*)0);
 VAR_16 = FUNC_1(VAR_5, VAR_6, &VAR_15->buf_addr, &VAR_15->buf_map);
 *VAR_7 = VAR_15->buf_addr;
 if (VAR_16 == ((void*)0)) {
  FUNC_2(VAR_15, VAR_2);
  return ((void*)0);
 }
 VAR_15->buf = VAR_16;
 VAR_15->pte_start = VAR_9;
 VAR_15->pte_size = VAR_8;




 VAR_11 = 0;
 for (VAR_10 = VAR_9; VAR_10 < VAR_9 + VAR_8; VAR_10++) {
  VAR_14->bmap[VAR_10 >> 3] |= 1 << (VAR_10 & 7);
  VAR_12 = (uint32_t)(VAR_15->buf_addr + VAR_11);




  VAR_14->ptb_pages[VAR_10] = (VAR_12 << 1) | VAR_10;
  VAR_11 += VAR_1;
 }
 FUNC_0(&VAR_14->blocks, VAR_15, VAR_4);
 return VAR_16;
}
