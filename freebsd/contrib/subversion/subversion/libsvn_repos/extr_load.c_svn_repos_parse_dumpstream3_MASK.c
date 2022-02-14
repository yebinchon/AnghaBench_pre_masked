
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ len; int * data; } ;
typedef TYPE_1__ svn_stringbuf_t ;
typedef int svn_stream_t ;
struct TYPE_12__ {int (* close_revision ) (void*) ;int (* close_node ) (void*) ;int (* remove_node_props ) (void*) ;int (* uuid_record ) (char const*,void*,int *) ;int (* new_node_record ) (void**,int *,void*,int *) ;int (* new_revision_record ) (void**,int *,void*,int *) ;int (* magic_header_record ) (int,void*,int *) ;} ;
typedef TYPE_2__ svn_repos_parse_fns3_t ;
typedef scalar_t__ svn_filesize_t ;
typedef int svn_error_t ;
typedef int (* svn_cancel_func_t ) (void*) ;
typedef int svn_boolean_t ;
typedef scalar_t__ apr_size_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int *,scalar_t__) ;
 TYPE_2__* FUNC_3 (TYPE_2__ const*,int *) ;
 int FUNC_4 (int*,int *) ;
 int FUNC_5 (int *,scalar_t__,TYPE_2__ const*,void*,void*,int,scalar_t__*,int *) ;
 int FUNC_6 (int *,scalar_t__,int,TYPE_2__ const*,void*,char*,scalar_t__,int *) ;
 int FUNC_7 (int *,TYPE_1__*,int **,int *) ;
 scalar_t__ FUNC_8 (char const*,char*) ;
 int * FUNC_9 () ;
 int FUNC_10 (int,void*,int *) ;
 int FUNC_11 (void*) ;
 int FUNC_12 (void**,int *,void*,int *) ;
 int FUNC_13 (void**,int *,void*,int *) ;
 int FUNC_14 (char const*,void*,int *) ;
 int FUNC_15 (void*) ;
 int FUNC_16 (void*) ;
 int FUNC_17 (void*) ;
 scalar_t__ FUNC_18 (char const*) ;
 int FUNC_19 (int*,char const*) ;
 scalar_t__ FUNC_20 (int ) ;
 int * FUNC_21 (int ,int *,int ) ;
 char* FUNC_22 (int *,int ) ;
 int FUNC_23 (int *) ;
 int * FUNC_24 (int *) ;
 int FUNC_25 (int *) ;
 int FUNC_26 (int *,char*,scalar_t__*) ;
 int FUNC_27 (int *,TYPE_1__**,char*,int*,int *) ;
 scalar_t__ FUNC_28 (TYPE_1__*) ;

