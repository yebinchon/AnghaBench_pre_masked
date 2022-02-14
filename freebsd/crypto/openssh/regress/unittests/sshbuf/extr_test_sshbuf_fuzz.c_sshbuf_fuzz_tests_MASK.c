
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int32_t ;
struct sshbuf {int dummy; } ;
typedef struct sshbuf u_char ;
typedef int r ;


 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (struct sshbuf*,size_t) ;
 int FUNC_2 (struct sshbuf*,int *) ;
 int FUNC_3 (struct sshbuf*,int *) ;
 int FUNC_4 (size_t,size_t) ;
 int FUNC_5 (size_t,size_t) ;
 int FUNC_6 (size_t,int) ;
 int FUNC_7 (size_t,size_t) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_8 () ;
 int FUNC_9 (char*) ;
 int FUNC_10 () ;
 int FUNC_11 (size_t*,int) ;
 int FUNC_12 (int) ;
 int FUNC_13 (struct sshbuf*,int,size_t) ;
 size_t FUNC_14 (struct sshbuf*) ;
 int FUNC_15 (struct sshbuf*,size_t) ;
 int FUNC_16 (struct sshbuf*,size_t) ;
 int FUNC_17 (struct sshbuf*) ;
 size_t FUNC_18 (struct sshbuf*) ;
 size_t FUNC_19 (struct sshbuf*) ;
 struct sshbuf* FUNC_20 () ;
 struct sshbuf* FUNC_21 (struct sshbuf*) ;
 int FUNC_22 (struct sshbuf*,size_t,struct sshbuf**) ;
 scalar_t__ FUNC_23 (struct sshbuf*,int) ;
 int FUNC_24 (struct sshbuf*,size_t) ;

void
FUNC_25(void)
{
 struct sshbuf *VAR_2;
 u_char *VAR_3;
 size_t VAR_4, VAR_5, VAR_6;
 u_int32_t VAR_7;
 int VAR_8;


 FUNC_9("fuzz alloc/dealloc");
 VAR_2 = FUNC_20();
 FUNC_0(FUNC_23(VAR_2, 16 * 1024), 0);
 FUNC_3(VAR_2, ((void*)0));
 FUNC_3(FUNC_21(VAR_2), ((void*)0));
 FUNC_1(FUNC_21(VAR_2), FUNC_18(VAR_2));
 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  VAR_7 = FUNC_12(10);
  if (VAR_7 == 0) {

   VAR_7 = FUNC_12(10);
 fuzz_reserve:
   VAR_4 = FUNC_14(VAR_2);
   VAR_5 = FUNC_18(VAR_2);
   VAR_8 = FUNC_22(VAR_2, VAR_7, &VAR_3);
   if (VAR_8 < 0) {
    FUNC_2(VAR_3, ((void*)0));
    FUNC_7(VAR_4, VAR_7);
    FUNC_4(FUNC_14(VAR_2), VAR_4);
    FUNC_4(FUNC_18(VAR_2), VAR_5);
   } else {
    FUNC_3(VAR_3, ((void*)0));
    FUNC_5(VAR_4, VAR_7);
    FUNC_4(FUNC_14(VAR_2), VAR_4 - VAR_7);
    FUNC_4(FUNC_18(VAR_2), VAR_5 + VAR_7);
    FUNC_13(VAR_3, FUNC_12(255) + 1, VAR_7);
   }
  } else if (VAR_7 < 3) {

   VAR_7 = FUNC_12(8 * 1024);
   goto fuzz_reserve;
  } else if (VAR_7 == 3) {

   VAR_7 = FUNC_12(10);
 fuzz_consume:
   VAR_4 = FUNC_14(VAR_2);
   VAR_5 = FUNC_18(VAR_2);

   VAR_8 = ((FUNC_10() & 1) ?
       FUNC_15 : FUNC_16)(VAR_2, VAR_7);
   if (VAR_8 < 0) {
    FUNC_7(VAR_5, VAR_7);
    FUNC_4(FUNC_14(VAR_2), VAR_4);
    FUNC_4(FUNC_18(VAR_2), VAR_5);
   } else {
    FUNC_5(VAR_5, VAR_7);
    FUNC_4(FUNC_14(VAR_2), VAR_4 + VAR_7);
    FUNC_4(FUNC_18(VAR_2), VAR_5 - VAR_7);
   }
  } else if (VAR_7 < 8) {

   VAR_7 = FUNC_12(2 * 1024);
   goto fuzz_consume;
  } else if (VAR_7 == 8) {

   VAR_7 = FUNC_12(16 * 1024);
   VAR_4 = FUNC_19(VAR_2);
   if (FUNC_23(VAR_2, VAR_7) < 0)
    FUNC_4(FUNC_19(VAR_2), VAR_4);
   else
    FUNC_4(FUNC_19(VAR_2), VAR_7);
  } else {
   if (FUNC_12(8192) == 0) {

    FUNC_3(FUNC_21(VAR_2), ((void*)0));
    FUNC_1(FUNC_21(VAR_2), FUNC_18(VAR_2));
    FUNC_17(VAR_2);
    VAR_2 = FUNC_20();
    FUNC_3(VAR_2, ((void*)0));
    FUNC_0(FUNC_23(VAR_2,
        16 * 1024), 0);
   } else {


    FUNC_11(&VAR_7, sizeof(VAR_7));
    while (VAR_7 < VAR_1 / 2) {
     VAR_7 <<= 1;
     VAR_7 |= FUNC_10() & 1;
    }
    goto fuzz_reserve;
   }
  }
  FUNC_3(FUNC_21(VAR_2), ((void*)0));
  FUNC_6(FUNC_19(VAR_2), 16 * 1024);
 }
 FUNC_3(FUNC_21(VAR_2), ((void*)0));
 FUNC_1(FUNC_21(VAR_2), FUNC_18(VAR_2));
 FUNC_17(VAR_2);
 FUNC_8();
}
