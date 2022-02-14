
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ children; scalar_t__ cp; TYPE_1__* parent; struct TYPE_6__* pref; struct TYPE_6__* file; } ;
struct TYPE_5__ {int children; scalar_t__ cp; } ;
typedef TYPE_2__ Src ;
typedef int * LstNode ;
typedef scalar_t__ Lst ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__,int *) ;
 int FUNC_3 (scalar_t__,int ,int *) ;
 int * FUNC_4 (scalar_t__,TYPE_2__*) ;
 int * FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_8 (int ,char*,...) ;
 int FUNC_9 (TYPE_2__*) ;

__attribute__((used)) static int
FUNC_10(Lst VAR_4)
{
    LstNode VAR_5;
    Src *VAR_6;
    int VAR_7 = 0;

    if (FUNC_6(VAR_4) == VAR_0) {
 return 0;
    }







    while ((VAR_5 = FUNC_5(VAR_4)) != ((void*)0)) {
 VAR_6 = (Src *)FUNC_1(VAR_5);
 if (VAR_6->children == 0) {
     FUNC_9(VAR_6->file);
     if (!VAR_6->parent)
  FUNC_9(VAR_6->pref);
     else {





  --VAR_6->parent->children;
     }




     FUNC_7(VAR_4, VAR_5);
     FUNC_9(VAR_6);
     VAR_7 |= 1;
     FUNC_0(VAR_4);
     return VAR_2;
 }







    }

    FUNC_0(VAR_4);

    return VAR_7;
}
