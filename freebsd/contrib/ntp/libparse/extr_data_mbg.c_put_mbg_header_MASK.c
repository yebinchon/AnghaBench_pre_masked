
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int hdr_csum; int data_csum; int len; int cmd; } ;
typedef TYPE_1__ GPS_MSG_HDR ;


 int FUNC_0 (unsigned char**,int ) ;

void
FUNC_1(
 unsigned char **VAR_0,
 GPS_MSG_HDR *VAR_1
 )
{
  FUNC_0(VAR_0, VAR_1->cmd);
  FUNC_0(VAR_0, VAR_1->len);
  FUNC_0(VAR_0, VAR_1->data_csum);
  FUNC_0(VAR_0, VAR_1->hdr_csum);
}
