
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int len; int * val; } ;
typedef TYPE_1__ TESTSeqOf ;
typedef int TESTInteger ;


 int FUNC_0 (TYPE_1__*,int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_1__*,int) ;

__attribute__((used)) static int
FUNC_4(void)
{
    TESTSeqOf VAR_0;
    TESTInteger VAR_1;
    int VAR_2;

    VAR_0.val = ((void*)0);
    VAR_0.len = 0;

    VAR_2 = FUNC_0(&VAR_0, &VAR_1);
    if (VAR_2) { FUNC_2("failed adding\n"); goto out; }
    VAR_2 = FUNC_0(&VAR_0, &VAR_1);
    if (VAR_2) { FUNC_2("failed adding\n"); goto out; }
    VAR_2 = FUNC_0(&VAR_0, &VAR_1);
    if (VAR_2) { FUNC_2("failed adding\n"); goto out; }
    VAR_2 = FUNC_0(&VAR_0, &VAR_1);
    if (VAR_2) { FUNC_2("failed adding\n"); goto out; }

    VAR_2 = FUNC_3(&VAR_0, VAR_0.len - 1);
    if (VAR_2) { FUNC_2("failed removing\n"); goto out; }
    VAR_2 = FUNC_3(&VAR_0, 2);
    if (VAR_2) { FUNC_2("failed removing\n"); goto out; }
    VAR_2 = FUNC_3(&VAR_0, 0);
    if (VAR_2) { FUNC_2("failed removing\n"); goto out; }
    VAR_2 = FUNC_3(&VAR_0, 0);
    if (VAR_2) { FUNC_2("failed removing\n"); goto out; }
    VAR_2 = FUNC_3(&VAR_0, 0);
    if (VAR_2 == 0) {
 FUNC_2("can remove from empty list");
 return 1;
    }

    if (VAR_0.len != 0) {
 FUNC_2("seq not empty!");
 return 1;
    }
    FUNC_1(&VAR_0);
    VAR_2 = 0;

out:

    return VAR_2;
}
