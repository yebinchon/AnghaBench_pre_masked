
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int16_t ;
struct gdt_softc {int* sc_gcscratch; int sc_info; int sc_bus_cnt; int* sc_bus_id; int sc_virt_bus; int sc_raw_feat; int sc_cache_feat; char* oem_name; scalar_t__ sc_vendor; int sc_info2; int sc_lock; int sc_dpmembase; TYPE_2__* sc_hdr; int sc_devnode; int sc_status; int sc_service; int sc_fw_vers; int sc_dev; int sc_init_level; int sc_free_gccb; scalar_t__ sc_gcscratch_busbase; int sc_buffer_dmat; struct gdt_ccb* sc_gccbs; int sc_gcscratch_dmamap; int sc_gcscratch_dmat; int sc_parent_dmat; int sc_ucmd_queue; int sc_ccb_queue; int sc_pending_gccb; int sc_state; } ;
struct gdt_ccb {int gc_cmd_index; int* gc_scratch; int* gc_cmd; int gc_timeout; scalar_t__ gc_scratch_busbase; int gc_map_flag; int gc_dmamap; int gc_flags; } ;
typedef int gdt_statist_t ;
struct TYPE_4__ {int scsi_host_drive_inquiry_vendor_id; } ;
struct TYPE_6__ {TYPE_1__ text; } ;
typedef TYPE_3__ gdt_oem_str_record_t ;
typedef int gdt_oem_record_t ;
struct TYPE_5__ {int hd_present; int hd_size; int hd_heads; int hd_secs; int hd_devtype; } ;


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
 int FUNC_0 (int ,char*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 size_t VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 size_t VAR_22 ;
 size_t VAR_23 ;
 int VAR_24 ;
 size_t VAR_25 ;
 size_t VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 scalar_t__ VAR_52 ;
 int VAR_53 ;
 int VAR_54 ;
 int VAR_55 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,struct gdt_ccb*,int ) ;
 int FUNC_3 (int *) ;
 int VAR_56 ;
 int FUNC_4 (int *,int) ;
 scalar_t__ FUNC_5 (int ,int,int ,int ,int ,int *,int *,int,int,int ,int ,int ,int *,int *) ;
 scalar_t__ FUNC_6 (int ,int ,int *) ;
 int FUNC_7 (int ,int ,int*,int,int ,scalar_t__*,int ) ;
 scalar_t__ FUNC_8 (int ,void**,int ,int *) ;
 int VAR_57 ;
 int FUNC_9 (int*,int) ;
 int FUNC_10 (int *,int *,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,char*,...) ;
 int FUNC_13 () ;
 int VAR_58 ;
 int FUNC_14 (int*,int) ;
 int FUNC_15 (int,int*,int*,int*) ;
 int FUNC_16 (struct gdt_softc*,struct gdt_ccb*) ;
 struct gdt_ccb* FUNC_17 (struct gdt_softc*) ;
 scalar_t__ FUNC_18 (struct gdt_softc*,struct gdt_ccb*,int ,int ,int,int,int) ;
 int FUNC_19 (struct gdt_softc*) ;
 int VAR_59 ;
 int VAR_60 ;
 struct gdt_ccb* FUNC_20 (int,int ,int) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (char*,int ) ;
 int VAR_61 ;
 int FUNC_24 (char*,char*) ;
 int FUNC_25 (char*,int ,int) ;

