
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_inquiry_data {int dummy; } ;
struct sbuf {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct sbuf*) ;
 int FUNC_1 (struct sbuf*,char*,int,int ) ;
 int FUNC_2 (struct sbuf*) ;
 int FUNC_3 (struct sbuf*,struct scsi_inquiry_data*) ;

void
FUNC_4(struct scsi_inquiry_data *VAR_1)
{
 struct sbuf VAR_2;
 char VAR_3[120];

 FUNC_1(&VAR_2, VAR_3, 120, VAR_0);
 FUNC_3(&VAR_2, VAR_1);
 FUNC_0(&VAR_2);
 FUNC_2(&VAR_2);
}
