
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct pnpinfo {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_7 ;
 scalar_t__ FUNC_2 (struct pnpinfo*) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (struct pnpinfo*,int ) ;
 int FUNC_7 (struct pnpinfo*) ;
 struct pnpinfo* FUNC_8 () ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct pnpinfo*) ;

__attribute__((used)) static int
FUNC_11(void)
{
    int VAR_8;
    struct pnpinfo *VAR_9;
    uint8_t VAR_10[VAR_6];
    int VAR_11;

    FUNC_3();
    VAR_11 = 0;

    FUNC_4(VAR_0, 0x04);

    for (VAR_8 = 1; ; VAR_8++) {

 FUNC_4(VAR_4, 0);
 FUNC_4(VAR_3, (VAR_7 >> 2));
 FUNC_5(VAR_5, VAR_1);
 FUNC_0(1000);

 if (FUNC_1(VAR_10)) {
     FUNC_4(VAR_2, VAR_8);
     VAR_9 = FUNC_8();
     VAR_11++;
     FUNC_6(VAR_9, FUNC_9(VAR_10));

     if (FUNC_2(VAR_9)) {
  FUNC_10(VAR_9);
     } else {
  FUNC_7(VAR_9);
     }
 } else {
     break;
 }
    }

    while (--VAR_8 > 0) {
 FUNC_3();
 FUNC_4(VAR_4, VAR_8);
 FUNC_4(VAR_0, 0x02);
 FUNC_0(1000);
 VAR_8--;
    }
    return(VAR_11);
}
