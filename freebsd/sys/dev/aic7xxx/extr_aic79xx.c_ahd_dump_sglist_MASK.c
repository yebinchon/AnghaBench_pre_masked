
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct scb {int sg_count; scalar_t__ sg_list; TYPE_1__* ahd_softc; } ;
struct ahd_dma_seg {int addr; int len; } ;
struct ahd_dma64_seg {int len; int addr; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int,int,int,int,char*) ;

void
FUNC_3(struct scb *VAR_4)
{
 int VAR_5;

 if (VAR_4->sg_count > 0) {
  if ((VAR_4->ahd_softc->flags & VAR_0) != 0) {
   struct ahd_dma64_seg *VAR_6;

   VAR_6 = (struct ahd_dma64_seg*)VAR_4->sg_list;
   for (VAR_5 = 0; VAR_5 < VAR_4->sg_count; VAR_5++) {
    uint64_t VAR_7;

    VAR_7 = FUNC_1(VAR_6[VAR_5].addr);
    FUNC_2("sg[%d] - Addr 0x%x%x : Length %d%s\n",
           VAR_5,
           (uint32_t)((VAR_7 >> 32) & 0xFFFFFFFF),
           (uint32_t)(VAR_7 & 0xFFFFFFFF),
           VAR_6[VAR_5].len & VAR_3,
           (VAR_6[VAR_5].len & VAR_1)
         ? " Last" : "");
   }
  } else {
   struct ahd_dma_seg *VAR_8;

   VAR_8 = (struct ahd_dma_seg*)VAR_4->sg_list;
   for (VAR_5 = 0; VAR_5 < VAR_4->sg_count; VAR_5++) {
    uint32_t VAR_9;

    VAR_9 = FUNC_0(VAR_8[VAR_5].len);
    FUNC_2("sg[%d] - Addr 0x%x%x : Length %d%s\n",
           VAR_5,
           (VAR_9 & VAR_2) >> 24,
           FUNC_0(VAR_8[VAR_5].addr),
           VAR_9 & VAR_3,
           VAR_9 & VAR_1 ? " Last" : "");
   }
  }
 }
}
