
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ data; } ;
typedef TYPE_1__ svn_stringbuf_t ;
struct TYPE_8__ {int size; int shift; scalar_t__* offsets; int * last_matches; int * prefixes; scalar_t__ used; int pool; } ;
typedef TYPE_2__ hash_t ;
typedef int hash_key_t ;
typedef scalar_t__ apr_uint32_t ;
typedef int apr_size_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__*,int,int ) ;
 int FUNC_1 (scalar_t__) ;
 size_t FUNC_2 (TYPE_2__*,int ) ;

__attribute__((used)) static void
FUNC_3(hash_t *VAR_1,
          svn_stringbuf_t *VAR_2,
          apr_size_t VAR_3)
{
  hash_t VAR_4;
  apr_size_t VAR_5;


  apr_size_t VAR_6 = VAR_1->size * 2;
  apr_size_t VAR_7 = VAR_1->shift - 1;
  while (VAR_6 < VAR_3)
    {
      VAR_6 *= 2;
      --VAR_7;
    }


  FUNC_0(&VAR_4, VAR_6, VAR_1->pool);
  VAR_4.used = 0;
  VAR_4.shift = VAR_7;


  for (VAR_5 = 0; VAR_5 < VAR_1->size; ++VAR_5)
    {
      apr_uint32_t VAR_8 = VAR_1->offsets[VAR_5];
      if (VAR_8 != VAR_0)
        {
          hash_key_t VAR_9 = FUNC_1(VAR_2->data + VAR_8);
          size_t VAR_10 = FUNC_2(&VAR_4, VAR_9);

          if (VAR_4.offsets[VAR_10] == VAR_0)
            VAR_4.used++;

          VAR_4.prefixes[VAR_10] = VAR_1->prefixes[VAR_5];
          VAR_4.offsets[VAR_10] = VAR_8;
          VAR_4.last_matches[VAR_10] = VAR_1->last_matches[VAR_5];
        }
    }

  *VAR_1 = VAR_4;
}
