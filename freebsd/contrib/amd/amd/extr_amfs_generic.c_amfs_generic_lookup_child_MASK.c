
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {int am_error; int ** am_alarray; TYPE_2__* am_al; } ;
typedef TYPE_3__ am_node ;
typedef int am_loc ;
struct TYPE_11__ {TYPE_1__* al_mnt; } ;
struct TYPE_10__ {int mf_error; int mf_server; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;


 int ** FUNC_1 (TYPE_3__*,int*) ;
 TYPE_3__* FUNC_2 (TYPE_3__*,char*,int*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_3__*) ;

am_node *
FUNC_6(am_node *VAR_1, char *VAR_2, int *VAR_3, int VAR_4)
{
  am_node *VAR_5;
  am_loc **VAR_6;
  int VAR_7;

  FUNC_3("in amfs_generic_lookup_child");

  *VAR_3 = 0;
  VAR_5 = FUNC_2(VAR_1, VAR_2, VAR_3);


  if (!VAR_5 || *VAR_3 > 0)
    return VAR_5;


  if (*VAR_3 == 0 && FUNC_0(VAR_5->am_al->al_mnt->mf_server))
    return VAR_5;

  switch (VAR_4) {
  case 129:



    FUNC_4(VAR_0);
  case 128:
    return VAR_5;
  }


  VAR_7 = *VAR_3;

  VAR_6 = FUNC_1(VAR_5, VAR_3);
  if (!VAR_6) {
    VAR_5->am_error = VAR_5->am_al->al_mnt->mf_error = *VAR_3;
    FUNC_5(VAR_5);
    return ((void*)0);
  }


  VAR_5->am_alarray = VAR_6;







  return VAR_5;
}
