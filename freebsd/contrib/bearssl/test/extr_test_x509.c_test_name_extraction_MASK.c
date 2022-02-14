
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_9__ ;
typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_18__ {int* dp_stack; int* rp_stack; TYPE_3__* vtable; } ;
typedef TYPE_1__ br_x509_minimal_context ;
struct TYPE_19__ {unsigned char* oid; scalar_t__* buf; int len; scalar_t__ status; } ;
typedef TYPE_2__ br_name_element ;
struct TYPE_22__ {int id; int impl; } ;
struct TYPE_21__ {int num; scalar_t__ status; int * expected; } ;
struct TYPE_20__ {unsigned int (* end_chain ) (TYPE_3__**) ;int (* end_cert ) (TYPE_3__**) ;int (* append ) (TYPE_3__**,unsigned char*,size_t) ;int (* start_cert ) (TYPE_3__**,size_t) ;int (* start_chain ) (TYPE_3__**,int *) ;} ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int VAR_3 ;
 int FUNC_3 (TYPE_1__*,int *,int *,int ) ;
 int FUNC_4 (TYPE_1__*,int ,int ) ;
 int FUNC_5 (TYPE_1__*,int,int ) ;
 int FUNC_6 (TYPE_1__*,TYPE_2__*,size_t) ;
 int FUNC_7 (TYPE_1__*,int ) ;
 int FUNC_8 (TYPE_1__*,int ,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,char*,unsigned int) ;
 int FUNC_12 (TYPE_2__*,size_t) ;
 TYPE_9__* VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 TYPE_8__* VAR_7 ;
 int FUNC_13 (char*,...) ;
 unsigned char* FUNC_14 (char*,size_t*) ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_15 (scalar_t__*,int *) ;
 int FUNC_16 (int ,int *,int *) ;
 int FUNC_17 (TYPE_3__**,int *) ;
 int FUNC_18 (TYPE_3__**,size_t) ;
 int FUNC_19 (TYPE_3__**,unsigned char*,size_t) ;
 int FUNC_20 (TYPE_3__**) ;
 unsigned int FUNC_21 (TYPE_3__**) ;
 int FUNC_22 (unsigned char*) ;
 void* FUNC_23 (int) ;

