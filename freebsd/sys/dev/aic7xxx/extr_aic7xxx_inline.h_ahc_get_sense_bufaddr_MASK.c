
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct scsi_sense_data {int dummy; } ;
struct scb {int dummy; } ;
struct ahc_softc {TYPE_1__* scb_data; } ;
struct TYPE_2__ {scalar_t__ sense_busaddr; struct scb* scbarray; } ;



__attribute__((used)) static __inline uint32_t
FUNC_0(struct ahc_softc *VAR_0, struct scb *VAR_1)
{
 int VAR_2;

 VAR_2 = VAR_1 - VAR_0->scb_data->scbarray;
 return (VAR_0->scb_data->sense_busaddr
       + (VAR_2 * sizeof(struct scsi_sense_data)));
}
