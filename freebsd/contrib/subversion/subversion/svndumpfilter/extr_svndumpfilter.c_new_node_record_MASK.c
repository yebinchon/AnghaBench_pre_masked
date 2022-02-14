
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_revnum_t ;
typedef int svn_error_t ;
struct revmap_t {int rev; } ;
struct parse_baton_t {int renumber_history; scalar_t__ do_renumber_revs; int glob; int do_exclude; int prefixes; int * dropped_nodes; } ;
struct node_baton_t {char* node_path; int headers; void* has_text_delta; void* has_prop_delta; TYPE_1__* rb; int props; int tcl; void* writing_begun; void* has_text; void* has_props; scalar_t__ do_skip; int * node_pool; } ;
typedef int cf_orig_rev ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_hash_index_t ;
struct TYPE_2__ {int writing_begun; void* has_nodes; void* had_dropped_nodes; struct parse_baton_t* pb; } ;


 void* VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int * VAR_3 ;
 char* VAR_4 ;
 char* VAR_5 ;
 char* VAR_6 ;
 char* VAR_7 ;
 char* VAR_8 ;
 char* VAR_9 ;
 char* VAR_10 ;
 char* VAR_11 ;
 char* VAR_12 ;
 char* VAR_13 ;
 int FUNC_2 (char const*) ;
 int VAR_14 ;
 void* VAR_15 ;
 int FUNC_3 (char*) ;
 int * FUNC_4 (int *,int *) ;
 struct revmap_t* FUNC_5 (int ,int *,int) ;
 int * FUNC_6 (int *) ;
 int * FUNC_7 (int *) ;
 char* FUNC_8 (int *) ;
 char* FUNC_9 (int *) ;
 void* FUNC_10 (int *,int) ;
 char* FUNC_11 (int *,char*,char*,int ) ;
 char* FUNC_12 (int *,char*) ;
 int FUNC_13 (TYPE_1__*) ;
 scalar_t__ FUNC_14 (char*,int ,int ,int ) ;
 scalar_t__ FUNC_15 (char const*,char*) ;
 int FUNC_16 (char const*) ;
 int * FUNC_17 (int ,int *,int ,...) ;
 void* FUNC_18 (int *,char*) ;
 int FUNC_19 (int *,char*,void*) ;
 int FUNC_20 (int ,char const*,char const*) ;
 int FUNC_21 (int ,char*,char*,int ) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (int *) ;

