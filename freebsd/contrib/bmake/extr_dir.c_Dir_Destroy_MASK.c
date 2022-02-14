
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ refCount; struct TYPE_4__* name; int files; } ;
typedef TYPE_1__ Path ;
typedef int LstNode ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,TYPE_1__*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_0 ;

void
FUNC_4(void *VAR_1)
{
    Path *VAR_2 = (Path *)VAR_1;
    VAR_2->refCount -= 1;

    if (VAR_2->refCount == 0) {
 LstNode VAR_3;

 VAR_3 = FUNC_1(VAR_0, VAR_2);
 (void)FUNC_2(VAR_0, VAR_3);

 FUNC_0(&VAR_2->files);
 FUNC_3(VAR_2->name);
 FUNC_3(VAR_2);
    }
}
