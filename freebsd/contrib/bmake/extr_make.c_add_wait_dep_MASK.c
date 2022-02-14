
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char* name; char* cohort_num; int parents; int unmade; int children; } ;
typedef TYPE_1__ GNode ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,char*,char*,char*,char*) ;
 int FUNC_4 (char*,TYPE_1__*,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_5(void *VAR_2, void *VAR_3)
{
    GNode *VAR_4 = VAR_2;
    GNode *VAR_5 = VAR_3;

    if (VAR_4 == VAR_5)
 return 1;

    if (VAR_4 == ((void*)0) || VAR_5 == ((void*)0)) {
 FUNC_4("bad wait dep %p %p\n", VAR_4, VAR_5);
 FUNC_2(4);
    }
    if (FUNC_0(VAR_0))
  FUNC_3(VAR_1, ".WAIT: add dependency %s%s -> %s\n",
  VAR_4->name, VAR_4->cohort_num, VAR_5->name);

    FUNC_1(VAR_5->children, VAR_4);
    VAR_5->unmade++;
    FUNC_1(VAR_4->parents, VAR_5);
    return 0;
}
