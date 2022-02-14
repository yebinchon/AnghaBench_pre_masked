
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int hash_table; } ;
typedef TYPE_1__ cpp_reader ;
struct TYPE_6__ {scalar_t__ type; } ;
typedef TYPE_2__ cpp_hashnode ;


 TYPE_2__* FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,unsigned char const*,int,int ) ;

int
FUNC_2 (cpp_reader *VAR_2, const unsigned char *VAR_3, int VAR_4)
{
  cpp_hashnode *VAR_5;

  VAR_5 = FUNC_0 (FUNC_1 (VAR_2->hash_table, VAR_3, VAR_4, VAR_0));


  return VAR_5 && VAR_5->type == VAR_1;
}
