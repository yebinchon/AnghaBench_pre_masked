
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct emu_memblk {int buf_addr; int pte_start; int pte_size; char* owner; void* buf; int buf_map; } ;
struct emu_mem {int* bmap; int* ptb_pages; int blocks; TYPE_1__* card; } ;
typedef int bus_addr_t ;
struct TYPE_2__ {int dbg_level; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,struct emu_memblk*,int ) ;
 int FUNC_1 (struct emu_memblk*,int) ;
 int FUNC_2 (int ,char*) ;
 void* FUNC_3 (struct emu_mem*,int,int*,int *) ;
 int FUNC_4 (struct emu_memblk*,int ) ;
 int VAR_5 ;
 struct emu_memblk* FUNC_5 (int,int ,int ) ;
 int FUNC_6 (char*,char const*,int) ;

__attribute__((used)) static void *
FUNC_7(struct emu_mem *VAR_6, uint32_t VAR_7, bus_addr_t * VAR_8, const char *VAR_9)
{
 uint32_t VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;
 struct emu_memblk *VAR_16;
 void *VAR_17;

 VAR_10 = VAR_7 / VAR_0;
 if (VAR_7 > (VAR_10 * VAR_0))
  VAR_10++;
 if (VAR_10 > VAR_2 / VAR_0) {
  if (VAR_6->card->dbg_level > 2)
   FUNC_2(VAR_6->card->dev, "emu_memalloc: memory request tool large\n");
  return (((void*)0));
  }

 VAR_15 = 0;
 VAR_11 = 1;
 while (!VAR_15 && VAR_11 + VAR_10 < VAR_1) {
  VAR_15 = 1;
  for (VAR_12 = VAR_11; VAR_12 < VAR_11 + VAR_10; VAR_12++)
   if (VAR_6->bmap[VAR_12 >> 3] & (1 << (VAR_12 & 7)))
    VAR_15 = 0;
  if (!VAR_15)
   VAR_11++;
 }
 if (!VAR_15) {
  if (VAR_6->card->dbg_level > 2)
   FUNC_2(VAR_6->card->dev, "emu_memalloc: no free space in bitmap\n");
  return (((void*)0));
  }
 VAR_16 = FUNC_5(sizeof(*VAR_16), VAR_3, VAR_4);
 if (VAR_16 == ((void*)0)) {
  if (VAR_6->card->dbg_level > 2)
   FUNC_2(VAR_6->card->dev, "emu_memalloc: buffer allocation failed\n");
  return (((void*)0));
  }
 FUNC_1(VAR_16, sizeof(*VAR_16));
 VAR_17 = FUNC_3(VAR_6, VAR_7, &VAR_16->buf_addr, &VAR_16->buf_map);
 *VAR_8 = VAR_16->buf_addr;
 if (VAR_17 == ((void*)0)) {
  if (VAR_6->card->dbg_level > 2)
   FUNC_2(VAR_6->card->dev, "emu_memalloc: can't setup HW memory\n");
  FUNC_4(VAR_16, VAR_3);
  return (((void*)0));
 }
 VAR_16->buf = VAR_17;
 VAR_16->pte_start = VAR_11;
 VAR_16->pte_size = VAR_10;
 FUNC_6(VAR_16->owner, VAR_9, 15);
 VAR_16->owner[15] = '\0';
 VAR_13 = 0;
 for (VAR_12 = VAR_11; VAR_12 < VAR_11 + VAR_10; VAR_12++) {
  VAR_6->bmap[VAR_12 >> 3] |= 1 << (VAR_12 & 7);
  VAR_14 = (uint32_t) (VAR_16->buf_addr + VAR_13);
  VAR_6->ptb_pages[VAR_12] = (VAR_14 << 1) | VAR_12;
  VAR_13 += VAR_0;
 }
 FUNC_0(&VAR_6->blocks, VAR_16, VAR_5);
 return (VAR_17);
}
