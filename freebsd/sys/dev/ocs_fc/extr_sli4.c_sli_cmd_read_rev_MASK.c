
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int sli4_t ;
struct TYPE_5__ {int command; } ;
struct TYPE_6__ {int physical_address_high; int physical_address_low; scalar_t__ available_length; int vpd; TYPE_1__ hdr; } ;
typedef TYPE_2__ sli4_cmd_read_rev_t ;
struct TYPE_7__ {int phys; scalar_t__ size; } ;
typedef TYPE_3__ ocs_dma_t ;
typedef int int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (void*,int ,size_t) ;

__attribute__((used)) static int32_t
FUNC_3(sli4_t *VAR_2, void *VAR_3, size_t VAR_4, ocs_dma_t *VAR_5)
{
 sli4_cmd_read_rev_t *VAR_6 = VAR_3;

 FUNC_2(VAR_3, 0, VAR_4);

 VAR_6->hdr.command = VAR_0;

 if (VAR_5 && VAR_5->size) {
  VAR_6->vpd = VAR_1;

  VAR_6->available_length = VAR_5->size;

  VAR_6->physical_address_low = FUNC_1(VAR_5->phys);
  VAR_6->physical_address_high = FUNC_0(VAR_5->phys);
 }

 return sizeof(sli4_cmd_read_rev_t);
}
