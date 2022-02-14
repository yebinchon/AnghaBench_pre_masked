
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {char* data; } ;
typedef TYPE_1__ svn_string_t ;
typedef scalar_t__ svn_revnum_t ;
typedef int svn_ra_serf__xml_estate_t ;
struct TYPE_10__ {scalar_t__ revision; void* has_children; void* subtractive_merge; int * revprops; int * changed_paths2; int * changed_paths; } ;
typedef TYPE_2__ svn_log_entry_t ;
typedef int svn_error_t ;
struct TYPE_11__ {scalar_t__ limit; scalar_t__ nest_level; scalar_t__ count; int * collect_paths; int * collect_revprops; scalar_t__ want_message; scalar_t__ want_date; scalar_t__ want_author; int receiver_baton; int (* receiver ) (int ,TYPE_2__*,int *) ;} ;
typedef TYPE_3__ log_context_t ;
typedef int apr_pool_t ;
typedef scalar_t__ apr_int64_t ;
typedef int apr_hash_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_12 ;
 int FUNC_2 (scalar_t__) ;
 int * VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,char,TYPE_1__ const*,int *) ;
 int FUNC_7 (int *,int ,TYPE_1__ const*,char*) ;
 int FUNC_8 (int ,TYPE_2__*,int *) ;
 int FUNC_9 (scalar_t__*,char const*) ;
 void* FUNC_10 (int *,char*,int ) ;
 char* FUNC_11 (int *,char*) ;
 TYPE_2__* FUNC_12 (int *) ;
 int FUNC_13 (int *,int,char*,char*) ;

__attribute__((used)) static svn_error_t *
FUNC_14(svn_ra_serf__xml_estate_t *VAR_18,
           void *VAR_19,
           int VAR_20,
           const svn_string_t *VAR_21,
           apr_hash_t *VAR_22,
           apr_pool_t *VAR_23)
{
  log_context_t *VAR_24 = VAR_19;

  if (VAR_20 == VAR_7)
    {
      svn_log_entry_t *VAR_25;
      const char *VAR_26;

      if ((VAR_24->limit > 0) && (VAR_24->nest_level == 0)
          && (++VAR_24->count > VAR_24->limit))
        {
          return VAR_13;
        }

      VAR_25 = FUNC_12(VAR_23);




      if (FUNC_3(VAR_24->collect_paths) > 0)
        {
          VAR_25->changed_paths = VAR_24->collect_paths;
          VAR_25->changed_paths2 = VAR_24->collect_paths;
        }


      VAR_25->revprops = VAR_24->collect_revprops;

      VAR_25->has_children = FUNC_10(VAR_22,
                                                   "has-children",
                                                   VAR_5);
      VAR_25->subtractive_merge = FUNC_10(VAR_22,
                                                        "subtractive-merge",
                                                        VAR_5);

      VAR_26 = FUNC_11(VAR_22, "revision");
      if (VAR_26)
        {
          apr_int64_t VAR_27;

          FUNC_0(FUNC_9(&VAR_27, VAR_26));
          VAR_25->revision = (svn_revnum_t)VAR_27;
        }
      else
        VAR_25->revision = VAR_12;


      FUNC_0(VAR_24->receiver(VAR_24->receiver_baton,
                                VAR_25,
                                VAR_23));

      if (VAR_25->has_children)
        {
          VAR_24->nest_level++;
        }
      if (! FUNC_2(VAR_25->revision))
        {
          FUNC_1(VAR_24->nest_level);
          VAR_24->nest_level--;
        }




      VAR_24->collect_revprops = ((void*)0);
      VAR_24->collect_paths = ((void*)0);
    }
  else if (VAR_20 == VAR_17)
    {
      FUNC_13(VAR_18, VAR_7, "revision", VAR_21->data);
    }
  else if (VAR_20 == VAR_2)
    {
      if (VAR_24->want_author)
        {
          FUNC_0(FUNC_7(VAR_24->collect_revprops,
                                  VAR_14,
                                  VAR_21,
                                  FUNC_11(VAR_22, "encoding")));
        }
    }
  else if (VAR_20 == VAR_3)
    {
      if (VAR_24->want_date)
        {
          FUNC_0(FUNC_7(VAR_24->collect_revprops,
                                  VAR_15,
                                  VAR_21,
                                  FUNC_11(VAR_22, "encoding")));
        }
    }
  else if (VAR_20 == VAR_1)
    {
      if (VAR_24->want_message)
        {
          FUNC_0(FUNC_7(VAR_24->collect_revprops,
                                  VAR_16,
                                  VAR_21,
                                  FUNC_11(VAR_22, "encoding")));
        }
    }
  else if (VAR_20 == VAR_10)
    {
      apr_pool_t *VAR_28 = FUNC_4(VAR_24->collect_revprops);

      FUNC_0(FUNC_7(
                VAR_24->collect_revprops,
                FUNC_5(VAR_28,
                            FUNC_11(VAR_22, "name")),
                VAR_21,
                FUNC_11(VAR_22, "encoding")
                ));
    }
  else if (VAR_20 == VAR_6)
    {
      FUNC_13(VAR_18, VAR_7, "has-children", "yes");
    }
  else if (VAR_20 == VAR_11)
    {
      FUNC_13(VAR_18, VAR_7, "subtractive-merge", "yes");
    }
  else
    {
      char VAR_29;

      if (VAR_20 == VAR_0)
        VAR_29 = 'A';
      else if (VAR_20 == VAR_9)
        VAR_29 = 'R';
      else if (VAR_20 == VAR_4)
        VAR_29 = 'D';
      else
        {
          FUNC_1(VAR_20 == VAR_8);
          VAR_29 = 'M';
        }

      FUNC_0(FUNC_6(VAR_24->collect_paths, VAR_29, VAR_21, VAR_22));
    }

  return VAR_13;
}
