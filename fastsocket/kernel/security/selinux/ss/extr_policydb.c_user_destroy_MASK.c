
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int cat; } ;
struct TYPE_5__ {TYPE_3__* level; } ;
struct user_datum {TYPE_1__ dfltlevel; TYPE_2__ range; int roles; } ;
struct TYPE_6__ {int cat; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (void*) ;

__attribute__((used)) static int FUNC_2(void *VAR_0, void *VAR_1, void *VAR_2)
{
 struct user_datum *VAR_3;

 FUNC_1(VAR_0);
 VAR_3 = VAR_1;
 FUNC_0(&VAR_3->roles);
 FUNC_0(&VAR_3->range.level[0].cat);
 FUNC_0(&VAR_3->range.level[1].cat);
 FUNC_0(&VAR_3->dfltlevel.cat);
 FUNC_1(VAR_1);
 return 0;
}
