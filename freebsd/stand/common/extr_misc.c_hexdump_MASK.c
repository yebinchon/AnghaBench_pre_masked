
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ caddr_t ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 () ;
 int FUNC_2 () ;

void
FUNC_3(caddr_t VAR_0, size_t VAR_1)
{
    caddr_t VAR_2;
    int VAR_3, VAR_4;
    char VAR_5[80];


    FUNC_2();
    for (VAR_2 = VAR_0; VAR_2 < (VAR_0 + VAR_1); VAR_2 += 16) {
 {sprintf(VAR_5, "%08lx  " , (long) VAR_2); FUNC_0(VAR_5);};

 for (VAR_3 = 0; VAR_3 < 16; VAR_3++) {
     if ((VAR_2 + VAR_3) < (VAR_0 + VAR_1)) {
  {FUNC_0(VAR_5, "%02x " , *(uint8_t *)(VAR_2 + VAR_3)); FUNC_0(VAR_5);};
     } else {
  {FUNC_0(VAR_5, "-- "); FUNC_0(VAR_5);};
     }
     if (VAR_3 == 7)
  {FUNC_0(VAR_5, " "); FUNC_0(VAR_5);};
 }
 {FUNC_0(VAR_5, " |"); FUNC_0(VAR_5);};
 for (VAR_3 = 0; VAR_3 < 16; VAR_3++) {
     if ((VAR_2 + VAR_3) < (VAR_0 + VAR_1)) {
  VAR_4 = *(uint8_t *)(VAR_2 + VAR_3);
  if ((VAR_4 < ' ') || (VAR_4 > '~'))
      VAR_4 = '.';
  {FUNC_0(VAR_5, "%c" , VAR_4); FUNC_0(VAR_5);};
     } else {
  {FUNC_0(VAR_5, " "); FUNC_0(VAR_5);};
     }
 }
 {FUNC_0(VAR_5, "|\n"); FUNC_0(VAR_5);};
    }
    FUNC_1();
}
