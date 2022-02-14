
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct command {int t_dcom; } ;
struct biltins {int minargs; int maxargs; int (* bfunct ) (int ,struct command*) ;int bname; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,struct command*) ;
 int FUNC_4 (int ) ;

void
FUNC_5(struct command *VAR_3, const struct biltins *VAR_4)
{
    int VAR_5;

    FUNC_4(VAR_3->t_dcom);
    FUNC_1(VAR_4->bname);
    VAR_5 = FUNC_0(VAR_3->t_dcom) - 1;
    if (VAR_5 < VAR_4->minargs)
 FUNC_2(VAR_0 | VAR_1);
    if (VAR_5 > VAR_4->maxargs)
 FUNC_2(VAR_0 | VAR_2);
    (*VAR_4->bfunct) (VAR_3->t_dcom, VAR_3);
}
