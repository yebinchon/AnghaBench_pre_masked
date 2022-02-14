
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int qlen; int q; int curve; } ;
struct TYPE_7__ {int elen; int e; int nlen; int n; } ;
struct TYPE_9__ {TYPE_2__ ec; TYPE_1__ rsa; } ;
struct TYPE_10__ {int key_type; TYPE_3__ key; } ;
typedef TYPE_4__ br_x509_pkey ;




 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ,int ,int ) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_4(const br_x509_pkey *VAR_2, const br_x509_pkey *VAR_3)
{
 if (VAR_2 == VAR_3) {
  return 1;
 }
 if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0)) {
  return 0;
 }
 if (VAR_2->key_type != VAR_3->key_type) {
  return 0;
 }
 switch (VAR_2->key_type) {
 case 128:
  return FUNC_0(VAR_2->key.rsa.n, VAR_2->key.rsa.nlen,
   VAR_3->key.rsa.n, VAR_3->key.rsa.nlen)
   && FUNC_0(VAR_2->key.rsa.e, VAR_2->key.rsa.elen,
   VAR_3->key.rsa.e, VAR_3->key.rsa.elen);
 case 129:
  return VAR_2->key.ec.curve == VAR_3->key.ec.curve
   && VAR_2->key.ec.qlen == VAR_3->key.ec.qlen
   && FUNC_3(VAR_2->key.ec.q,
    VAR_3->key.ec.q, VAR_2->key.ec.qlen) == 0;
 default:
  FUNC_2(VAR_1, "unknown key type: %d\n", VAR_2->key_type);
  FUNC_1(VAR_0);
  break;
 }
 return 0;
}
