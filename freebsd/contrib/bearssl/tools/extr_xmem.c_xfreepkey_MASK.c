
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_4__* q; } ;
struct TYPE_7__ {TYPE_4__* e; TYPE_4__* n; } ;
struct TYPE_9__ {TYPE_2__ ec; TYPE_1__ rsa; } ;
struct TYPE_10__ {int key_type; TYPE_3__ key; } ;
typedef TYPE_4__ br_x509_pkey ;




 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,unsigned int) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_4__*) ;

void
FUNC_3(br_x509_pkey *VAR_2)
{
 if (VAR_2 != ((void*)0)) {
  switch (VAR_2->key_type) {
  case 128:
   FUNC_2(VAR_2->key.rsa.n);
   FUNC_2(VAR_2->key.rsa.e);
   break;
  case 129:
   FUNC_2(VAR_2->key.ec.q);
   break;
  default:

   FUNC_1(VAR_1, "Unknown public key type: %u\n",
    (unsigned)VAR_2->key_type);
   FUNC_0(VAR_0);



  }
  FUNC_2(VAR_2);
 }
}
