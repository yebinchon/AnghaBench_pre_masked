
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_static_inquiry_pattern {scalar_t__ type; int media_type; int revision; int product; int vendor; } ;
struct scsi_inquiry_data {int revision; int product; int vendor; } ;
typedef scalar_t__ caddr_t ;


 scalar_t__ FUNC_0 (struct scsi_inquiry_data*) ;
 scalar_t__ FUNC_1 (struct scsi_inquiry_data*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 (int ,int ,int) ;

int
FUNC_3(caddr_t VAR_3, caddr_t VAR_4)
{
 struct scsi_static_inquiry_pattern *VAR_5;
 struct scsi_inquiry_data *VAR_6;

 VAR_5 = (struct scsi_static_inquiry_pattern *)VAR_4;
 VAR_6 = (struct scsi_inquiry_data *)VAR_3;

 if (((FUNC_1(VAR_6) == VAR_5->type)
   || (VAR_5->type == VAR_2))
  && (FUNC_0(VAR_6) ? VAR_5->media_type & VAR_1
       : VAR_5->media_type & VAR_0)
  && (FUNC_2(VAR_6->vendor, VAR_5->vendor, sizeof(VAR_6->vendor)) == 0)
  && (FUNC_2(VAR_6->product, VAR_5->product,
     sizeof(VAR_6->product)) == 0)
  && (FUNC_2(VAR_6->revision, VAR_5->revision,
     sizeof(VAR_6->revision)) == 0)) {
  return (0);
 }
        return (-1);
}