__attribute__((used)) static void
FUNC_24(void)
{
 unsigned char *VAR_10;
 size_t VAR_11;
 br_x509_minimal_context VAR_12;
 uint32_t VAR_13, VAR_14;
 size_t VAR_15;
 unsigned VAR_16;
 br_name_element *VAR_17;
 size_t VAR_18;
 int VAR_19;

 FUNC_13("Name extraction: ");
 FUNC_10(VAR_9);
 VAR_10 = FUNC_14("names.crt", &VAR_11);
 FUNC_3(&VAR_12, &VAR_3, ((void*)0), 0);
 for (VAR_15 = 0; VAR_4[VAR_15].id; VAR_15 ++) {
  int VAR_20;

  VAR_20 = VAR_4[VAR_15].id;
  FUNC_5(&VAR_12, VAR_20, VAR_4[VAR_15].impl);
 }
 FUNC_7(&VAR_12, FUNC_2());
 FUNC_4(&VAR_12,
  FUNC_0(), FUNC_1());
 FUNC_16(VAR_1, &VAR_13, &VAR_14);
 FUNC_8(&VAR_12, VAR_13, VAR_14);

 VAR_18 = (sizeof VAR_7) / (sizeof VAR_7[0]);
 VAR_17 = FUNC_23(VAR_18 * sizeof *VAR_17);
 for (VAR_15 = 0; VAR_15 < VAR_18; VAR_15 ++) {
  int VAR_21;
  unsigned char *VAR_22;

  VAR_21 = VAR_7[VAR_15].num;
  if (VAR_21 > 0) {
   VAR_22 = FUNC_23(5);
   VAR_22[0] = 4;
   VAR_22[1] = 0x29;
   VAR_22[2] = 0x01;
   VAR_22[3] = 0x01;
   VAR_22[4] = VAR_21;
  } else if (VAR_21 == 0) {
   VAR_22 = FUNC_23(13);
   VAR_22[0] = 0x00;
   VAR_22[1] = 0x00;
   VAR_22[2] = 0x0A;
   VAR_22[3] = 0x2B;
   VAR_22[4] = 0x06;
   VAR_22[5] = 0x01;
   VAR_22[6] = 0x04;
   VAR_22[7] = 0x01;
   VAR_22[8] = 0x82;
   VAR_22[9] = 0x37;
   VAR_22[10] = 0x14;
   VAR_22[11] = 0x02;
   VAR_22[12] = 0x03;
  } else {
   VAR_22 = FUNC_23(2);
   VAR_22[0] = 0x00;
   VAR_22[1] = -VAR_21;
  }
  VAR_17[VAR_15].oid = VAR_22;
  VAR_17[VAR_15].buf = FUNC_23(256);
  VAR_17[VAR_15].len = 256;
 }
 FUNC_6(&VAR_12, VAR_17, VAR_18);




 for (VAR_15 = 0; VAR_15 < (sizeof VAR_12.dp_stack) / sizeof(uint32_t); VAR_15 ++) {
  VAR_12.dp_stack[VAR_15] = 0xA7C083FE;
 }
 for (VAR_15 = 0; VAR_15 < (sizeof VAR_12.rp_stack) / sizeof(uint32_t); VAR_15 ++) {
  VAR_12.rp_stack[VAR_15] = 0xA7C083FE;
 }





 VAR_12.vtable->start_chain(&VAR_12.vtable, ((void*)0));
 VAR_12.vtable->start_cert(&VAR_12.vtable, VAR_11);
 VAR_12.vtable->append(&VAR_12.vtable, VAR_10, VAR_11);
 VAR_12.vtable->end_cert(&VAR_12.vtable);
 VAR_16 = VAR_12.vtable->end_chain(&VAR_12.vtable);
 if (VAR_16 != VAR_0) {
  FUNC_11(VAR_8, "wrong status: %u\n", VAR_16);
  FUNC_9(VAR_2);
 }




 for (VAR_15 = (sizeof VAR_12.dp_stack) / sizeof(uint32_t); VAR_15 > 0; VAR_15 --) {
  if (VAR_12.dp_stack[VAR_15 - 1] != 0xA7C083FE) {
   if (VAR_5 < VAR_15) {
    VAR_5 = VAR_15;
   }
   break;
  }
 }
 for (VAR_15 = (sizeof VAR_12.rp_stack) / sizeof(uint32_t); VAR_15 > 0; VAR_15 --) {
  if (VAR_12.rp_stack[VAR_15 - 1] != 0xA7C083FE) {
   if (VAR_6 < VAR_15) {
    VAR_6 = VAR_15;
   }
   break;
  }
 }

 VAR_19 = 1;
 for (VAR_15 = 0; VAR_15 < VAR_18; VAR_15 ++) {
  if (VAR_17[VAR_15].status != VAR_7[VAR_15].status) {
   FUNC_13("ERR: name %u (id=%d): status=%d, expected=%d\n",
    (unsigned)VAR_15, VAR_7[VAR_15].num,
    VAR_17[VAR_15].status, VAR_7[VAR_15].status);
   if (VAR_17[VAR_15].status > 0) {
    unsigned char *VAR_23;

    FUNC_13("  obtained:");
    VAR_23 = (unsigned char *)VAR_17[VAR_15].buf;
    while (*VAR_23) {
     FUNC_13(" %02X", *VAR_23 ++);
    }
    FUNC_13("\n");
   }
   VAR_19 = 0;
   continue;
  }
  if (VAR_7[VAR_15].expected == ((void*)0)) {
   if (VAR_17[VAR_15].buf[0] != 0) {
    FUNC_13("ERR: name %u not zero-terminated\n",
     (unsigned)VAR_15);
    VAR_19 = 0;
    continue;
   }
  } else {
   if (FUNC_15(VAR_17[VAR_15].buf, VAR_7[VAR_15].expected) != 0) {
    unsigned char *VAR_24;

    FUNC_13("ERR: name %u (id=%d): wrong value\n",
     (unsigned)VAR_15, VAR_7[VAR_15].num);
    FUNC_13("  expected:");
    VAR_24 = (unsigned char *)VAR_7[VAR_15].expected;
    while (*VAR_24) {
     FUNC_13(" %02X", *VAR_24 ++);
    }
    FUNC_13("\n");
    FUNC_13("  obtained:");
    VAR_24 = (unsigned char *)VAR_17[VAR_15].buf;
    while (*VAR_24) {
     FUNC_13(" %02X", *VAR_24 ++);
    }
    FUNC_13("\n");
    VAR_19 = 0;
    continue;
   }
  }
 }
 if (!VAR_19) {
  FUNC_9(VAR_2);
 }
 FUNC_22(VAR_10);
 FUNC_12(VAR_17, VAR_18);
 FUNC_13("OK\n");
}
