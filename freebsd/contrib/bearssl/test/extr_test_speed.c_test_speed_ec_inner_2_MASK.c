
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ clock_t ;
struct TYPE_5__ {int (* mulgen ) (unsigned char*,unsigned char*,size_t,int ) ;} ;
typedef TYPE_1__ br_ec_impl ;
struct TYPE_6__ {size_t order_len; int curve; int order; } ;
typedef TYPE_2__ br_ec_curve_def ;


 double VAR_0 ;
 int FUNC_0 (int *,int ,size_t) ;
 int FUNC_1 (int *,unsigned char*,int,int *) ;
 int FUNC_2 (unsigned char*,size_t,int *) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (unsigned char*,char,int) ;
 int FUNC_6 (char*,char const*,double) ;
 int VAR_1 ;
 int FUNC_7 (unsigned char*,unsigned char*,size_t,int ) ;
 int FUNC_8 (unsigned char*,unsigned char*,size_t,int ) ;

__attribute__((used)) static void
FUNC_9(const char *VAR_2,
 const br_ec_impl *VAR_3, const br_ec_curve_def *VAR_4)
{
 unsigned char VAR_5[80], VAR_6[160];
 uint32_t VAR_7[22], VAR_8[22];
 size_t VAR_9;
 int VAR_10;
 long VAR_11;

 VAR_9 = VAR_4->order_len;
 FUNC_0(VAR_8, VAR_4->order, VAR_9);
 FUNC_5(VAR_5, 'T', sizeof VAR_5);
 FUNC_1(VAR_7, VAR_5, sizeof VAR_5, VAR_8);
 FUNC_2(VAR_5, VAR_9, VAR_7);
 for (VAR_10 = 0; VAR_10 < 10; VAR_10 ++) {
  VAR_3->mulgen(VAR_6, VAR_5, VAR_9, VAR_4->curve);
 }
 VAR_11 = 10;
 for (;;) {
  clock_t VAR_12, VAR_13;
  double VAR_14;
  long VAR_15;

  VAR_12 = FUNC_3();
  for (VAR_15 = VAR_11; VAR_15 > 0; VAR_15 --) {
   VAR_3->mulgen(VAR_6, VAR_5, VAR_9, VAR_4->curve);
  }
  VAR_13 = FUNC_3();
  VAR_14 = (double)(VAR_13 - VAR_12) / VAR_0;
  if (VAR_14 >= 2.0) {
   FUNC_6("%-30s %8.2f mul/s\n", VAR_2,
    (double)VAR_11 / VAR_14);
   FUNC_4(VAR_1);
   break;
  }
  VAR_11 <<= 1;
 }
}
