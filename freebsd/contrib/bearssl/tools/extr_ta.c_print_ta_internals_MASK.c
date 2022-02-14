
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int qlen; int q; } ;
struct TYPE_9__ {int elen; int e; int nlen; int n; } ;
struct TYPE_11__ {TYPE_3__ ec; TYPE_2__ rsa; } ;
struct TYPE_12__ {int key_type; TYPE_4__ key; } ;
struct TYPE_8__ {int len; int data; } ;
struct TYPE_13__ {TYPE_5__ pkey; TYPE_1__ dn; } ;
typedef TYPE_6__ br_x509_trust_anchor ;




 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (char*,int ,int ) ;
 int FUNC_2 (char*,char*,long) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_3(br_x509_trust_anchor *VAR_1, long VAR_2)
{
 char VAR_3[25];

 FUNC_2(VAR_3, "TA%ld_DN", VAR_2);
 FUNC_1(VAR_3, VAR_1->dn.data, VAR_1->dn.len);
 switch (VAR_1->pkey.key_type) {
 case 128:
  FUNC_2(VAR_3, "TA%ld_RSA_N", VAR_2);
  FUNC_1(VAR_3, VAR_1->pkey.key.rsa.n, VAR_1->pkey.key.rsa.nlen);
  FUNC_2(VAR_3, "TA%ld_RSA_E", VAR_2);
  FUNC_1(VAR_3, VAR_1->pkey.key.rsa.e, VAR_1->pkey.key.rsa.elen);
  break;
 case 129:
  FUNC_2(VAR_3, "TA%ld_EC_Q", VAR_2);
  FUNC_1(VAR_3, VAR_1->pkey.key.ec.q, VAR_1->pkey.key.ec.qlen);
  break;
 default:
  FUNC_0(VAR_0, "ERROR: unknown anchor key type '%d'\n",
   VAR_1->pkey.key_type);
  return -1;
 }
 return 0;
}
