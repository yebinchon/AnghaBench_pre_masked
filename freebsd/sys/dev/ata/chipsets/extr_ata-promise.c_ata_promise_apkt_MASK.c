
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int8_t ;
struct TYPE_3__ {int feature; int count; int lba; int command; } ;
struct TYPE_4__ {TYPE_1__ ata; } ;
struct ata_request {int flags; TYPE_2__ u; int unit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;

__attribute__((used)) static int
FUNC_1(u_int8_t *VAR_17, struct ata_request *VAR_18)
{
    int VAR_19 = 12;

    VAR_17[VAR_19++] = VAR_9 | VAR_14 | VAR_11|VAR_5;
    VAR_17[VAR_19++] = VAR_6 | VAR_7 | FUNC_0(VAR_18->unit);
    VAR_17[VAR_19++] = VAR_9 | VAR_12;
    VAR_17[VAR_19++] = VAR_0;

    if (VAR_18->flags & VAR_15) {
 VAR_17[VAR_19++] = VAR_10 | VAR_14 | VAR_8;
 VAR_17[VAR_19++] = VAR_18->u.ata.feature >> 8;
 VAR_17[VAR_19++] = VAR_18->u.ata.feature;
 VAR_17[VAR_19++] = VAR_10 | VAR_14 | VAR_2;
 VAR_17[VAR_19++] = VAR_18->u.ata.count >> 8;
 VAR_17[VAR_19++] = VAR_18->u.ata.count;
 VAR_17[VAR_19++] = VAR_10 | VAR_14 | VAR_16;
 VAR_17[VAR_19++] = VAR_18->u.ata.lba >> 24;
 VAR_17[VAR_19++] = VAR_18->u.ata.lba;
 VAR_17[VAR_19++] = VAR_10 | VAR_14 | VAR_3;
 VAR_17[VAR_19++] = VAR_18->u.ata.lba >> 32;
 VAR_17[VAR_19++] = VAR_18->u.ata.lba >> 8;
 VAR_17[VAR_19++] = VAR_10 | VAR_14 | VAR_4;
 VAR_17[VAR_19++] = VAR_18->u.ata.lba >> 40;
 VAR_17[VAR_19++] = VAR_18->u.ata.lba >> 16;
 VAR_17[VAR_19++] = VAR_9 | VAR_14 | VAR_5;
 VAR_17[VAR_19++] = VAR_7 | FUNC_0(VAR_18->unit);
    }
    else {
 VAR_17[VAR_19++] = VAR_9 | VAR_14 | VAR_8;
 VAR_17[VAR_19++] = VAR_18->u.ata.feature;
 VAR_17[VAR_19++] = VAR_9 | VAR_14 | VAR_2;
 VAR_17[VAR_19++] = VAR_18->u.ata.count;
 VAR_17[VAR_19++] = VAR_9 | VAR_14 | VAR_16;
 VAR_17[VAR_19++] = VAR_18->u.ata.lba;
 VAR_17[VAR_19++] = VAR_9 | VAR_14 | VAR_3;
 VAR_17[VAR_19++] = VAR_18->u.ata.lba >> 8;
 VAR_17[VAR_19++] = VAR_9 | VAR_14 | VAR_4;
 VAR_17[VAR_19++] = VAR_18->u.ata.lba >> 16;
 VAR_17[VAR_19++] = VAR_9 | VAR_14 | VAR_5;
 VAR_17[VAR_19++] = VAR_7 | VAR_6 | FUNC_0(VAR_18->unit) |
       ((VAR_18->u.ata.lba >> 24)&0xf);
    }
    VAR_17[VAR_19++] = VAR_9 | VAR_13 | VAR_1;
    VAR_17[VAR_19++] = VAR_18->u.ata.command;
    return VAR_19;
}
