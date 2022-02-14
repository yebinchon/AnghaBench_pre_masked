
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef enum rid { ____Placeholder_rid } rid ;
struct TYPE_3__ {int keyword; } ;
typedef TYPE_1__ c_token ;
typedef int c_parser ;


 TYPE_1__* FUNC_0 (int *) ;

__attribute__((used)) static inline bool
FUNC_1 (c_parser *VAR_0, enum rid VAR_1)
{
  c_token *VAR_2;


  VAR_2 = FUNC_0 (VAR_0);

  return VAR_2->keyword == VAR_1;
}
