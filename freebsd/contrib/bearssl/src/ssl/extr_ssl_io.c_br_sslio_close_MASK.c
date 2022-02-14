
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int engine; } ;
typedef TYPE_1__ br_sslio_context ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,size_t) ;
 int * FUNC_4 (int ,size_t*) ;
 int FUNC_5 (TYPE_1__*,int ) ;

int
FUNC_6(br_sslio_context *VAR_3)
{
 FUNC_0(VAR_3->engine);
 while (FUNC_1(VAR_3->engine) != VAR_1) {



  size_t VAR_4;

  FUNC_5(VAR_3, VAR_2);
  if (FUNC_4(VAR_3->engine, &VAR_4) != ((void*)0)) {
   FUNC_3(VAR_3->engine, VAR_4);
  }
 }
 return FUNC_2(VAR_3->engine) == VAR_0;
}
