
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct amr_sgentry {int sg_addr; int sg_count; } ;
struct amr_sg64entry {int sg_addr; int sg_count; } ;
struct TYPE_4__ {struct amr_sg64entry* sg64; struct amr_sgentry* sg32; } ;
struct amr_command {int ac_nsegments; int ac_mb_physaddr; int ac_sgbusaddr; int ac_flags; int ac_datamap; int ac_tag; TYPE_1__ ac_sg; } ;
struct TYPE_5__ {int ds_addr; int ds_len; } ;
typedef TYPE_2__ bus_dma_segment_t ;


 scalar_t__ FUNC_0 (struct amr_command*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void
FUNC_3(void *VAR_5, bus_dma_segment_t *VAR_6, int VAR_7, int VAR_8)
{
    struct amr_command *VAR_9 = (struct amr_command *)VAR_5;
    struct amr_sgentry *VAR_10;
    struct amr_sg64entry *VAR_11;
    int VAR_12, VAR_13;

    FUNC_2(3);


    VAR_10 = VAR_9->ac_sg.sg32;
    VAR_11 = VAR_9->ac_sg.sg64;

    if (FUNC_0(VAR_9)) {
 VAR_9->ac_nsegments = VAR_7;
 VAR_9->ac_mb_physaddr = 0xffffffff;
 for (VAR_13 = 0; VAR_13 < VAR_7; VAR_13++, VAR_11++) {
     VAR_11->sg_addr = VAR_6[VAR_13].ds_addr;
     VAR_11->sg_count = VAR_6[VAR_13].ds_len;
 }
    } else {

 if (VAR_7 < 2) {
     VAR_9->ac_nsegments = 0;
     VAR_9->ac_mb_physaddr = VAR_6[0].ds_addr;
 } else {
            VAR_9->ac_nsegments = VAR_7;
     VAR_9->ac_mb_physaddr = VAR_9->ac_sgbusaddr;
     for (VAR_13 = 0; VAR_13 < VAR_7; VAR_13++, VAR_10++) {
  VAR_10->sg_addr = VAR_6[VAR_13].ds_addr;
  VAR_10->sg_count = VAR_6[VAR_13].ds_len;
     }
 }
    }

    VAR_12 = 0;
    if (VAR_9->ac_flags & VAR_0)
 VAR_12 |= VAR_3;
    if (VAR_9->ac_flags & VAR_1)
 VAR_12 |= VAR_4;
    FUNC_1(VAR_9->ac_tag, VAR_9->ac_datamap, VAR_12);
    VAR_9->ac_flags |= VAR_2;
}
