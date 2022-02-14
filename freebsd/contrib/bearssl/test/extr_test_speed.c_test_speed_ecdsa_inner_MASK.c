
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ clock_t ;
typedef int (* br_ecdsa_vrfy ) (TYPE_1__ const*,unsigned char*,int,TYPE_2__*,unsigned char*,size_t) ;
typedef size_t (* br_ecdsa_sign ) (TYPE_1__ const*,int *,unsigned char*,TYPE_4__*,unsigned char*) ;
struct TYPE_16__ {unsigned char* q; size_t qlen; int curve; } ;
typedef TYPE_2__ br_ec_public_key ;
struct TYPE_17__ {unsigned char* x; size_t xlen; int curve; } ;
typedef TYPE_4__ br_ec_private_key ;
struct TYPE_15__ {int (* mul ) (unsigned char*,size_t,unsigned char*,size_t,int ) ;} ;
typedef TYPE_1__ br_ec_impl ;
struct TYPE_18__ {size_t order_len; size_t generator_len; int curve; int generator; int order; } ;
typedef TYPE_8__ br_ec_curve_def ;


 double VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,size_t) ;
 int FUNC_1 (int *,unsigned char*,int,int *) ;
 int FUNC_2 (unsigned char*,size_t,int *) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (unsigned char*,int ,size_t) ;
 int FUNC_8 (unsigned char*,char,int) ;
 int FUNC_9 (char*,char const*,double) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_10 (unsigned char*,size_t,unsigned char*,size_t,int ) ;

__attribute__((used)) static void
FUNC_11(const char *VAR_5,
 const br_ec_impl *VAR_6, const br_ec_curve_def *VAR_7,
 br_ecdsa_sign VAR_8, br_ecdsa_vrfy VAR_9)
{
 unsigned char VAR_10[80], VAR_11[160], VAR_12[32], VAR_13[160];
 uint32_t VAR_14[22], VAR_15[22];
 size_t VAR_16, VAR_17, VAR_18;
 int VAR_19;
 long VAR_20;
 br_ec_private_key VAR_21;
 br_ec_public_key VAR_22;

 VAR_16 = VAR_7->order_len;
 FUNC_0(VAR_15, VAR_7->order, VAR_16);
 FUNC_8(VAR_10, 'T', sizeof VAR_10);
 FUNC_1(VAR_14, VAR_10, sizeof VAR_10, VAR_15);
 FUNC_2(VAR_10, VAR_16, VAR_14);
 VAR_17 = VAR_7->generator_len;
 FUNC_7(VAR_11, VAR_7->generator, VAR_17);
 VAR_6->mul(VAR_11, VAR_17, VAR_10, VAR_16, VAR_7->curve);
 VAR_21.curve = VAR_7->curve;
 VAR_21.x = VAR_10;
 VAR_21.xlen = VAR_16;
 VAR_22.curve = VAR_7->curve;
 VAR_22.q = VAR_11;
 VAR_22.qlen = VAR_17;

 FUNC_8(VAR_12, 'H', sizeof VAR_12);
 VAR_18 = VAR_8(VAR_6, &VAR_2, VAR_12, &VAR_21, VAR_13);
 if (VAR_9(VAR_6, VAR_12, sizeof VAR_12, &VAR_22, VAR_13, VAR_18) != 1) {
  FUNC_6(VAR_3, "self-test sign/verify failed\n");
  FUNC_4(VAR_1);
 }

 for (VAR_19 = 0; VAR_19 < 10; VAR_19 ++) {
  VAR_12[1] ++;
  VAR_8(VAR_6, &VAR_2, VAR_12, &VAR_21, VAR_13);
  VAR_9(VAR_6, VAR_12, sizeof VAR_12, &VAR_22, VAR_13, VAR_18);
 }

 VAR_20 = 10;
 for (;;) {
  clock_t VAR_23, VAR_24;
  double VAR_25;
  long VAR_26;

  VAR_23 = FUNC_3();
  for (VAR_26 = VAR_20; VAR_26 > 0; VAR_26 --) {
   VAR_12[1] ++;
   VAR_18 = VAR_8(VAR_6, &VAR_2, VAR_12, &VAR_21, VAR_13);
  }
  VAR_24 = FUNC_3();
  VAR_25 = (double)(VAR_24 - VAR_23) / VAR_0;
  if (VAR_25 >= 2.0) {
   FUNC_9("%-30s %8.2f sign/s\n", VAR_5,
    (double)VAR_20 / VAR_25);
   FUNC_5(VAR_4);
   break;
  }
  VAR_20 <<= 1;
 }

 VAR_20 = 10;
 for (;;) {
  clock_t VAR_27, VAR_28;
  double VAR_29;
  long VAR_30;

  VAR_27 = FUNC_3();
  for (VAR_30 = VAR_20; VAR_30 > 0; VAR_30 --) {
   VAR_9(VAR_6, VAR_12, sizeof VAR_12, &VAR_22, VAR_13, VAR_18);
  }
  VAR_28 = FUNC_3();
  VAR_29 = (double)(VAR_28 - VAR_27) / VAR_0;
  if (VAR_29 >= 2.0) {
   FUNC_9("%-30s %8.2f verify/s\n", VAR_5,
    (double)VAR_20 / VAR_29);
   FUNC_5(VAR_4);
   break;
  }
  VAR_20 <<= 1;
 }
}
