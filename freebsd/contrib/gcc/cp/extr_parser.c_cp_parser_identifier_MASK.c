
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int tree ;
struct TYPE_4__ {int value; } ;
struct TYPE_5__ {TYPE_1__ u; } ;
typedef TYPE_2__ cp_token ;
typedef int cp_parser ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int *,int ,char*) ;
 int VAR_1 ;

__attribute__((used)) static tree
FUNC_1 (cp_parser* VAR_2)
{
  cp_token *VAR_3;


  VAR_3 = FUNC_0 (VAR_2, VAR_0, "identifier");

  return VAR_3 ? VAR_3->u.value : VAR_1;
}
