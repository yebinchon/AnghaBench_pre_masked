
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_inquiry_pattern {int revision; int product; } ;
struct ata_params {int revision; int model; } ;
typedef scalar_t__ caddr_t ;


 scalar_t__ FUNC_0 (int ,int ,int) ;

int
FUNC_1(caddr_t VAR_0, caddr_t VAR_1)
{
 struct scsi_inquiry_pattern *VAR_2;
 struct ata_params *VAR_3;

 VAR_2 = (struct scsi_inquiry_pattern *)VAR_1;
 VAR_3 = (struct ata_params *)VAR_0;

 if ((FUNC_0(VAR_3->model, VAR_2->product,
     sizeof(VAR_3->model)) == 0)
  && (FUNC_0(VAR_3->revision, VAR_2->revision,
     sizeof(VAR_3->revision)) == 0)) {
  return (0);
 }
        return (-1);
}
