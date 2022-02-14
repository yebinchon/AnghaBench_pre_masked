
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int svn_string_t ;
struct TYPE_8__ {scalar_t__ state_pool; struct TYPE_8__* prev; int attrs; int state; TYPE_4__* cdata; scalar_t__ custom_close; } ;
typedef TYPE_1__ svn_ra_serf__xml_estate_t ;
struct TYPE_9__ {scalar_t__ waiting; TYPE_1__* free_states; TYPE_1__* current; int scratch_pool; int baton; int (* closed_cb ) (TYPE_1__*,int ,int ,int const*,int ,int ) ;} ;
typedef TYPE_2__ svn_ra_serf__xml_context_t ;
typedef int svn_error_t ;
struct TYPE_10__ {int * pool; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ) ;
 int * VAR_0 ;
 int FUNC_3 (TYPE_1__*,int ,int ,int const*,int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__) ;
 int * FUNC_6 (TYPE_4__*) ;

__attribute__((used)) static svn_error_t *
FUNC_7(svn_ra_serf__xml_context_t *VAR_1,
           const char *VAR_2)
{
  svn_ra_serf__xml_estate_t *VAR_3 = VAR_1->current;

  if (VAR_1->waiting > 0)
    {
      VAR_1->waiting--;
      return VAR_0;
    }

  if (VAR_3->custom_close)
    {
      const svn_string_t *VAR_4;

      if (VAR_3->cdata)
        {
          VAR_4 = FUNC_6(VAR_3->cdata);






        }
      else
        VAR_4 = ((void*)0);

      FUNC_1(VAR_1);
      FUNC_2(VAR_1->closed_cb(VAR_3, VAR_1->baton, VAR_3->state,
                                VAR_4, VAR_3->attrs,
                                VAR_1->scratch_pool));
      FUNC_0(VAR_1);
      FUNC_4(VAR_1->scratch_pool);
    }


  VAR_1->current = VAR_3->prev;



  VAR_3->prev = VAR_1->free_states;
  VAR_1->free_states = VAR_3;




  if (VAR_3->state_pool)
    FUNC_5(VAR_3->state_pool);

  return VAR_0;
}
