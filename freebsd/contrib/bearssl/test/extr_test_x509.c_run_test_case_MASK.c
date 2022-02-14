
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_36__ TYPE_6__ ;
typedef struct TYPE_35__ TYPE_5__ ;
typedef struct TYPE_34__ TYPE_4__ ;
typedef struct TYPE_33__ TYPE_3__ ;
typedef struct TYPE_32__ TYPE_2__ ;
typedef struct TYPE_31__ TYPE_20__ ;
typedef struct TYPE_30__ TYPE_1__ ;
typedef struct TYPE_29__ TYPE_11__ ;


typedef int uint32_t ;
struct TYPE_32__ {char* key_name; int flags; int dn_len; int dn; } ;
typedef TYPE_2__ test_trust_anchor ;
struct TYPE_33__ {char* name; unsigned int hashes; char** ta_names; char* ee_key_name; unsigned int key_type_usage; unsigned int status; int servername; int seconds; int days; scalar_t__* cert_names; } ;
typedef TYPE_3__ test_case ;
struct TYPE_35__ {unsigned int key_type; } ;
struct TYPE_30__ {int len; int data; } ;
struct TYPE_34__ {size_t len; struct TYPE_34__* data; TYPE_5__ pkey; int flags; TYPE_1__ dn; } ;
typedef TYPE_4__ br_x509_trust_anchor ;
typedef TYPE_5__ br_x509_pkey ;
struct TYPE_36__ {int* dp_stack; int* rp_stack; TYPE_11__* vtable; } ;
typedef TYPE_6__ br_x509_minimal_context ;
typedef int br_hash_class ;
typedef TYPE_4__ blob ;
struct TYPE_31__ {int id; int * impl; } ;
struct TYPE_29__ {unsigned int (* end_chain ) (TYPE_11__**) ;TYPE_5__* (* get_pkey ) (TYPE_11__**,unsigned int*) ;int (* end_cert ) (TYPE_11__**) ;int (* append ) (TYPE_11__**,TYPE_4__*,size_t) ;int (* start_cert ) (TYPE_11__**,size_t) ;int (* start_chain ) (TYPE_11__**,int ) ;} ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ,char*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int VAR_2 ;
 int FUNC_4 (TYPE_6__*,int const*,TYPE_4__*,size_t) ;
 int FUNC_5 (TYPE_6__*,int ,int ) ;
 int FUNC_6 (TYPE_6__*,int,int *) ;
 int FUNC_7 (TYPE_6__*,int ) ;
 int FUNC_8 (TYPE_6__*,int ,int ) ;
 int FUNC_9 (TYPE_5__ const*,TYPE_5__*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,char*,...) ;
 TYPE_20__* VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int FUNC_13 (char*,...) ;
 TYPE_4__* FUNC_14 (scalar_t__,size_t*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_15 (TYPE_11__**,int ) ;
 int FUNC_16 (TYPE_11__**,size_t) ;
 int FUNC_17 (TYPE_11__**,TYPE_4__*,size_t) ;
 int FUNC_18 (TYPE_11__**) ;
 unsigned int FUNC_19 (TYPE_11__**) ;
 TYPE_5__* FUNC_20 (TYPE_11__**,unsigned int*) ;
 int VAR_9 ;
 int FUNC_21 (TYPE_4__*) ;
 TYPE_4__* FUNC_22 (size_t) ;

__attribute__((used)) static void
FUNC_23(test_case *VAR_10)
{
 br_x509_minimal_context VAR_11;
 br_x509_trust_anchor *VAR_12;
 size_t VAR_13;
 size_t VAR_14;
 const br_hash_class *VAR_15;
 size_t VAR_16;
 blob *VAR_17;
 br_x509_pkey *VAR_18;
 const br_x509_pkey *VAR_19;
 unsigned VAR_20;
 unsigned VAR_21;

 FUNC_13("%s: ", VAR_10->name);
 FUNC_11(VAR_8);







 VAR_15 = &VAR_2;
 for (VAR_14 = 0; VAR_3[VAR_14].id; VAR_14 ++) {
  if ((VAR_10->hashes & ((unsigned)1 << (VAR_3[VAR_14].id))) != 0) {
   VAR_15 = VAR_3[VAR_14].impl;
  }
 }




 for (VAR_13 = 0; VAR_10->ta_names[VAR_13]; VAR_13 ++);
 VAR_12 = FUNC_22(VAR_13 * sizeof *VAR_12);
 for (VAR_14 = 0; VAR_10->ta_names[VAR_14]; VAR_14 ++) {
  test_trust_anchor *VAR_22;
  br_x509_pkey *VAR_23;

  VAR_22 = FUNC_0(VAR_9, VAR_10->ta_names[VAR_14]);
  if (VAR_22 == ((void*)0)) {
   FUNC_12(VAR_7, "no such trust anchor: '%s'\n",
    VAR_10->ta_names[VAR_14]);
   FUNC_10(VAR_1);
  }
  VAR_23 = FUNC_0(VAR_4, VAR_22->key_name);
  if (VAR_23 == ((void*)0)) {
   FUNC_12(VAR_7, "no such public key: '%s'\n",
    VAR_22->key_name);
   FUNC_10(VAR_1);
  }
  VAR_12[VAR_14].dn.data = VAR_22->dn;
  VAR_12[VAR_14].dn.len = VAR_22->dn_len;
  VAR_12[VAR_14].flags = VAR_22->flags;
  VAR_12[VAR_14].pkey = *VAR_23;
 }




 for (VAR_16 = 0; VAR_10->cert_names[VAR_16]; VAR_16 ++);
 VAR_17 = FUNC_22(VAR_16 * sizeof *VAR_17);
 for (VAR_14 = 0; VAR_14 < VAR_16; VAR_14 ++) {
  VAR_17[VAR_14].data = FUNC_14(VAR_10->cert_names[VAR_14], &VAR_17[VAR_14].len);
 }




 if (VAR_10->ee_key_name == ((void*)0)) {
  VAR_18 = ((void*)0);
 } else {
  VAR_18 = FUNC_0(VAR_4, VAR_10->ee_key_name);
  if (VAR_18 == ((void*)0)) {
   FUNC_12(VAR_7, "no such public key: '%s'\n",
    VAR_10->ee_key_name);
   FUNC_10(VAR_1);
  }
 }




 FUNC_4(&VAR_11, VAR_15, VAR_12, VAR_13);
 for (VAR_14 = 0; VAR_3[VAR_14].id; VAR_14 ++) {
  int VAR_24;

  VAR_24 = VAR_3[VAR_14].id;
  if ((VAR_10->hashes & ((unsigned)1 << VAR_24)) != 0) {
   FUNC_6(&VAR_11, VAR_24, VAR_3[VAR_14].impl);
  }
 }
 FUNC_7(&VAR_11, FUNC_3());
 FUNC_5(&VAR_11,
  FUNC_1(), FUNC_2());




 FUNC_8(&VAR_11, VAR_10->days, VAR_10->seconds);




 for (VAR_14 = 0; VAR_14 < (sizeof VAR_11.dp_stack) / sizeof(uint32_t); VAR_14 ++) {
  VAR_11.dp_stack[VAR_14] = 0xA7C083FE;
 }
 for (VAR_14 = 0; VAR_14 < (sizeof VAR_11.rp_stack) / sizeof(uint32_t); VAR_14 ++) {
  VAR_11.rp_stack[VAR_14] = 0xA7C083FE;
 }





 VAR_11.vtable->start_chain(&VAR_11.vtable, VAR_10->servername);
 for (VAR_14 = 0; VAR_14 < VAR_16; VAR_14 ++) {
  size_t VAR_25;

  VAR_11.vtable->start_cert(&VAR_11.vtable, VAR_17[VAR_14].len);
  VAR_25 = 0;
  while (VAR_25 < VAR_17[VAR_14].len) {
   size_t VAR_26;

   VAR_26 = VAR_17[VAR_14].len - VAR_25;
   if (VAR_26 > 100) {
    VAR_26 = 100;
   }
   VAR_11.vtable->append(&VAR_11.vtable, VAR_17[VAR_14].data + VAR_25, VAR_26);
   VAR_25 += VAR_26;
  }
  VAR_11.vtable->end_cert(&VAR_11.vtable);
 }
 VAR_21 = VAR_11.vtable->end_chain(&VAR_11.vtable);
 VAR_19 = VAR_11.vtable->get_pkey(&VAR_11.vtable, &VAR_20);




 if (VAR_19 != ((void*)0)) {
  unsigned VAR_27;

  VAR_27 = VAR_19->key_type | VAR_20;
  if (VAR_10->key_type_usage != (VAR_27 & VAR_10->key_type_usage)) {
   FUNC_12(VAR_7, "wrong key type + usage"
    " (expected 0x%02X, got 0x%02X)\n",
    VAR_10->key_type_usage, VAR_27);
   FUNC_10(VAR_1);
  }
 }





 if (VAR_21 != VAR_10->status) {
  FUNC_12(VAR_7, "wrong status (got %d, expected %d)\n",
   VAR_21, VAR_10->status);
  FUNC_10(VAR_1);
 }
 if (VAR_21 == VAR_0) {
  VAR_19 = ((void*)0);
 }
 if (!FUNC_9(VAR_19, VAR_18)) {
  FUNC_12(VAR_7, "wrong EE public key\n");
  FUNC_10(VAR_1);
 }




 for (VAR_14 = (sizeof VAR_11.dp_stack) / sizeof(uint32_t); VAR_14 > 0; VAR_14 --) {
  if (VAR_11.dp_stack[VAR_14 - 1] != 0xA7C083FE) {
   if (VAR_5 < VAR_14) {
    VAR_5 = VAR_14;
   }
   break;
  }
 }
 for (VAR_14 = (sizeof VAR_11.rp_stack) / sizeof(uint32_t); VAR_14 > 0; VAR_14 --) {
  if (VAR_11.rp_stack[VAR_14 - 1] != 0xA7C083FE) {
   if (VAR_6 < VAR_14) {
    VAR_6 = VAR_14;
   }
   break;
  }
 }




 for (VAR_14 = 0; VAR_14 < VAR_16; VAR_14 ++) {
  FUNC_21(VAR_17[VAR_14].data);
 }
 FUNC_21(VAR_17);
 FUNC_21(VAR_12);
 FUNC_13("OK\n");
}
