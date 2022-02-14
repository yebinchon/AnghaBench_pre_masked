
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct acpi_cx {int trans_lat; int res_rid; int type; int * p_lvlx; int res_type; } ;
struct acpi_cpu_softc {int cpu_prev_sleep; int cpu_p_blk_len; scalar_t__ cpu_cx_count; int cpu_dev; scalar_t__ cpu_p_blk; scalar_t__ cpu_non_c3; scalar_t__ cpu_non_c2; struct acpi_cx* cpu_cx_states; } ;
struct TYPE_5__ {int C2Latency; int C3Latency; } ;
struct TYPE_4__ {int BitWidth; scalar_t__ Address; int SpaceId; } ;
typedef TYPE_1__ ACPI_GENERIC_ADDRESS ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_3__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int *,int*,TYPE_1__*,int **,int ) ;
 int VAR_7 ;

__attribute__((used)) static void
FUNC_1(struct acpi_cpu_softc *VAR_8)
{
    ACPI_GENERIC_ADDRESS VAR_9;
    struct acpi_cx *VAR_10;

    VAR_8->cpu_cx_count = 0;
    VAR_10 = VAR_8->cpu_cx_states;


    VAR_8->cpu_prev_sleep = 1000000;


    VAR_10->type = VAR_1;
    VAR_10->trans_lat = 0;
    VAR_10++;
    VAR_8->cpu_non_c2 = VAR_8->cpu_cx_count;
    VAR_8->cpu_non_c3 = VAR_8->cpu_cx_count;
    VAR_8->cpu_cx_count++;
    if (VAR_8->cpu_p_blk_len < 5)
 return;


    VAR_9.SpaceId = VAR_0;
    VAR_9.BitWidth = 8;
    if (VAR_4.C2Latency <= 100) {
 VAR_9.Address = VAR_8->cpu_p_blk + 4;
 VAR_10->res_rid = 0;
 FUNC_0(VAR_8->cpu_dev, &VAR_10->res_type, &VAR_10->res_rid,
     &VAR_9, &VAR_10->p_lvlx, VAR_6);
 if (VAR_10->p_lvlx != ((void*)0)) {
     VAR_10->type = VAR_2;
     VAR_10->trans_lat = VAR_4.C2Latency;
     VAR_10++;
     VAR_8->cpu_non_c3 = VAR_8->cpu_cx_count;
     VAR_8->cpu_cx_count++;
 }
    }
    if (VAR_8->cpu_p_blk_len < 6)
 return;


    if (VAR_4.C3Latency <= 1000 && !(VAR_7 & VAR_5)) {
 VAR_9.Address = VAR_8->cpu_p_blk + 5;
 VAR_10->res_rid = 1;
 FUNC_0(VAR_8->cpu_dev, &VAR_10->res_type, &VAR_10->res_rid,
     &VAR_9, &VAR_10->p_lvlx, VAR_6);
 if (VAR_10->p_lvlx != ((void*)0)) {
     VAR_10->type = VAR_3;
     VAR_10->trans_lat = VAR_4.C3Latency;
     VAR_10++;
     VAR_8->cpu_cx_count++;
 }
    }
}
