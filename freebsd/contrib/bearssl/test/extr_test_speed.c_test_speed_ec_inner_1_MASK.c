
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ clock_t ;
struct TYPE_5__ {int (* mul ) (unsigned char*,size_t,unsigned char*,size_t,int ) ;} ;
typedef TYPE_1__ br_ec_impl ;
struct TYPE_6__ {size_t order_len; size_t generator_len; int curve; int generator; int order; } ;
typedef TYPE_2__ br_ec_curve_def ;


 double VAR_0 ;
 int FUNC_0 (int *,int ,size_t) ;
 int FUNC_1 (int *,unsigned char*,int,int *) ;
 int FUNC_2 (unsigned char*,size_t,int *) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (unsigned char*,int ,size_t) ;
 int FUNC_6 (unsigned char*,char,int) ;
 int FUNC_7 (char*,char const*,double) ;
 int VAR_1 ;
 int FUNC_8 (unsigned char*,size_t,unsigned char*,size_t,int ) ;
 int FUNC_9 (unsigned char*,size_t,unsigned char*,size_t,int ) ;

__attribute__((used)) static void
FUNC_10(const char *VAR_2,
 const br_ec_impl *VAR_3, const br_ec_curve_def *VAR_4)
{
 unsigned char VAR_5[80], VAR_6[160];
 uint32_t VAR_7[22], VAR_8[22];
 size_t VAR_9, VAR_10;
 int VAR_11;
 long VAR_12;

 VAR_9 = VAR_4->order_len;
 FUNC_0(VAR_8, VAR_4->order, VAR_9);
 FUNC_6(VAR_5, 'T', sizeof VAR_5);
 FUNC_1(VAR_7, VAR_5, sizeof VAR_5, VAR_8);
 FUNC_2(VAR_5, VAR_9, VAR_7);
 VAR_10 = VAR_4->generator_len;
 FUNC_5(VAR_6, VAR_4->generator, VAR_10);
 for (VAR_11 = 0; VAR_11 < 10; VAR_11 ++) {
  VAR_3->mul(VAR_6, VAR_10, VAR_5, VAR_9, VAR_4->curve);
 }
 VAR_12 = 10;
 for (;;) {
  clock_t VAR_13, VAR_14;
  double VAR_15;
  long VAR_16;

  VAR_13 = FUNC_3();
  for (VAR_16 = VAR_12; VAR_16 > 0; VAR_16 --) {
   VAR_3->mul(VAR_6, VAR_10, VAR_5, VAR_9, VAR_4->curve);
  }
  VAR_14 = FUNC_3();
  VAR_15 = (double)(VAR_14 - VAR_13) / VAR_0;
  if (VAR_15 >= 2.0) {
   FUNC_7("%-30s %8.2f mul/s\n", VAR_2,
    (double)VAR_12 / VAR_15);
   FUNC_4(VAR_1);
   break;
  }
  VAR_12 <<= 1;
 }
}
