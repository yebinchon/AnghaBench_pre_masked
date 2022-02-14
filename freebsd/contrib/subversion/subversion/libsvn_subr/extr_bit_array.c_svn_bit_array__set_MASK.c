
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ svn_boolean_t ;
struct TYPE_3__ {int block_count; unsigned char** blocks; int pool; } ;
typedef TYPE_1__ svn_bit_array__t ;
typedef int apr_size_t ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ,int) ;
 int FUNC_1 (unsigned char**,unsigned char**,int) ;
 int FUNC_2 (int) ;

void
FUNC_3(svn_bit_array__t *VAR_2,
                   apr_size_t VAR_3,
                   svn_boolean_t VAR_4)
{
  unsigned char *VAR_5;


  apr_size_t VAR_6 = VAR_3 / VAR_1;


  apr_size_t VAR_7 = (VAR_3 % VAR_1) / 8;


  apr_size_t VAR_8 = (VAR_3 % VAR_1) % 8;






  if (VAR_6 >= VAR_2->block_count)
    {
      apr_size_t VAR_9;
      unsigned char **VAR_10;




      if (!VAR_4)
        return;




      VAR_9 = FUNC_2(VAR_3);
      VAR_10 = FUNC_0(VAR_2->pool, VAR_9 * sizeof(*VAR_10));
      FUNC_1(VAR_10, VAR_2->blocks,
             VAR_2->block_count * sizeof(*VAR_10));
      VAR_2->blocks = VAR_10;
      VAR_2->block_count = VAR_9;
    }




  VAR_5 = VAR_2->blocks[VAR_6];
  if (VAR_5 == ((void*)0))
    {



      if (!VAR_4)
        return;



      VAR_5 = FUNC_0(VAR_2->pool, VAR_0);
      VAR_2->blocks[VAR_6] = VAR_5;
    }


  if (VAR_4)
    VAR_5[VAR_7] |= (unsigned char)(1u << VAR_8);
  else
    VAR_5[VAR_7] &= ~(unsigned char)(1u << VAR_8);
}
