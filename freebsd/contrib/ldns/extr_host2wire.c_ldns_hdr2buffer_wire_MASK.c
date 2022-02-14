
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
typedef int ldns_status ;
typedef int ldns_pkt ;
typedef int ldns_buffer ;


 scalar_t__ FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int const*) ;
 int FUNC_5 (int const*) ;
 int FUNC_6 (int const*) ;
 int FUNC_7 (int const*) ;
 int FUNC_8 (int const*) ;
 scalar_t__ FUNC_9 (int const*) ;
 int FUNC_10 (int const*) ;
 int FUNC_11 (int const*) ;
 int FUNC_12 (int const*) ;
 int FUNC_13 (int const*) ;
 int FUNC_14 (int const*) ;
 int FUNC_15 (int const*) ;
 int FUNC_16 (int const*) ;
 int FUNC_17 (int const*) ;
 int FUNC_18 (int const*) ;
 scalar_t__ FUNC_19 (int const*) ;

__attribute__((used)) static ldns_status
FUNC_20(ldns_buffer *VAR_0, const ldns_pkt *VAR_1)
{
 uint8_t VAR_2;
 uint16_t VAR_3;

 if (FUNC_0(VAR_0, 12)) {
  FUNC_2(VAR_0, FUNC_12(VAR_1));

  VAR_2 = FUNC_15(VAR_1) << 7
          | FUNC_10(VAR_1) << 3
          | FUNC_4(VAR_1) << 2
          | FUNC_18(VAR_1) << 1 | FUNC_17(VAR_1);
  FUNC_3(VAR_0, VAR_2);

  VAR_2 = FUNC_16(VAR_1) << 7

          | FUNC_5(VAR_1) << 5
          | FUNC_8(VAR_1) << 4
   | FUNC_11(VAR_1);
  FUNC_3(VAR_0, VAR_2);

  FUNC_2(VAR_0, FUNC_14(VAR_1));
  FUNC_2(VAR_0, FUNC_6(VAR_1));
  FUNC_2(VAR_0, FUNC_13(VAR_1));

  VAR_3 = FUNC_7(VAR_1);
  if (FUNC_19(VAR_1)) {
   VAR_3++;
  }
  if (FUNC_9(VAR_1)) {
   VAR_3++;
  }
  FUNC_2(VAR_0, VAR_3);
 }

 return FUNC_1(VAR_0);
}
