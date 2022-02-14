
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int8_t ;
typedef int u_int32_t ;
struct amr_softc {TYPE_1__* amr_mailbox; } ;
struct amr_mailbox {int mb_nstatus; int mb_status; int* mb_completed; } ;
struct TYPE_2__ {int mb_nstatus; int* mb_completed; int mb_status; } ;


 int FUNC_0 (struct amr_softc*) ;
 int FUNC_1 (struct amr_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct amr_softc*,int) ;
 int FUNC_3 (struct amr_softc*,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;

__attribute__((used)) static int
FUNC_6(struct amr_softc *VAR_2, struct amr_mailbox *VAR_3)
{
    int VAR_4, VAR_5;
    u_int32_t VAR_6;
    u_int8_t VAR_7;
    u_int8_t VAR_8[46];

    FUNC_5(3);

    VAR_4 = 0;


    if ((VAR_6 = FUNC_1(VAR_2)) == VAR_1) {


 FUNC_3(VAR_2, VAR_1);

 while ((VAR_7 = VAR_2->amr_mailbox->mb_nstatus) == 0xff)
     FUNC_4(1);
 VAR_2->amr_mailbox->mb_nstatus = 0xff;


 for (VAR_5 = 0; VAR_5 < VAR_7; VAR_5++) {
     while ((VAR_8[VAR_5] = VAR_2->amr_mailbox->mb_completed[VAR_5]) == 0xff)
  FUNC_4(1);
     VAR_2->amr_mailbox->mb_completed[VAR_5] = 0xff;
 }


 VAR_3->mb_nstatus = VAR_7;
 VAR_3->mb_status = VAR_2->amr_mailbox->mb_status;
 VAR_2->amr_mailbox->mb_status = 0xff;

 for (VAR_5 = 0; VAR_5 < VAR_7; VAR_5++)
     VAR_3->mb_completed[VAR_5] = VAR_8[VAR_5];


 FUNC_2(VAR_2, VAR_0);
 VAR_4 = 1;
    }

    return(VAR_4);
}
