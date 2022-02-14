
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mly_softc {int dummy; } ;
struct mly_command {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 struct mly_command* FUNC_1 (struct mly_softc*) ;

__attribute__((used)) static int
FUNC_2(struct mly_softc *VAR_1, struct mly_command **VAR_2)
{
    struct mly_command *VAR_3;

    FUNC_0(3);

    if ((VAR_3 = FUNC_1(VAR_1)) == ((void*)0))
 return(VAR_0);

    *VAR_2 = VAR_3;
    return(0);
}