__attribute__((used)) static svn_error_t *
FUNC_24(void **VAR_16,
                apr_hash_t *VAR_17,
                void *VAR_18,
                apr_pool_t *VAR_19)
{
  struct parse_baton_t *VAR_20;
  struct node_baton_t *VAR_21;
  char *VAR_22, *VAR_23;
  apr_hash_index_t *VAR_24;
  const char *VAR_25;

  *VAR_16 = FUNC_10(VAR_19, sizeof(struct node_baton_t));
  VAR_21 = *VAR_16;
  VAR_21->rb = VAR_18;
  VAR_21->node_pool = VAR_19;
  VAR_20 = VAR_21->rb->pb;

  VAR_22 = FUNC_18(VAR_17, VAR_9);
  VAR_23 = FUNC_18(VAR_17, VAR_6);


  if (VAR_22[0] != '/')
    VAR_22 = FUNC_11(VAR_19, "/", VAR_22, VAR_14);
  if (VAR_23 && VAR_23[0] != '/')
    VAR_23 = FUNC_11(VAR_19, "/", VAR_23, VAR_14);

  VAR_21->do_skip = FUNC_14(VAR_22, VAR_20->prefixes,
                          VAR_20->do_exclude, VAR_20->glob);



  if (VAR_21->do_skip)
    {
      FUNC_19(VAR_20->dropped_nodes,
                    FUNC_12(FUNC_7(VAR_20->dropped_nodes),
                                VAR_22),
                    (void *)1);
      VAR_21->rb->had_dropped_nodes = VAR_15;
    }
  else
    {
      const char *VAR_26;
      const char *VAR_27;

      VAR_25 = FUNC_18(VAR_17, VAR_12);


      if (VAR_23 &&
          FUNC_14(VAR_23, VAR_20->prefixes, VAR_20->do_exclude, VAR_20->glob))
        {
          VAR_26 = FUNC_18(VAR_17, VAR_8);



          if (VAR_25 && (FUNC_15(VAR_26, "file") == 0))
            {
              FUNC_19(VAR_17, VAR_6,
                            ((void*)0));
              FUNC_19(VAR_17, VAR_7,
                            ((void*)0));
              VAR_23 = ((void*)0);
            }


          else
            {
              return FUNC_17
                (VAR_1, 0,
                 FUNC_3("Invalid copy source path '%s'"), VAR_23);
            }
        }

      VAR_21->has_props = VAR_0;
      VAR_21->has_text = VAR_0;
      VAR_21->has_prop_delta = VAR_0;
      VAR_21->has_text_delta = VAR_0;
      VAR_21->writing_begun = VAR_0;
      VAR_21->tcl = VAR_25 ? FUNC_16(VAR_25) : 0;
      VAR_21->headers = FUNC_22(VAR_19);
      VAR_21->props = FUNC_23(VAR_19);
      VAR_21->node_path = FUNC_12(VAR_19, VAR_22);



      VAR_21->rb->has_nodes = VAR_15;
      if (! VAR_21->rb->writing_begun)
        FUNC_0(FUNC_13(VAR_21->rb));



      FUNC_20(
        VAR_21->headers, VAR_9, VAR_22 + 1);


      VAR_26 = FUNC_18(VAR_17, VAR_8);
      if (VAR_26)
        FUNC_20(
          VAR_21->headers, VAR_8, VAR_26);


      VAR_27 = FUNC_18(VAR_17, VAR_5);
      if (VAR_27)
        FUNC_20(
          VAR_21->headers, VAR_5, VAR_27);
      else
        return FUNC_17(VAR_1, 0,
                                 FUNC_3("Missing Node-action for path '%s'"),
                                 VAR_22);

      for (VAR_24 = FUNC_4(VAR_19, VAR_17); VAR_24; VAR_24 = FUNC_6(VAR_24))
        {
          const char *VAR_28 = FUNC_8(VAR_24);
          const char *VAR_29 = FUNC_9(VAR_24);

          if ((!FUNC_15(VAR_28, VAR_11))
              && (!FUNC_15(VAR_29, "true")))
            VAR_21->has_prop_delta = VAR_15;

          if ((!FUNC_15(VAR_28, VAR_13))
              && (!FUNC_15(VAR_29, "true")))
            VAR_21->has_text_delta = VAR_15;

          if ((!FUNC_15(VAR_28, VAR_4))
              || (!FUNC_15(VAR_28, VAR_10))
              || (!FUNC_15(VAR_28, VAR_12))
              || (!FUNC_15(VAR_28, VAR_9))
              || (!FUNC_15(VAR_28, VAR_8))
              || (!FUNC_15(VAR_28, VAR_5)))
            continue;







          if (VAR_20->do_renumber_revs
              && (!FUNC_15(VAR_28, VAR_7)))
            {
              svn_revnum_t VAR_30;
              struct revmap_t *VAR_31;

              VAR_30 = FUNC_2(VAR_29);
              VAR_31 = FUNC_5(VAR_20->renumber_history,
                                          &VAR_30,
                                          sizeof(VAR_30));
              if (! (VAR_31 && FUNC_1(VAR_31->rev)))
                return FUNC_17
                  (VAR_2, ((void*)0),
                   FUNC_3("No valid copyfrom revision in filtered stream"));
              FUNC_21(
                VAR_21->headers, VAR_7,
                "%ld", VAR_31->rev);
              continue;
            }


          FUNC_20(VAR_21->headers, VAR_28, VAR_29);
        }
    }

  return VAR_3;
}
