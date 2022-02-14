
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int type; int name; int lineno; int fname; int commands; int cohorts; } ;
typedef TYPE_1__ GNode ;


 int FUNC_0 (int ,void*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int ,int ,int ,char*,int ) ;
 int FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 (void*) ;
 int FUNC_7 (int ,char*,int ,...) ;

__attribute__((used)) static int
FUNC_8(void *VAR_4, void *VAR_5)
{
    GNode *VAR_6 = (GNode *)VAR_4;


    if ((VAR_6->type & VAR_0) && !FUNC_2 (VAR_6->cohorts))
 VAR_6 = (GNode *)FUNC_1(FUNC_3(VAR_6->cohorts));


    if (!(VAR_6->type & VAR_1)) {
 (void)FUNC_0(VAR_6->commands, VAR_5);
 if (FUNC_6(VAR_5))
     VAR_6->type |= VAR_2;
 FUNC_5(VAR_6);
    } else {
 FUNC_7(VAR_3,
       "duplicate script for target \"%s\" ignored",
       VAR_6->name);
 FUNC_4(VAR_6->fname, VAR_6->lineno, VAR_3,
       "using previous script for \"%s\" defined here",
       VAR_6->name);

    }
    return(0);
}
