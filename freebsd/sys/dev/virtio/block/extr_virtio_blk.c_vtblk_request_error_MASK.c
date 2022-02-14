
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vtblk_request {int vbr_ack; } ;


 int VAR_0 ;
 int VAR_1 ;



__attribute__((used)) static int
FUNC_0(struct vtblk_request *VAR_2)
{
 int VAR_3;

 switch (VAR_2->vbr_ack) {
 case 129:
  VAR_3 = 0;
  break;
 case 128:
  VAR_3 = VAR_1;
  break;
 default:
  VAR_3 = VAR_0;
  break;
 }

 return (VAR_3);
}
