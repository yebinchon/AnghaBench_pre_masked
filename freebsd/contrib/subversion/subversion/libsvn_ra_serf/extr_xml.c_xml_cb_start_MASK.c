
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {char* ns; scalar_t__ from_state; char* name; char** collect_attrs; scalar_t__ to_state; scalar_t__ custom_close; scalar_t__ collect_cdata; } ;
typedef TYPE_1__ svn_ra_serf__xml_transition_t ;
struct TYPE_18__ {void* xmlns; void* name; } ;
struct TYPE_15__ {scalar_t__ state; TYPE_8__ tag; struct TYPE_15__* prev; int ns_list; scalar_t__ custom_close; int attrs; int cdata; int * state_pool; } ;
typedef TYPE_2__ svn_ra_serf__xml_estate_t ;
struct TYPE_16__ {scalar_t__ waiting; int scratch_pool; int baton; int (* opened_cb ) (TYPE_2__*,int ,scalar_t__,TYPE_8__*,int ) ;TYPE_2__* current; TYPE_1__* ttable; } ;
typedef TYPE_3__ svn_ra_serf__xml_context_t ;
struct TYPE_17__ {char const* name; char const* xmlns; } ;
typedef TYPE_4__ svn_ra_serf__dav_props_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int *) ;
 TYPE_2__* FUNC_6 (int *,int) ;
 void* FUNC_7 (int *,char const*) ;
 int FUNC_8 (int *,char const* const*,int ,TYPE_2__*) ;
 int FUNC_9 (TYPE_4__*,int ,char const*) ;
 int VAR_4 ;
 scalar_t__ FUNC_10 (char const*,char*) ;
 int FUNC_11 (TYPE_2__*,int ,scalar_t__,TYPE_8__*,int ) ;
 int * FUNC_12 (int ,int *,int ,char const*,...) ;
 int FUNC_13 (int ,char const*,void*) ;
 int FUNC_14 (int ) ;
 int * FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 char* FUNC_17 (char const*,char const* const*) ;
 int * FUNC_18 (TYPE_2__*) ;

__attribute__((used)) static svn_error_t *
FUNC_19(svn_ra_serf__xml_context_t *VAR_5,
             const char *VAR_6,
             const char *const *VAR_7)
{
  svn_ra_serf__xml_estate_t *VAR_8 = VAR_5->current;
  svn_ra_serf__dav_props_t VAR_9;
  const svn_ra_serf__xml_transition_t *VAR_10;
  apr_pool_t *VAR_11;
  svn_ra_serf__xml_estate_t *VAR_12;



  if (VAR_5->waiting > 0)
    {
      VAR_5->waiting++;
      return VAR_2;
    }



  FUNC_8(&VAR_8->ns_list, VAR_7, VAR_4, VAR_8);

  FUNC_9(&VAR_9, VAR_8->ns_list, VAR_6);

  for (VAR_10 = VAR_5->ttable; VAR_10->ns != ((void*)0); ++VAR_10)
    {
      if (VAR_10->from_state != VAR_8->state)
        continue;


      if (*VAR_10->name == '*')
        break;


      if (FUNC_10(VAR_9.name, VAR_10->name) == 0
          && FUNC_10(VAR_9.xmlns, VAR_10->ns) == 0)
        break;
    }
  if (VAR_10->ns == ((void*)0))
    {
      if (VAR_8->state == VAR_3)
        {
          return FUNC_12(
                        VAR_1, ((void*)0),
                        FUNC_4("XML Parsing failed: Unexpected root element '%s'"),
                        VAR_9.name);
        }

      VAR_5->waiting++;
      return VAR_2;
    }



  FUNC_3(!VAR_10->collect_cdata || VAR_10->custom_close);
  VAR_11 = FUNC_18(VAR_8);
  if (VAR_10->collect_cdata || VAR_10->collect_attrs[0])
    {
      VAR_11 = FUNC_15(VAR_11);


      VAR_12 = FUNC_6(VAR_11, sizeof(*VAR_12));
      VAR_12->state_pool = VAR_11;




      if (VAR_10->collect_cdata)
        VAR_12->cdata = FUNC_16(VAR_11);

      if (VAR_10->collect_attrs[0] != ((void*)0))
        {
          const char *const *VAR_13 = &VAR_10->collect_attrs[0];

          VAR_12->attrs = FUNC_5(VAR_11);
          for (; *VAR_13 != ((void*)0); ++VAR_13)
            {
              const char *VAR_14;
              const char *VAR_15;

              if (**VAR_13 == '?')
                {
                  VAR_14 = *VAR_13 + 1;
                  VAR_15 = FUNC_17(VAR_14, VAR_7);
                }
              else
                {
                  VAR_14 = *VAR_13;
                  VAR_15 = FUNC_17(VAR_14, VAR_7);
                  if (VAR_15 == ((void*)0))
                    return FUNC_12(
                                VAR_0,
                                ((void*)0),
                                FUNC_4("Missing XML attribute '%s' on '%s' element"),
                                VAR_14, VAR_10->name);
                }

              if (VAR_15)
                FUNC_13(VAR_12->attrs, VAR_14,
                              FUNC_7(VAR_11, VAR_15));
            }
        }
    }
  else
    {

      VAR_12 = FUNC_6(VAR_11, sizeof(*VAR_12));

    }


  VAR_12->state = VAR_10->to_state;
  VAR_12->tag.name = FUNC_7(VAR_11, VAR_9.name);
  VAR_12->tag.xmlns = FUNC_7(VAR_11, VAR_9.xmlns);
  VAR_12->custom_close = VAR_10->custom_close;


  VAR_12->ns_list = VAR_8->ns_list;


  VAR_12->prev = VAR_8;
  VAR_5->current = VAR_12;

  if (VAR_5->opened_cb)
    {
      FUNC_1(VAR_5);
      FUNC_2(VAR_5->opened_cb(VAR_12, VAR_5->baton,
                                VAR_12->state, &VAR_12->tag,
                                VAR_5->scratch_pool));
      FUNC_0(VAR_5);
      FUNC_14(VAR_5->scratch_pool);
    }

  return VAR_2;
}
