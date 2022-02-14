
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* edge ;
typedef scalar_t__ basic_block ;
struct TYPE_6__ {scalar_t__ dest; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (scalar_t__,scalar_t__,scalar_t__,void*) ;
 int FUNC_3 (scalar_t__,scalar_t__,scalar_t__,TYPE_1__*) ;
 TYPE_1__* FUNC_4 (scalar_t__,scalar_t__,int ) ;
 int FUNC_5 (int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;

__attribute__((used)) static basic_block
FUNC_7 (basic_block VAR_2,
      basic_block VAR_3,
      edge VAR_4,
      void *VAR_5)
{
  basic_block VAR_6 = ((void*)0);
  edge VAR_7;

  FUNC_0 (VAR_4->dest == VAR_3);



  VAR_6 = FUNC_6 (VAR_4);


  FUNC_2 (VAR_2, VAR_3, VAR_6,
     VAR_5);


  VAR_7 = FUNC_4 (VAR_6, VAR_2, FUNC_1 () ? VAR_1 : 0);
  FUNC_5 (VAR_0, VAR_2, VAR_6);
  FUNC_5 (VAR_0, VAR_3, VAR_6);


  FUNC_3 (VAR_2, VAR_3, VAR_6, VAR_7);

  return VAR_6;
}
