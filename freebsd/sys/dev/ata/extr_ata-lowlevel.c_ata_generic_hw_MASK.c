
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * pm_write; int * pm_read; int tf_write; int tf_read; int command; int * softreset; int status; int end_transaction; int begin_transaction; } ;
struct ata_channel {TYPE_1__ hw; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct ata_channel* FUNC_0 (int ) ;

void
FUNC_1(device_t VAR_6)
{
    struct ata_channel *VAR_7 = FUNC_0(VAR_6);

    VAR_7->hw.begin_transaction = VAR_0;
    VAR_7->hw.end_transaction = VAR_1;
    VAR_7->hw.status = VAR_3;
    VAR_7->hw.softreset = ((void*)0);
    VAR_7->hw.command = VAR_2;
    VAR_7->hw.tf_read = VAR_4;
    VAR_7->hw.tf_write = VAR_5;
    VAR_7->hw.pm_read = ((void*)0);
    VAR_7->hw.pm_write = ((void*)0);
}
