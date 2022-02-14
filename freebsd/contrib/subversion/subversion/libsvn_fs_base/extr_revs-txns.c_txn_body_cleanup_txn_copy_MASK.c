
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int pool; int fs; } ;
typedef TYPE_1__ trail_t ;
struct TYPE_12__ {scalar_t__ apr_err; } ;
typedef TYPE_2__ svn_error_t ;


 scalar_t__ VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 TYPE_2__* FUNC_1 (TYPE_2__*) ;
 TYPE_2__* FUNC_2 (int ,char const*,TYPE_1__*,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_3(void *VAR_2, trail_t *VAR_3)
{
  const char *VAR_4 = *(const char **)VAR_2;
  svn_error_t *VAR_5 = FUNC_2(VAR_3->fs, VAR_4, VAR_3,
                                             VAR_3->pool);


  if (VAR_5 && (VAR_5->apr_err == VAR_0))
    {
      FUNC_0(VAR_5);
      VAR_5 = VAR_1;
    }
  return FUNC_1(VAR_5);
}
