
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int type; int unmade; int children; } ;
typedef int * LstNode ;
typedef TYPE_1__ GNode ;


 int * FUNC_0 (int ,TYPE_1__*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (TYPE_1__*,TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_3(void *VAR_3, void *VAR_4)
{
    GNode *VAR_5 = (GNode *)VAR_3;
    GNode *VAR_6 = (GNode *)VAR_4;
    LstNode VAR_7;
    int VAR_8;

    VAR_8 = ((VAR_5->type & VAR_0) == 0);
    VAR_5->type |= VAR_0;

    if ((VAR_5->type & (VAR_1|VAR_2)) == 0)
 return (0);

    if (VAR_8)
 FUNC_2(VAR_5, VAR_6);
    if ((VAR_7 = FUNC_0(VAR_6->children, VAR_5)) != ((void*)0)) {
 FUNC_1(VAR_6->children, VAR_7);
 VAR_6->unmade--;
    }
    return (0);
}
