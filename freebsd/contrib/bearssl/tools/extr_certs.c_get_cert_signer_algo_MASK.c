
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int br_x509_decoder_context ;
struct TYPE_3__ {int data_len; int data; } ;
typedef TYPE_1__ br_x509_certificate ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int ,char*,int) ;
 int VAR_0 ;

int
FUNC_5(br_x509_certificate *VAR_1)
{
 br_x509_decoder_context VAR_2;
 int VAR_3;

 FUNC_1(&VAR_2, 0, 0);
 FUNC_3(&VAR_2, VAR_1->data, VAR_1->data_len);
 VAR_3 = FUNC_2(&VAR_2);
 if (VAR_3 != 0) {
  FUNC_4(VAR_0,
   "ERROR: certificate decoding failed with error %d\n",
   -VAR_3);
  return 0;
 }
 return FUNC_0(&VAR_2);
}
