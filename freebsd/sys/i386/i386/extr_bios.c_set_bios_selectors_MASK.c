
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


union descriptor {int sd; } ;
struct soft_segment_descriptor {int member_4; int member_7; int ssd_limit; int ssd_base; int ssd_type; scalar_t__ ssd_def32; int member_8; int member_6; int member_5; int member_3; int member_2; int member_1; int member_0; } ;
struct TYPE_10__ {int limit; int base; } ;
struct TYPE_9__ {int limit; int base; } ;
struct TYPE_8__ {int limit; int base; } ;
struct TYPE_7__ {int limit; int base; } ;
struct TYPE_6__ {int limit; int base; } ;
struct bios_segments {TYPE_5__ args; TYPE_4__ util; TYPE_3__ data; TYPE_2__ code16; TYPE_1__ code32; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t FUNC_0 (int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 union descriptor* VAR_13 ;
 int FUNC_1 (struct soft_segment_descriptor*,int *) ;

void
FUNC_2(struct bios_segments *VAR_14, int VAR_15)
{
    struct soft_segment_descriptor VAR_16 = {
 0,
 0,
 VAR_10,
 0,
 1,
 0, 0,
 1,
 0
    };
    union descriptor *VAR_17;




    VAR_17 = VAR_13;


    VAR_16.ssd_base = VAR_14->code32.base;
    VAR_16.ssd_limit = VAR_14->code32.limit;
    FUNC_1(&VAR_16, &VAR_17[VAR_6].sd);

    VAR_16.ssd_def32 = 0;
    if (VAR_15 & VAR_1) {
 VAR_16.ssd_base = VAR_14->code16.base;
 VAR_16.ssd_limit = VAR_14->code16.limit;
 FUNC_1(&VAR_16, &VAR_17[VAR_5].sd);
    }

    VAR_16.ssd_type = VAR_11;
    if (VAR_15 & VAR_2) {
 VAR_16.ssd_base = VAR_14->data.base;
 VAR_16.ssd_limit = VAR_14->data.limit;
 FUNC_1(&VAR_16, &VAR_17[VAR_7].sd);
    }

    if (VAR_15 & VAR_3) {
 VAR_16.ssd_base = VAR_14->util.base;
 VAR_16.ssd_limit = VAR_14->util.limit;
 FUNC_1(&VAR_16, &VAR_17[VAR_8].sd);
    }

    if (VAR_15 & VAR_0) {
 VAR_16.ssd_base = VAR_14->args.base;
 VAR_16.ssd_limit = VAR_14->args.limit;
 FUNC_1(&VAR_16, &VAR_17[VAR_4].sd);
    }
}
