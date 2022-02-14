
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ waiting; int scratch_pool; TYPE_3__* current; int baton; int (* cdata_cb ) (TYPE_3__*,int ,int ,char const*,int ,int ) ;} ;
typedef TYPE_1__ svn_ra_serf__xml_context_t ;
typedef int svn_error_t ;
typedef int apr_size_t ;
struct TYPE_7__ {int state; int * cdata; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;
 int * VAR_0 ;
 int FUNC_3 (TYPE_3__*,int ,int ,char const*,int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,char const*,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_6(svn_ra_serf__xml_context_t *VAR_1,
             const char *VAR_2,
             apr_size_t VAR_3)
{


  if (VAR_1->waiting > 0)
    return VAR_0;


  if (VAR_1->current->cdata != ((void*)0))
    {
      FUNC_5(VAR_1->current->cdata, VAR_2, VAR_3);
    }


  else if (VAR_1->cdata_cb != ((void*)0))
    {
      FUNC_1(VAR_1);
      FUNC_2(VAR_1->cdata_cb(VAR_1->current,
                               VAR_1->baton,
                               VAR_1->current->state,
                               VAR_2, VAR_3,
                               VAR_1->scratch_pool));
      FUNC_0(VAR_1);
      FUNC_4(VAR_1->scratch_pool);
    }

  return VAR_0;
}