int
FUNC_26(struct gdt_softc *VAR_62)
{
    u_int16_t VAR_63;
    int VAR_64, VAR_65, VAR_66, VAR_67, VAR_68;
    struct gdt_ccb *VAR_69;

    FUNC_0(VAR_10, ("iir_init()\n"));

    VAR_62->sc_state = VAR_41;
    FUNC_13();
    FUNC_9(&VAR_59, sizeof(gdt_statist_t));

    FUNC_1(&VAR_62->sc_free_gccb);
    FUNC_1(&VAR_62->sc_pending_gccb);
    FUNC_3(&VAR_62->sc_ccb_queue);
    FUNC_3(&VAR_62->sc_ucmd_queue);


    if (FUNC_5(VAR_62->sc_parent_dmat, 1, 0,
                                      VAR_3,
                                       VAR_2,
                                     ((void*)0), ((void*)0),
                 VAR_5,
                   VAR_36,
                                       VAR_4,
                                    VAR_0,
                  VAR_57,
                 &VAR_62->sc_lock,
                           &VAR_62->sc_buffer_dmat) != 0) {
 FUNC_12(VAR_62->sc_devnode,
     "bus_dma_tag_create(..., gdt->sc_buffer_dmat) failed\n");
        return (1);
    }
    VAR_62->sc_init_level++;


    if (FUNC_5(VAR_62->sc_parent_dmat,
                   1,
                  0,
                                      VAR_3,
                                       VAR_2,
                                     ((void*)0),
                   ((void*)0),
                           VAR_34 * VAR_45,
                                        1,
                                       VAR_4,
               0, VAR_57,
                 &VAR_62->sc_lock,
      &VAR_62->sc_gcscratch_dmat) != 0) {
        FUNC_12(VAR_62->sc_devnode,
     "bus_dma_tag_create(...,gdt->sc_gcscratch_dmat) failed\n");
        return (1);
    }
    VAR_62->sc_init_level++;


    if (FUNC_8(VAR_62->sc_gcscratch_dmat, (void **)&VAR_62->sc_gcscratch,
                         VAR_1, &VAR_62->sc_gcscratch_dmamap) != 0) {
        FUNC_12(VAR_62->sc_devnode,
     "bus_dmamem_alloc(...,&gdt->sc_gccbs,...) failed\n");
        return (1);
    }
    VAR_62->sc_init_level++;


    FUNC_7(VAR_62->sc_gcscratch_dmat, VAR_62->sc_gcscratch_dmamap,
                    VAR_62->sc_gcscratch, VAR_34 * VAR_45,
                    VAR_60, &VAR_62->sc_gcscratch_busbase, 0);
    VAR_62->sc_init_level++;


    FUNC_9(VAR_62->sc_gcscratch, VAR_34 * VAR_45);


    VAR_62->sc_gccbs = FUNC_20(sizeof(struct gdt_ccb) * VAR_34, VAR_53,
        VAR_54 | VAR_55);
    if (VAR_62->sc_gccbs == ((void*)0)) {
        FUNC_12(VAR_62->sc_devnode, "no memory for gccbs.\n");
        return (1);
    }
    for (VAR_64 = VAR_34-1; VAR_64 >= 0; VAR_64--) {
        VAR_69 = &VAR_62->sc_gccbs[VAR_64];
        VAR_69->gc_cmd_index = VAR_64 + 2;
        VAR_69->gc_flags = VAR_12;
        VAR_69->gc_map_flag = VAR_6;
        if (FUNC_6(VAR_62->sc_buffer_dmat, 0,
                              &VAR_69->gc_dmamap) != 0)
            return(1);
        VAR_69->gc_map_flag = VAR_56;
        VAR_69->gc_scratch = &VAR_62->sc_gcscratch[VAR_45 * VAR_64];
        VAR_69->gc_scratch_busbase = VAR_62->sc_gcscratch_busbase + VAR_45 * VAR_64;
 FUNC_10(&VAR_69->gc_timeout, &VAR_62->sc_lock, 0);
        FUNC_2(&VAR_62->sc_free_gccb, VAR_69, VAR_61);
    }
    VAR_62->sc_init_level++;


    VAR_62->sc_dev = FUNC_19(VAR_62);


    FUNC_21(&VAR_62->sc_lock);
    VAR_69 = FUNC_17(VAR_62);
    if (VAR_69 == ((void*)0)) {
 FUNC_22(&VAR_62->sc_lock);
        FUNC_12(VAR_62->sc_devnode, "No free command index found\n");
        return (1);
    }
    FUNC_9(VAR_69->gc_cmd, VAR_8);

    if (!FUNC_18(VAR_62, VAR_69, VAR_46, VAR_18,
                          0, 0, 0)) {
        FUNC_12(VAR_62->sc_devnode,
     "Screen service initialization error %d\n", VAR_62->sc_status);
        FUNC_16(VAR_62, VAR_69);
 FUNC_22(&VAR_62->sc_lock);
        return (1);
    }

    FUNC_18(VAR_62, VAR_69, VAR_7, VAR_51,
                     0, 0, 0);

    if (!FUNC_18(VAR_62, VAR_69, VAR_7, VAR_18,
                          VAR_31, 0, 0)) {
        FUNC_12(VAR_62->sc_devnode, "Cache service initialization error %d\n",
               VAR_62->sc_status);
        FUNC_16(VAR_62, VAR_69);
 FUNC_22(&VAR_62->sc_lock);
        return (1);
    }
    VAR_63 = (u_int16_t)VAR_62->sc_info;
    VAR_62->sc_fw_vers = VAR_62->sc_service;


    FUNC_14(VAR_69->gc_scratch + VAR_29, VAR_28);
    VAR_69->gc_scratch[VAR_26] = VAR_33;
    VAR_69->gc_scratch[VAR_23] = 0;
    VAR_69->gc_scratch[VAR_25] = VAR_33 - 1;
    FUNC_14(VAR_69->gc_scratch + VAR_27, VAR_24);
    if (FUNC_18(VAR_62, VAR_69, VAR_7, VAR_21,
                         VAR_20, VAR_19,
                         VAR_24 + VAR_33 * VAR_43)) {
        VAR_62->sc_bus_cnt = VAR_69->gc_scratch[VAR_22];
        for (VAR_64 = 0; VAR_64 < VAR_62->sc_bus_cnt; VAR_64++) {
            VAR_65 = VAR_69->gc_scratch[VAR_24 +
                                 VAR_64 * VAR_43 + VAR_42];
            VAR_62->sc_bus_id[VAR_64] = VAR_65 < VAR_35 ? VAR_65 : 0xff;
        }
    } else {

        for (VAR_64 = 0; VAR_64 < VAR_33; VAR_64++) {
            FUNC_14(VAR_69->gc_scratch + VAR_13, VAR_64);
            if (!FUNC_18(VAR_62, VAR_69, VAR_7, VAR_21,
                                  VAR_48 | VAR_32,
                                  VAR_30 | VAR_19,
                                  VAR_15)) {
                if (VAR_64 == 0) {
                    FUNC_12(VAR_62->sc_devnode, "Cannot get channel count, "
                           "error %d\n", VAR_62->sc_status);
                    FUNC_16(VAR_62, VAR_69);
      FUNC_22(&VAR_62->sc_lock);
                    return (1);
                }
                break;
            }
            VAR_62->sc_bus_id[VAR_64] =
                (VAR_69->gc_scratch[VAR_14] < VAR_35) ?
                VAR_69->gc_scratch[VAR_14] : 0xff;
        }
        VAR_62->sc_bus_cnt = VAR_64;
    }

    VAR_62->sc_virt_bus = VAR_62->sc_bus_cnt;
    VAR_62->sc_bus_cnt++;

    if (!FUNC_18(VAR_62, VAR_69, VAR_47, VAR_18,
                          0, 0, 0)) {
            FUNC_12(VAR_62->sc_devnode,
  "Raw service initialization error %d\n", VAR_62->sc_status);
            FUNC_16(VAR_62, VAR_69);
     FUNC_22(&VAR_62->sc_lock);
            return (1);
    }


    VAR_62->sc_raw_feat = 0;
    if (FUNC_18(VAR_62, VAR_69, VAR_47, VAR_50,
                         VAR_44, 0, 0)) {
        if (FUNC_18(VAR_62, VAR_69, VAR_47, VAR_16,
                             0, 0, 0)) {
            VAR_62->sc_raw_feat = VAR_62->sc_info;
            if (!(VAR_62->sc_info & VAR_44)) {
                FUNC_23("%s: Scatter/Gather Raw Service "
      "required but not supported!\n",
      FUNC_11(VAR_62->sc_devnode));
                FUNC_16(VAR_62, VAR_69);
  FUNC_22(&VAR_62->sc_lock);
                return (1);
            }
        }
    }


    VAR_62->sc_cache_feat = 0;
    if (FUNC_18(VAR_62, VAR_69, VAR_7, VAR_50,
                         0, VAR_44, 0)) {
        if (FUNC_18(VAR_62, VAR_69, VAR_7, VAR_16,
                             0, 0, 0)) {
            VAR_62->sc_cache_feat = VAR_62->sc_info;
            if (!(VAR_62->sc_info & VAR_44)) {
                FUNC_23("%s: Scatter/Gather Cache Service "
      "required but not supported!\n",
      FUNC_11(VAR_62->sc_devnode));
                FUNC_16(VAR_62, VAR_69);
  FUNC_22(&VAR_62->sc_lock);
                return (1);
            }
        }
    }


    FUNC_14(VAR_69->gc_scratch + VAR_40, 0x01);
    FUNC_14(VAR_69->gc_scratch + VAR_38, sizeof(gdt_oem_record_t));
    if (FUNC_18(VAR_62, VAR_69, VAR_7, VAR_21,
                         VAR_39, VAR_19,
                         sizeof(gdt_oem_str_record_t))) {
     FUNC_25(VAR_62->oem_name, ((gdt_oem_str_record_t *)
            VAR_69->gc_scratch)->text.scsi_host_drive_inquiry_vendor_id, 7);
  VAR_62->oem_name[7]='\0';
 } else {

  if (VAR_62->sc_vendor == VAR_52)
            FUNC_24(VAR_62->oem_name,"Intel  ");
        else
            FUNC_24(VAR_62->oem_name,"ICP    ");
    }


    for (VAR_64 = 0; VAR_64 < VAR_63 && VAR_64 < VAR_37; VAR_64++) {
        if (FUNC_18(VAR_62, VAR_69, VAR_7, VAR_17,
                             VAR_64, 0, 0)) {
            VAR_62->sc_hdr[VAR_64].hd_present = 1;
            VAR_62->sc_hdr[VAR_64].hd_size = VAR_62->sc_info;




            VAR_62->sc_hdr[VAR_64].hd_size &= ~VAR_49;
            if (VAR_62->sc_info2 == 0)
                FUNC_15(VAR_62->sc_hdr[VAR_64].hd_size,
                                 &VAR_66, &VAR_67, &VAR_68);
            else {
                VAR_67 = VAR_62->sc_info2 & 0xff;
                VAR_68 = (VAR_62->sc_info2 >> 8) & 0xff;
                VAR_66 = VAR_62->sc_hdr[VAR_64].hd_size / VAR_67 /
                    VAR_68;
            }
            VAR_62->sc_hdr[VAR_64].hd_heads = VAR_67;
            VAR_62->sc_hdr[VAR_64].hd_secs = VAR_68;

            VAR_62->sc_hdr[VAR_64].hd_size = VAR_66 * VAR_67 * VAR_68;

            if (FUNC_18(VAR_62, VAR_69, VAR_7,
                                 VAR_9, VAR_64, 0, 0))
                VAR_62->sc_hdr[VAR_64].hd_devtype = VAR_62->sc_info;
        }
    }

    FUNC_0(VAR_11, ("dpmem %x %d-bus %d cache device%s\n",
                             VAR_62->sc_dpmembase,
                             VAR_62->sc_bus_cnt, VAR_63,
                             VAR_63 == 1 ? "" : "s"));
    FUNC_16(VAR_62, VAR_69);
    FUNC_22(&VAR_62->sc_lock);

    FUNC_4(&VAR_58, 1);
    return (0);
}
