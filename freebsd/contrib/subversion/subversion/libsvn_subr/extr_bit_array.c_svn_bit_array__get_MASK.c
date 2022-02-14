
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned char svn_boolean_t ;
struct TYPE_3__ {int block_count; unsigned char** blocks; } ;
typedef TYPE_1__ svn_bit_array__t ;
typedef int apr_size_t ;


 int VAR_0 ;

svn_boolean_t
FUNC_0(svn_bit_array__t *VAR_1,
                   apr_size_t VAR_2)
{
  unsigned char *VAR_3;


  apr_size_t VAR_4 = VAR_2 / VAR_0;


  apr_size_t VAR_5 = (VAR_2 % VAR_0) / 8;


  apr_size_t VAR_6 = (VAR_2 % VAR_0) % 8;


  if (VAR_4 >= VAR_1->block_count)
    return 0;


  VAR_3 = VAR_1->blocks[VAR_4];
  if (VAR_3 == ((void*)0))
    return 0;


  return (VAR_3[VAR_5] >> VAR_6) & 1;
}
