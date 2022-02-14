
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_14__ {int bits; } ;
struct TYPE_13__ {int bits; } ;
struct TYPE_12__ {int bits; } ;
struct TYPE_11__ {int bits; } ;
struct TYPE_10__ {int bits; } ;
struct TYPE_9__ {int bits; } ;
struct TYPE_8__ {int bits; } ;
struct qos_info {TYPE_7__ additional_bofs; TYPE_6__ link_disc_time; TYPE_5__ data_size; TYPE_4__ max_turn_time; TYPE_3__ min_turn_time; TYPE_2__ window_size; TYPE_1__ baud_rate; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,int,int*) ;

void FUNC_2(struct qos_info *VAR_4)
{
 int VAR_5;







 VAR_5 = FUNC_1(VAR_2, VAR_0, 10,
        &VAR_4->baud_rate.bits);
 VAR_2 = FUNC_0(VAR_5, VAR_0);


 VAR_5 = FUNC_1(VAR_3, VAR_1, 8,
        &VAR_4->link_disc_time.bits);
 VAR_3 = FUNC_0(VAR_5, VAR_1);


 VAR_4->baud_rate.bits &= 0x03ff;

 VAR_4->window_size.bits = 0x7f;
 VAR_4->min_turn_time.bits = 0xff;
 VAR_4->max_turn_time.bits = 0x0f;
 VAR_4->data_size.bits = 0x3f;
 VAR_4->link_disc_time.bits &= 0xff;
 VAR_4->additional_bofs.bits = 0xff;
}
