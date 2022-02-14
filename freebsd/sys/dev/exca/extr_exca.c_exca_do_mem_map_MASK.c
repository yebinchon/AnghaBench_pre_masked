
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct pccard_mem_handle {int kind; int cardaddr; int addr; int realsize; int size; } ;
struct mem_map_index_st {int memenable; int sysmem_win; int cardmem_lsb; int cardmem_msb; int sysmem_stop_lsb; int sysmem_stop_msb; int sysmem_start_lsb; int sysmem_start_msb; } ;
struct exca_softc {struct pccard_mem_handle* mem; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (struct exca_softc*,int ) ;
 int FUNC_3 (struct exca_softc*,int ,int) ;
 int FUNC_4 (struct exca_softc*,int ,int) ;
 struct mem_map_index_st* VAR_13 ;
 int FUNC_5 (char*,int,int,int,int,int,int,int,int,int,int,int,int,int) ;

__attribute__((used)) static void
FUNC_6(struct exca_softc *VAR_14, int VAR_15)
{
 struct mem_map_index_st *VAR_16;
 struct pccard_mem_handle *VAR_17;
 uint32_t VAR_18;
 uint32_t VAR_19;
 uint32_t VAR_20;

 VAR_16 = &VAR_13[VAR_15];
 VAR_17 = &VAR_14->mem[VAR_15];
 VAR_19 = (VAR_17->kind & VAR_11) ?
     VAR_8 : 0;
 VAR_20 = (VAR_17->kind & VAR_12) ?
     VAR_3 : 0;
 VAR_18 = ((VAR_17->cardaddr >> VAR_4) -
   (VAR_17->addr >> VAR_6)) & 0x3fff;
 FUNC_3(VAR_14, VAR_16->sysmem_start_lsb,
     VAR_17->addr >> VAR_6);
 FUNC_3(VAR_14, VAR_16->sysmem_start_msb,
     ((VAR_17->addr >> (VAR_6 + 8)) &
     VAR_7) | VAR_19);

 FUNC_3(VAR_14, VAR_16->sysmem_stop_lsb,
     (VAR_17->addr + VAR_17->realsize - 1) >> VAR_6);
 FUNC_3(VAR_14, VAR_16->sysmem_stop_msb,
     (((VAR_17->addr + VAR_17->realsize - 1) >>
     (VAR_6 + 8)) &
     VAR_9) |
     VAR_10);
 FUNC_3(VAR_14, VAR_16->sysmem_win, VAR_17->addr >> VAR_5);

 FUNC_3(VAR_14, VAR_16->cardmem_lsb, VAR_18 & 0xff);
 FUNC_3(VAR_14, VAR_16->cardmem_msb, ((VAR_18 >> 8) &
     VAR_2) | VAR_20);

 FUNC_1("%s %d-bit memory",
     VAR_17->kind & VAR_12 ? "attribute" : "common",
     VAR_17->kind & VAR_11 ? 16 : 8);
 FUNC_4(VAR_14, VAR_0, VAR_16->memenable |
     VAR_1);

 FUNC_0(100);
}
