
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_4__ {scalar_t__ refcount; int key; int panic; } ;
typedef TYPE_1__ bdb_env_t ;


 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_0 (scalar_t__,int *,int,int *) ;
 scalar_t__ VAR_3 ;
 int * FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int *) ;
 int * FUNC_4 (int ,int *,int ) ;
 int * FUNC_5 (int *) ;

__attribute__((used)) static svn_error_t *
FUNC_6(bdb_env_t *VAR_4)
{
  svn_error_t *VAR_5 = VAR_2;

  if (--VAR_4->refcount != 0)
    {



      if (FUNC_3(&VAR_4->panic))
        VAR_5 = FUNC_4(VAR_1, ((void*)0),
                                FUNC_2(VAR_0));

    }
  else
    {




      if (VAR_3)
        FUNC_0(VAR_3, &VAR_4->key, sizeof VAR_4->key, ((void*)0));
      VAR_5 = FUNC_1(VAR_4);
    }
  return FUNC_5(VAR_5);
}
