
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int nvpair_t ;
struct TYPE_6__ {scalar_t__ nvl_error; } ;
typedef TYPE_1__ nvlist_t ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int * FUNC_2 (TYPE_1__*,int,char const*) ;
 int FUNC_3 (TYPE_1__*,int *) ;
 int FUNC_4 (int,char const*) ;

void
FUNC_5(nvlist_t *VAR_3, const char *VAR_4, int VAR_5)
{
 nvpair_t *VAR_6;

 FUNC_0(VAR_3);
 FUNC_1(VAR_3->nvl_error == 0);
 FUNC_1(VAR_5 == VAR_2 ||
     (VAR_5 >= VAR_0 && VAR_5 <= VAR_1));

 VAR_6 = FUNC_2(VAR_3, VAR_5, VAR_4);
 if (VAR_6 != ((void*)0))
  FUNC_3(VAR_3, VAR_6);
 else
  FUNC_4(VAR_5, VAR_4);
}
