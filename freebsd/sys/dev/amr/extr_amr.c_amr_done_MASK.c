
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amr_softc {int amr_dev; struct amr_command** amr_busycmd; scalar_t__ (* amr_get_work ) (struct amr_softc*,struct amr_mailbox*) ;} ;
struct amr_mailbox {int mb_nstatus; int* mb_completed; int mb_status; } ;
struct amr_command {int ac_status; } ;
typedef int ac_qhead_t ;


 int FUNC_0 (struct amr_softc*,int *) ;
 int FUNC_1 (struct amr_command*,int *) ;
 int FUNC_2 (struct amr_command*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int,char*,int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,char*,int) ;
 scalar_t__ FUNC_7 (struct amr_softc*,struct amr_mailbox*) ;

int
FUNC_8(struct amr_softc *VAR_0)
{
    ac_qhead_t VAR_1;
    struct amr_command *VAR_2;
    struct amr_mailbox VAR_3;
    int VAR_4, VAR_5, VAR_6;

    FUNC_5(3);


    VAR_6 = 0;
    FUNC_3(&VAR_1);


    for (;;) {

 if (VAR_0->amr_get_work(VAR_0, &VAR_3)) {
     VAR_6 = 1;


     for (VAR_4 = 0; VAR_4 < VAR_3.mb_nstatus; VAR_4++) {

  VAR_5 = VAR_3.mb_completed[VAR_4] - 1;
  VAR_2 = VAR_0->amr_busycmd[VAR_5];


  if (VAR_2 != ((void*)0)) {


      FUNC_2(VAR_2);


      VAR_2->ac_status = VAR_3.mb_status;
      FUNC_1(VAR_2, &VAR_1);
      FUNC_4(3, "completed command with status %x", VAR_3.mb_status);
  } else {
      FUNC_6(VAR_0->amr_dev, "bad slot %d completed\n", VAR_5);
  }
     }
 } else
     break;
    }


    FUNC_0(VAR_0, &VAR_1);

    return(VAR_6);
}
