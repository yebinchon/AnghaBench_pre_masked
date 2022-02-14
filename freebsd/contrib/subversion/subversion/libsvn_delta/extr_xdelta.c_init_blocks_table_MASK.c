
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct blocks {int max; char const* data; int flags; TYPE_1__* slots; } ;
typedef int apr_uint32_t ;
typedef int apr_size_t ;
typedef int apr_pool_t ;
struct TYPE_2__ {int pos; scalar_t__ adlersum; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct blocks*,int ,int) ;
 TYPE_1__* FUNC_2 (int *,int) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (int ,int ,int) ;

__attribute__((used)) static void
FUNC_5(const char *VAR_2,
                  apr_size_t VAR_3,
                  struct blocks *VAR_4,
                  apr_pool_t *VAR_5)
{
  apr_size_t VAR_6;
  apr_size_t VAR_7 = 1;
  apr_uint32_t VAR_8;
  apr_uint32_t VAR_9;


  VAR_6 = VAR_3 / VAR_0 + 1;

  while (VAR_7 <= VAR_6)
    VAR_7 *= 2;

  VAR_7 *= 2;
  VAR_8 = (apr_uint32_t) VAR_7;
  FUNC_0(VAR_7 == VAR_8);
  VAR_4->max = VAR_8 - 1;
  VAR_4->data = VAR_2;
  VAR_4->slots = FUNC_2(VAR_5, VAR_8 * sizeof(*(VAR_4->slots)));
  for (VAR_9 = 0; VAR_9 < VAR_8; ++VAR_9)
    {

      VAR_4->slots[VAR_9].adlersum = 0;
      VAR_4->slots[VAR_9].pos = VAR_1;
    }


  FUNC_4(VAR_4->flags, 0, sizeof(VAR_4->flags));




  for (VAR_9 = 0; VAR_9 + VAR_0 <= VAR_3; VAR_9 += VAR_0)
    FUNC_1(VAR_4, FUNC_3(VAR_2 + VAR_9), VAR_9);
}
