
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; int type; char* name; int cohort_num; } ;
typedef int Lst ;
typedef TYPE_1__ GNode ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,char*,char*,int ) ;

__attribute__((used)) static int
FUNC_3(void *VAR_5, void *VAR_6)
{
    GNode *VAR_7 = (GNode *)VAR_5;
    Lst VAR_8 = (Lst) VAR_6;

    if ((VAR_7->flags & VAR_3) == 0 && !(VAR_7->type & (VAR_1|VAR_2))) {
 if (FUNC_0(VAR_0))
     FUNC_2(VAR_4, "MakeAddChild: need to examine %s%d\n",
  VAR_7->name, VAR_7->cohort_num);
 (void)FUNC_1(VAR_8, VAR_7);
    }
    return (0);
}
