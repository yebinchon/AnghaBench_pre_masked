
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct block {int dummy; } ;
struct TYPE_5__ {int prevlinktype; scalar_t__ is_geneve; } ;
typedef TYPE_1__ compiler_state_t ;


 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 struct block* FUNC_0 (TYPE_1__*,int ,int ,int ,int) ;
 struct block* FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct block*) ;

__attribute__((used)) static struct block *
FUNC_3(compiler_state_t *VAR_3)
{
 struct block *VAR_4;

 if (VAR_3->is_geneve)
  return FUNC_1(VAR_3);

 switch (VAR_3->prevlinktype) {

 case 128:







  VAR_4 = FUNC_0(VAR_3, VAR_1, VAR_2, VAR_0, 0xFF00);
  FUNC_2(VAR_4);
  return VAR_4;

 default:



  return ((void*)0);
 }

}
