
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ from_state; int name; int * ns; } ;
typedef TYPE_3__ svn_ra_serf__xml_transition_t ;
struct TYPE_9__ {int scratch_pool; TYPE_3__* ttable; int free_states; TYPE_2__* current; } ;
typedef TYPE_4__ svn_ra_serf__xml_context_t ;
typedef int svn_error_t ;
struct TYPE_6__ {char const* name; } ;
struct TYPE_7__ {TYPE_1__ tag; scalar_t__ prev; } ;


 int VAR_0 ;
 int * VAR_1 ;
 scalar_t__ VAR_2 ;
 char* FUNC_0 (char*) ;
 char* FUNC_1 (int ,char*,int ) ;
 int * FUNC_2 (int ,int *,char*,char const*) ;
 int FUNC_3 (int ) ;

svn_error_t *
FUNC_4(svn_ra_serf__xml_context_t *VAR_3)
{
  if (VAR_3->current->prev)
    {

      return FUNC_2(VAR_0, ((void*)0),
                               FUNC_0("XML stream truncated: closing '%s' missing"),
                               VAR_3->current->tag.name);
    }
  else if (! VAR_3->free_states)
    {


      const svn_ra_serf__xml_transition_t *VAR_4;
      const svn_ra_serf__xml_transition_t *VAR_5 = ((void*)0);
      const char *VAR_6;

      for (VAR_4 = VAR_3->ttable; VAR_4->ns != ((void*)0); ++VAR_4)
        {
          if (VAR_4->from_state == VAR_2)
            {
              if (VAR_5 != ((void*)0))
                {
                  VAR_5 = ((void*)0);
                  break;
                }
              VAR_5 = VAR_4;
            }
        }

      if (VAR_5)
        VAR_6 = FUNC_1(VAR_3->scratch_pool, "'%s' element not found",
                            VAR_5->name);
      else
        VAR_6 = FUNC_0("document element not found");

      return FUNC_2(VAR_0, ((void*)0),
                               FUNC_0("XML stream truncated: %s"),
                               VAR_6);
    }

  FUNC_3(VAR_3->scratch_pool);
  return VAR_1;
}
