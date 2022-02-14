
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mly_softc {int dummy; } ;
struct mly_command {void (* mc_complete ) (struct mly_command*) ;int mc_flags; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 struct mly_command* FUNC_1 (struct mly_softc*) ;
 int FUNC_2 (struct mly_command*) ;
 int FUNC_3 (struct mly_command*) ;

__attribute__((used)) static void
FUNC_4(struct mly_softc *VAR_1)
{
    struct mly_command *VAR_2;
    void (* VAR_3)(struct mly_command *VAR_4);

    FUNC_0(2);




    while ((VAR_2 = FUNC_1(VAR_1)) != ((void*)0)) {
 FUNC_2(VAR_2);
 VAR_3 = VAR_2->mc_complete;
 VAR_2->mc_flags |= VAR_0;




 if (VAR_3 != ((void*)0)) {
     VAR_3(VAR_2);
 } else {
     FUNC_3(VAR_2);
 }
    }





}
