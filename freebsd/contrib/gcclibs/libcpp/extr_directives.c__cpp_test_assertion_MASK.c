
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct answer {int dummy; } ;
struct TYPE_10__ {TYPE_1__* cur_token; } ;
typedef TYPE_2__ cpp_reader ;
struct TYPE_11__ {scalar_t__ type; } ;
typedef TYPE_3__ cpp_hashnode ;
struct TYPE_9__ {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,int) ;
 scalar_t__* FUNC_1 (TYPE_3__*,struct answer*) ;
 TYPE_3__* FUNC_2 (TYPE_2__*,struct answer**,int ) ;

int
FUNC_3 (cpp_reader *VAR_3, unsigned int *VAR_4)
{
  struct answer *VAR_5;
  cpp_hashnode *VAR_6;

  VAR_6 = FUNC_2 (VAR_3, &VAR_5, VAR_2);



  *VAR_4 = 0;

  if (VAR_6)
    *VAR_4 = (VAR_6->type == VAR_1 &&
       (VAR_5 == 0 || *FUNC_1 (VAR_6, VAR_5) != 0));
  else if (VAR_3->cur_token[-1].type == VAR_0)
    FUNC_0 (VAR_3, 1);


  return VAR_6 == 0;
}
