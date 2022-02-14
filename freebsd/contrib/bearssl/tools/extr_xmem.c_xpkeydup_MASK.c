
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int qlen; void* q; int curve; } ;
struct TYPE_8__ {int elen; void* e; int nlen; void* n; } ;
struct TYPE_10__ {TYPE_2__ ec; TYPE_1__ rsa; } ;
struct TYPE_11__ {int key_type; TYPE_3__ key; } ;
typedef TYPE_4__ br_x509_pkey ;




 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,unsigned int) ;
 int VAR_1 ;
 void* FUNC_2 (void*,int ) ;
 TYPE_4__* FUNC_3 (int) ;

br_x509_pkey *
FUNC_4(const br_x509_pkey *VAR_2)
{
 br_x509_pkey *VAR_3;

 VAR_3 = FUNC_3(sizeof *VAR_3);
 VAR_3->key_type = VAR_2->key_type;
 switch (VAR_2->key_type) {
 case 128:
  VAR_3->key.rsa.n = FUNC_2(VAR_2->key.rsa.n, VAR_2->key.rsa.nlen);
  VAR_3->key.rsa.nlen = VAR_2->key.rsa.nlen;
  VAR_3->key.rsa.e = FUNC_2(VAR_2->key.rsa.e, VAR_2->key.rsa.elen);
  VAR_3->key.rsa.elen = VAR_2->key.rsa.elen;
  break;
 case 129:
  VAR_3->key.ec.curve = VAR_2->key.ec.curve;
  VAR_3->key.ec.q = FUNC_2(VAR_2->key.ec.q, VAR_2->key.ec.qlen);
  VAR_3->key.ec.qlen = VAR_2->key.ec.qlen;
  break;
 default:

  FUNC_1(VAR_1, "Unknown public key type: %u\n",
   (unsigned)VAR_2->key_type);
  FUNC_0(VAR_0);



 }
 return VAR_3;
}
