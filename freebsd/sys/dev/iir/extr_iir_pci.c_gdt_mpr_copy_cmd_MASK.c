
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
typedef int u_int16_t ;
struct gdt_softc {int sc_cmd_off; int sc_dpmem; int sc_cmd_cnt; } ;
struct gdt_ccb {int gc_service; scalar_t__ gc_cmd; int gc_cmd_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,int,int ) ;
 int FUNC_2 (int ,int,int *,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int) ;

void
FUNC_5(struct gdt_softc *VAR_8, struct gdt_ccb *VAR_9)
{
    u_int16_t VAR_10 = FUNC_4(VAR_9->gc_cmd_len, sizeof (u_int32_t));
    u_int16_t VAR_11 = VAR_8->sc_cmd_off;
    u_int16_t VAR_12 = VAR_8->sc_cmd_cnt++;

    FUNC_0(VAR_4, ("gdt_mpr_copy_cmd(%p) ", VAR_8));

    VAR_8->sc_cmd_off += VAR_10;

    FUNC_2(VAR_8->sc_dpmem, VAR_5 + VAR_3 + VAR_11,
 (u_int32_t *)VAR_9->gc_cmd, VAR_10 >> 2);
    FUNC_1(VAR_8->sc_dpmem,
 VAR_5 + VAR_0 + VAR_12 * VAR_1 + VAR_6,
 FUNC_3(VAR_2 + VAR_11));
    FUNC_1(VAR_8->sc_dpmem,
 VAR_5 + VAR_0 + VAR_12 * VAR_1 + VAR_7,
 FUNC_3(VAR_9->gc_service));
}
