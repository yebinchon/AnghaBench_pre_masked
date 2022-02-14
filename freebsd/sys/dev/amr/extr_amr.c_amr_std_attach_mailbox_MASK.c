
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amr_softc {int amr_mailboxphys; } ;


 int FUNC_0 (struct amr_softc*) ;
 int FUNC_1 (struct amr_softc*,int ,int) ;
 int FUNC_2 (struct amr_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_3(struct amr_softc *VAR_6)
{


    FUNC_1(VAR_6, VAR_0, VAR_6->amr_mailboxphys & 0xff);
    FUNC_1(VAR_6, VAR_1, (VAR_6->amr_mailboxphys >> 8) & 0xff);
    FUNC_1(VAR_6, VAR_2, (VAR_6->amr_mailboxphys >> 16) & 0xff);
    FUNC_1(VAR_6, VAR_3, (VAR_6->amr_mailboxphys >> 24) & 0xff);
    FUNC_1(VAR_6, VAR_5, VAR_4);


    FUNC_0(VAR_6);
    FUNC_2(VAR_6);
}
