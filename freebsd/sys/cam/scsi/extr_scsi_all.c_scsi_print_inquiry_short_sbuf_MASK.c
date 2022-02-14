
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_inquiry_data {int revision; int product; int vendor; } ;
struct sbuf {int dummy; } ;


 int FUNC_0 (struct sbuf*,int ,int,int ) ;
 int FUNC_1 (struct sbuf*,char*) ;

void
FUNC_2(struct sbuf *VAR_0, struct scsi_inquiry_data *VAR_1)
{

 FUNC_1(VAR_0, "<");
 FUNC_0(VAR_0, VAR_1->vendor, sizeof(VAR_1->vendor), 0);
 FUNC_1(VAR_0, " ");
 FUNC_0(VAR_0, VAR_1->product, sizeof(VAR_1->product), 0);
 FUNC_1(VAR_0, " ");
 FUNC_0(VAR_0, VAR_1->revision, sizeof(VAR_1->revision), 0);
 FUNC_1(VAR_0, "> ");
}
