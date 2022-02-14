
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int reneg; int flags; } ;
typedef TYPE_1__ br_ssl_engine_context ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int * FUNC_1 (TYPE_1__*,size_t*) ;
 int FUNC_2 (TYPE_1__*,int) ;

int
FUNC_3(br_ssl_engine_context *VAR_1)
{
 size_t VAR_2;

 if (FUNC_0(VAR_1) || VAR_1->reneg == 1
  || (VAR_1->flags & VAR_0) != 0
  || FUNC_1(VAR_1, &VAR_2) != ((void*)0))
 {
  return 0;
 }
 FUNC_2(VAR_1, 2);
 return 1;
}
