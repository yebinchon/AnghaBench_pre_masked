
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef size_t u_int ;
struct run_softc {int rf24_20mhz; int rf24_40mhz; int bbp26; int bbp25; } ;
struct TYPE_3__ {int reg; int val; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_5 ;
 int FUNC_1 (struct run_softc*) ;
 int FUNC_2 (struct run_softc*,int,int *) ;
 int FUNC_3 (struct run_softc*,int) ;
 int FUNC_4 (struct run_softc*,int ,int*) ;
 int FUNC_5 (struct run_softc*,int,int*) ;
 int FUNC_6 (struct run_softc*,int,int) ;
 int FUNC_7 (struct run_softc*,int ,int) ;

__attribute__((used)) static void
FUNC_8(struct run_softc *VAR_6)
{
 uint32_t VAR_7;
 uint8_t VAR_8;
 u_int VAR_9;


 FUNC_4(VAR_6, VAR_0, &VAR_7);
 VAR_7 &= ~(1 << 4 | 1 << 7);
 FUNC_7(VAR_6, VAR_0, VAR_7);


 for (VAR_9 = 0; VAR_9 < FUNC_0(VAR_5); VAR_9++) {
  FUNC_6(VAR_6, VAR_5[VAR_9].reg,
      VAR_5[VAR_9].val);
 }


 FUNC_6(VAR_6, 2, VAR_4);


 FUNC_1(VAR_6);

 FUNC_5(VAR_6, 18, &VAR_8);
 FUNC_6(VAR_6, 18, VAR_8 | VAR_3);





 FUNC_4(VAR_6, VAR_1, &VAR_7);
 VAR_7 = (VAR_7 & ~0x1f000000) | 0x0d000000;
 FUNC_7(VAR_6, VAR_1, VAR_7);
 FUNC_3(VAR_6, 1);
 VAR_7 = (VAR_7 & ~0x1f000000) | 0x01000000;
 FUNC_7(VAR_6, VAR_1, VAR_7);

 VAR_6->rf24_20mhz = 0x1f;
 VAR_6->rf24_40mhz = 0x2f;


 FUNC_2(VAR_6, 25, &VAR_6->bbp25);
 FUNC_2(VAR_6, 26, &VAR_6->bbp26);

 FUNC_4(VAR_6, VAR_2, &VAR_7);
 FUNC_7(VAR_6, VAR_2, VAR_7 | 1);
}