svn_error_t *
FUNC_29(svn_stream_t *VAR_15,
                            const svn_repos_parse_fns3_t *VAR_16,
                            void *VAR_17,
                            svn_boolean_t VAR_18,
                            svn_cancel_func_t VAR_19,
                            void *VAR_20,
                            apr_pool_t *VAR_21)
{
  svn_boolean_t VAR_22;
  svn_stringbuf_t *VAR_23;
  void *VAR_24 = ((void*)0);
  char *VAR_25 = FUNC_2(VAR_21, VAR_13);
  apr_size_t VAR_26 = VAR_13;
  apr_pool_t *VAR_27 = FUNC_24(VAR_21);
  apr_pool_t *VAR_28 = FUNC_24(VAR_21);
  apr_pool_t *VAR_29 = FUNC_24(VAR_21);
  int VAR_30;


  VAR_16 = FUNC_3(VAR_16, VAR_21);


  FUNC_0(FUNC_27(VAR_15, &VAR_23, "\n", &VAR_22, VAR_27));
  if (VAR_22)
    return FUNC_9();




  FUNC_0(FUNC_4(&VAR_30, VAR_23->data));
  if (VAR_16->magic_header_record != ((void*)0))
    FUNC_0(VAR_16->magic_header_record(VAR_30, VAR_17, VAR_21));
  while (1)
    {
      apr_hash_t *VAR_31;
      void *VAR_32;
      svn_boolean_t VAR_33 = VAR_0;
      svn_boolean_t VAR_34 = VAR_0;
      const char *VAR_35;
      const char *VAR_36;
      const char *VAR_37;
      const char *VAR_38;
      svn_filesize_t VAR_39;


      FUNC_23(VAR_27);


      if (VAR_19)
        FUNC_0(VAR_19(VAR_20));



      FUNC_0(FUNC_27(VAR_15, &VAR_23, "\n", &VAR_22, VAR_27));

      if (VAR_22)
        {
          if (FUNC_28(VAR_23))
            break;
          else
            return FUNC_9();
        }

      if ((VAR_23->len == 0) || (FUNC_20(VAR_23->data[0])))
        continue;





      FUNC_0(FUNC_7(VAR_15, VAR_23, &VAR_31, VAR_27));




      if (FUNC_22(VAR_31, VAR_9))
        {


          if (VAR_24 != ((void*)0))
            {
              FUNC_0(VAR_16->close_revision(VAR_24));
              FUNC_23(VAR_28);
            }

          FUNC_0(VAR_16->new_revision_record(&VAR_24,
                                                 VAR_31, VAR_17,
                                                 VAR_28));
        }

      else if (FUNC_22(VAR_31, VAR_6))
        {
          FUNC_0(VAR_16->new_node_record(&VAR_32,
                                             VAR_31,
                                             VAR_24,
                                             VAR_29));
          VAR_33 = VAR_14;
        }

      else if ((VAR_38 = FUNC_22(VAR_31, VAR_12)))
        {
          FUNC_0(VAR_16->uuid_record(VAR_38, VAR_17, VAR_21));
        }


      else if ((VAR_38 = FUNC_22(VAR_31,
                                      VAR_4)))
        {

          FUNC_0(FUNC_19(&VAR_30, VAR_38));
        }

      else
        {

          return FUNC_21(VAR_1, ((void*)0),
                                  FUNC_1("Unrecognized record type in stream"));
        }







      VAR_35 = FUNC_22(VAR_31,
                                     VAR_3);
      VAR_36 = FUNC_22(VAR_31, VAR_7);
      VAR_37 = FUNC_22(VAR_31, VAR_10);
      VAR_34 =
        VAR_30 == 1 && VAR_35 && ! VAR_36 && ! VAR_37;


      if (VAR_36 || VAR_34)
        {
          const char *VAR_40 = FUNC_22(VAR_31,
                                            VAR_8);
          svn_boolean_t VAR_41 = (VAR_40 && FUNC_8(VAR_40, "true") == 0);



          if (VAR_33 && !VAR_41)
            FUNC_0(VAR_16->remove_node_props(VAR_32));

          FUNC_0(FUNC_5
                  (VAR_15,
                   FUNC_18(VAR_36 ? VAR_36 : VAR_35),
                   VAR_16,
                   VAR_33 ? VAR_32 : VAR_24,
                   VAR_17,
                   VAR_33,
                   &VAR_39,
                   VAR_33 ? VAR_29 : VAR_28));
        }


      if (VAR_37)
        {
          const char *VAR_42 = FUNC_22(VAR_31,
                                            VAR_11);
          svn_boolean_t VAR_43 = VAR_0;
          if (! VAR_18)
            VAR_43 = (VAR_42 && FUNC_8(VAR_42, "true") == 0);

          FUNC_0(FUNC_6(VAR_15,
                                   FUNC_18(VAR_37),
                                   VAR_43,
                                   VAR_16,
                                   VAR_33 ? VAR_32 : VAR_24,
                                   VAR_25,
                                   VAR_26,
                                   VAR_33 ? VAR_29 : VAR_28));
        }
      else if (VAR_34)
        {
          const char *VAR_44;
          svn_filesize_t VAR_45 = FUNC_18(VAR_35)
                                    - VAR_39;

          if (VAR_45 ||
              ((VAR_44 = FUNC_22(VAR_31,
                                          VAR_5))
               && FUNC_8(VAR_44, "file") == 0)
             )
            FUNC_0(FUNC_6(VAR_15,
                                     VAR_45,
                                     VAR_0,
                                     VAR_16,
                                     VAR_33 ? VAR_32 : VAR_24,
                                     VAR_25,
                                     VAR_26,
                                     VAR_33 ? VAR_29 : VAR_28));
        }





      if (VAR_35 && ! VAR_34)
        {
          apr_size_t VAR_46, VAR_47;
          svn_filesize_t VAR_48 =
            FUNC_18(VAR_35) -
            (VAR_36 ? FUNC_18(VAR_36) : 0) -
            (VAR_37 ? FUNC_18(VAR_37) : 0);


          if (VAR_48 < 0)
            return FUNC_21(VAR_1, ((void*)0),
                                    FUNC_1("Sum of subblock sizes larger than "
                                      "total block content length"));


          while (VAR_48 > 0)
            {
              if (VAR_48 >= (svn_filesize_t)VAR_26)
                VAR_46 = VAR_26;
              else
                VAR_46 = (apr_size_t) VAR_48;

              VAR_47 = VAR_46;
              FUNC_0(FUNC_26(VAR_15, VAR_25, &VAR_46));
              VAR_48 -= VAR_46;
              if (VAR_46 != VAR_47)
                return FUNC_9();
            }
        }



      if (VAR_33)
        {
          FUNC_0(VAR_16->close_node(VAR_32));
          FUNC_23(VAR_29);
        }



    }


  if (VAR_24 != ((void*)0))
    FUNC_0(VAR_16->close_revision(VAR_24));

  FUNC_25(VAR_27);
  FUNC_25(VAR_28);
  FUNC_25(VAR_29);
  return VAR_2;
}
