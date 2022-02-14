
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u_int32_t ;
struct scsi_sense_data {int dummy; } ;
struct TYPE_6__ {scalar_t__ sense_busaddr; } ;
struct TYPE_5__ {int TagNumber; } ;
typedef TYPE_1__* PSRB ;
typedef TYPE_2__* PACB ;



__attribute__((used)) static u_int32_t
FUNC_0(PACB VAR_0, PSRB VAR_1)
{
 int VAR_2;

 VAR_2 = VAR_1->TagNumber;
 return (VAR_0->sense_busaddr +
     (VAR_2 * sizeof(struct scsi_sense_data)));
}
