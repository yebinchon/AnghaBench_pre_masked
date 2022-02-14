
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int fs; } ;
typedef TYPE_1__ trail_t ;
typedef int svn_error_t ;
struct TYPE_8__ {char const* txn_id; } ;
typedef TYPE_2__ representation_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 scalar_t__ FUNC_1 (char const*,char const*) ;
 int * FUNC_2 (int ,char const*,char const*,TYPE_1__*,int *) ;
 int FUNC_3 (TYPE_2__**,int ,char const*,TYPE_1__*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_4(const char *VAR_1,
                          const char *VAR_2,
                          const char *VAR_3,
                          trail_t *VAR_4,
                          apr_pool_t *VAR_5)
{
  if (! (VAR_1 && VAR_2
         && (FUNC_1(VAR_1, VAR_2) != 0)))
    return VAR_0;

  if (VAR_3)
    {
      representation_t *VAR_6;
      FUNC_0(FUNC_3(&VAR_6, VAR_4->fs, VAR_1,
                                   VAR_4, VAR_5));
      if (FUNC_1(VAR_6->txn_id, VAR_3) != 0)
        return VAR_0;
    }

  return FUNC_2(VAR_4->fs, VAR_1, VAR_2,
                                  VAR_4, VAR_5);
}
