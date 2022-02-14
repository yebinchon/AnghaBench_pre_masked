
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int svn_stringbuf_t ;
struct TYPE_12__ {int * data; } ;
typedef TYPE_1__ svn_string_t ;
typedef int svn_stream_t ;
typedef int svn_revnum_t ;
typedef int svn_repos__dumpfile_headers_t ;
typedef scalar_t__ svn_node_kind_t ;
typedef int svn_fs_root_t ;
typedef int svn_filesize_t ;
struct TYPE_13__ {int apr_err; } ;
typedef TYPE_2__ svn_error_t ;
typedef int svn_checksum_t ;
typedef void* svn_boolean_t ;
struct edit_baton {int current_rev; int oldest_dumped_rev; int stream; int * fs_root; scalar_t__ use_deltas; int notify_baton; scalar_t__ notify_func; scalar_t__ check_normalization; scalar_t__ verify; int found_old_mergeinfo; void** found_old_reference; int path_tracker; } ;
typedef int errbuf ;
typedef enum svn_node_action { ____Placeholder_svn_node_action } svn_node_action ;
typedef int apr_size_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_file_t ;


 scalar_t__ FUNC_0 (char const*,int) ;
 void* VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 void* VAR_15 ;
 int FUNC_3 (char*) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,char const*,int) ;
 int FUNC_6 (char const*,int *,int *,scalar_t__,int ,int *) ;
 int FUNC_7 (int ,char const*,int *) ;
 int FUNC_8 (struct edit_baton*,char const*,int,scalar_t__,int *) ;
 int FUNC_9 (struct edit_baton*,char const*,int,int *) ;
 int FUNC_10 (int *,scalar_t__,int ,int ,int ,int,...) ;
 int FUNC_11 (int **,int *,int *,char const*,int *,char const*,int *) ;
 int VAR_16 ;
 int VAR_17 ;
 char* FUNC_12 (int *,int *) ;
 int FUNC_13 (TYPE_2__*,char*,int) ;
 int FUNC_14 (TYPE_2__*) ;
 TYPE_2__* FUNC_15 (TYPE_2__*) ;
 TYPE_2__* FUNC_16 (char const*,int *) ;
 int FUNC_17 (void**,int *,char const*,int *,char const*,int *) ;
 int FUNC_18 (int **,int ,int *,char const*,void*,int *) ;
 int FUNC_19 (int **,int *,char const*,int *) ;
 int FUNC_20 (int *,int *,char const*,int *) ;
 int FUNC_21 (int **,int *,char const*,int *) ;
 int FUNC_22 (void**,int *,char const*,int *,char const*,int *) ;
 int FUNC_23 (int **,int ,int,int *) ;
 int FUNC_24 (int *) ;
 TYPE_1__* FUNC_25 (int *,int ) ;
 int FUNC_26 (int *,int *,int *,char*,int *) ;




 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 char* FUNC_27 (char const*,int *) ;
 int FUNC_28 (int ,int *,int *) ;
 int FUNC_29 (int ,int *,int *,void*,int ,void*,int *) ;
 int FUNC_30 (int *,int ,char const*) ;
 int FUNC_31 (int *,int ,char*,int) ;
 int * FUNC_32 (int *) ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_33 (int *) ;
 int FUNC_34 (int *,int ,int *,int *,int *) ;
 int FUNC_35 (int ,int *) ;
 int * FUNC_36 (int *,void*,int *) ;
 int * FUNC_37 (int *,int *) ;
 TYPE_2__* FUNC_38 (int ,char*,int*) ;
 int * FUNC_39 (int ,int *) ;
 int FUNC_40 (int ,char const*) ;
 int FUNC_41 (int ,char const*,char const*,int) ;
 int FUNC_42 (int ,char const*) ;
 int FUNC_43 (int ,char const*) ;
 TYPE_2__* FUNC_44 (int ,int *,int,scalar_t__,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_45(struct edit_baton *VAR_23,
          const char *VAR_24,
          svn_node_kind_t VAR_25,
          enum svn_node_action VAR_26,
          svn_boolean_t VAR_27,
          const char *VAR_28,
          svn_revnum_t VAR_29,
          apr_pool_t *VAR_30)
{
  svn_stringbuf_t *VAR_31;
  apr_size_t VAR_32;
  svn_boolean_t VAR_33 = VAR_0, VAR_34 = VAR_0;
  const char *VAR_35 = VAR_24;
  svn_revnum_t VAR_36 = VAR_23->current_rev - 1;
  svn_fs_root_t *VAR_37 = ((void*)0);
  apr_file_t *VAR_38 = ((void*)0);
  svn_repos__dumpfile_headers_t *VAR_39
    = FUNC_32(VAR_30);
  svn_filesize_t VAR_40;


  if (VAR_23->verify || VAR_23->notify_func)
    {
      svn_error_t *VAR_41 = FUNC_16(VAR_24, VAR_30);

      if (VAR_41)
        {
          if (VAR_23->notify_func)
            {
              char VAR_42[512];

              FUNC_10(VAR_30, VAR_23->notify_func, VAR_23->notify_baton,
                             VAR_22,
                             FUNC_3("E%06d: While validating fspath '%s': %s"),
                             VAR_41->apr_err, VAR_24,
                             FUNC_13(VAR_41, VAR_42, sizeof(VAR_42)));
            }


          if (VAR_23->verify)
            return FUNC_15(VAR_41);
          else
            FUNC_14(VAR_41);
        }
    }


  FUNC_30(
    VAR_39, VAR_6, VAR_24);
  if (VAR_25 == VAR_19)
    FUNC_30(
      VAR_39, VAR_5, "file");
  else if (VAR_25 == VAR_18)
    FUNC_30(
      VAR_39, VAR_5, "dir");


  if (VAR_28)
    VAR_28 = FUNC_27(VAR_28, VAR_30);


  if (FUNC_0(VAR_28, VAR_29))
    {
      VAR_35 = VAR_28;
      VAR_36 = VAR_29;
    }

  switch (VAR_26)
    {
    case 130:
      if (VAR_23->path_tracker)
        FUNC_2(FUNC_8(VAR_23, VAR_24, VAR_23->current_rev, VAR_25, VAR_30),
                  FUNC_5(VAR_30, FUNC_3("Change invalid path '%s' in r%ld"),
                               VAR_24, VAR_23->current_rev));

      FUNC_30(
        VAR_39, VAR_2, "change");


      FUNC_1(FUNC_23(&VAR_37,
                                   FUNC_24(VAR_23->fs_root),
                                   VAR_36, VAR_30));

      FUNC_1(FUNC_22(&VAR_34,
                                   VAR_37, VAR_35,
                                   VAR_23->fs_root, VAR_24, VAR_30));
      if (VAR_25 == VAR_19)
        FUNC_1(FUNC_17(&VAR_33,
                                        VAR_37, VAR_35,
                                        VAR_23->fs_root, VAR_24, VAR_30));
      break;

    case 129:
      if (VAR_23->path_tracker)
        {
          FUNC_2(FUNC_8(VAR_23, VAR_24, VAR_23->current_rev, VAR_25, VAR_30),
                    FUNC_5(VAR_30, FUNC_3("Deleting invalid path '%s' in r%ld"),
                                 VAR_24, VAR_23->current_rev));
          FUNC_42(VAR_23->path_tracker, VAR_24);
        }

      FUNC_30(
        VAR_39, VAR_2, "delete");



      VAR_33 = VAR_0;
      VAR_34 = VAR_0;
      break;

    case 128:
      if (VAR_23->path_tracker)
        FUNC_2(FUNC_8(VAR_23, VAR_24, VAR_23->current_rev,
                                  VAR_20, VAR_30),
                  FUNC_5(VAR_30,
                               FUNC_3("Replacing non-existent path '%s' in r%ld"),
                               VAR_24, VAR_23->current_rev));

      if (! VAR_27)
        {
          if (VAR_23->path_tracker)
            FUNC_43(VAR_23->path_tracker, VAR_24);


          FUNC_30(
            VAR_39, VAR_2, "replace");


          if (VAR_25 == VAR_19)
            VAR_33 = VAR_15;
          VAR_34 = VAR_15;
          break;
        }
      else
        {



          if (VAR_23->path_tracker)
            {
              FUNC_42(VAR_23->path_tracker, VAR_24);
            }



          FUNC_1(FUNC_7(VAR_23->stream, VAR_24, VAR_30));



        }


    case 131:
      if (VAR_23->path_tracker)
        FUNC_2(FUNC_9(VAR_23, VAR_24, VAR_23->current_rev, VAR_30),
                  FUNC_5(VAR_30,
                               FUNC_3("Adding already existing path '%s' in r%ld"),
                               VAR_24, VAR_23->current_rev));

      FUNC_30(
        VAR_39, VAR_2, "add");

      if (! VAR_27)
        {
          if (VAR_23->path_tracker)
            FUNC_40(VAR_23->path_tracker, VAR_24);


          if (VAR_25 == VAR_19)
            VAR_33 = VAR_15;
          VAR_34 = VAR_15;
        }
      else
        {
          if (VAR_23->path_tracker)
            {
              FUNC_2(FUNC_8(VAR_23, VAR_35, VAR_36,
                                        VAR_25, VAR_30),
                        FUNC_5(VAR_30,
                                     FUNC_3("Copying from invalid path to "
                                       "'%s' in r%ld"),
                                     VAR_24, VAR_23->current_rev));
              FUNC_41(VAR_23->path_tracker, VAR_24, VAR_35,
                                VAR_36);
            }

          if (!VAR_23->verify && VAR_29 < VAR_23->oldest_dumped_rev
              && VAR_23->notify_func)
            {
              FUNC_10(VAR_30, VAR_23->notify_func, VAR_23->notify_baton,
                             VAR_21,
                             FUNC_3("Referencing data in revision %ld,"
                               " which is older than the oldest"
                               " dumped revision (r%ld).  Loading this dump"
                               " into an empty repository"
                               " will fail."),
                             VAR_29, VAR_23->oldest_dumped_rev);
              if (VAR_23->found_old_reference)
                *VAR_23->found_old_reference = VAR_15;
            }

          FUNC_31(
            VAR_39, VAR_4, "%ld", VAR_29);
          FUNC_30(
            VAR_39, VAR_3, VAR_28);

          FUNC_1(FUNC_23(&VAR_37,
                                       FUNC_24(VAR_23->fs_root),
                                       VAR_36, VAR_30));



          FUNC_1(FUNC_22(&VAR_34,
                                       VAR_37, VAR_35,
                                       VAR_23->fs_root, VAR_24, VAR_30));
          if (VAR_25 == VAR_19)
            {
              svn_checksum_t *VAR_43;
              const char *VAR_44;
              FUNC_1(FUNC_17(&VAR_33,
                                              VAR_37, VAR_35,
                                              VAR_23->fs_root, VAR_24, VAR_30));

              FUNC_1(FUNC_18(&VAR_43, VAR_16,
                                           VAR_37, VAR_35,
                                           VAR_0, VAR_30));
              VAR_44 = FUNC_12(VAR_43, VAR_30);
              if (VAR_44)
                FUNC_30(
                  VAR_39, VAR_10, VAR_44);

              FUNC_1(FUNC_18(&VAR_43, VAR_17,
                                           VAR_37, VAR_35,
                                           VAR_0, VAR_30));
              VAR_44 = FUNC_12(VAR_43, VAR_30);
              if (VAR_44)
                FUNC_30(
                  VAR_39, VAR_11, VAR_44);
            }
        }
      break;
    }

  if ((! VAR_33) && (! VAR_34))
    {





      FUNC_1(FUNC_28(VAR_23->stream, VAR_39, VAR_30));
      VAR_32 = 1;
      return FUNC_38(VAR_23->stream, "\n", &VAR_32);
    }






  if (VAR_34)
    {
      apr_hash_t *VAR_45, *VAR_46 = ((void*)0);
      svn_stream_t *VAR_47;

      FUNC_1(FUNC_21(&VAR_45, VAR_23->fs_root, VAR_24, VAR_30));




      if (!VAR_23->verify && VAR_23->notify_func && VAR_23->oldest_dumped_rev > 1)
        {
          svn_string_t *VAR_48 = FUNC_25(VAR_45,
                                                      VAR_1);
          if (VAR_48)
            {


              FUNC_14(FUNC_44(
                                VAR_23->found_old_mergeinfo,
                                VAR_48->data, VAR_23->oldest_dumped_rev,
                                VAR_23->notify_func, VAR_23->notify_baton,
                                VAR_30));
            }
        }




      if (VAR_23->verify && VAR_23->check_normalization && VAR_23->notify_func)
        {



          svn_string_t *VAR_49 = FUNC_25(VAR_45,
                                                      VAR_1);
          if (VAR_49)
            {
              svn_string_t *VAR_50 = ((void*)0);
              if (VAR_37)
                {
                  FUNC_1(FUNC_21(&VAR_46,
                                               VAR_37, VAR_35,
                                               VAR_30));
                  VAR_50 = FUNC_25(VAR_46, VAR_1);
                }
              FUNC_1(FUNC_6(
                          VAR_24, VAR_49->data,
                          (VAR_50 ? VAR_50->data : ((void*)0)),
                          VAR_23->notify_func, VAR_23->notify_baton, VAR_30));
            }
        }

      if (VAR_23->use_deltas && VAR_37)
        {


          if (!VAR_46)
            FUNC_1(FUNC_21(&VAR_46, VAR_37, VAR_35,
                                         VAR_30));
          FUNC_30(
            VAR_39, VAR_7, "true");
        }
      else
        VAR_46 = FUNC_4(VAR_30);
      VAR_31 = FUNC_39(0, VAR_30);
      VAR_47 = FUNC_37(VAR_31, VAR_30);
      FUNC_1(FUNC_26(VAR_45, VAR_46, VAR_47,
                                         "PROPS-END", VAR_30));
      FUNC_1(FUNC_33(VAR_47));
    }



  if (VAR_33 && (VAR_25 == VAR_19))
    {
      svn_checksum_t *VAR_51;
      const char *VAR_52;

      if (VAR_23->use_deltas)
        {



          FUNC_1(FUNC_11(&VAR_38, &VAR_40, VAR_37,
                              VAR_35, VAR_23->fs_root, VAR_24, VAR_30));
          FUNC_30(
            VAR_39, VAR_12, "true");

          if (VAR_37)
            {
              FUNC_1(FUNC_18(&VAR_51, VAR_16,
                                           VAR_37, VAR_35,
                                           VAR_0, VAR_30));
              VAR_52 = FUNC_12(VAR_51, VAR_30);
              if (VAR_52)
                FUNC_30(
                  VAR_39, VAR_13, VAR_52);

              FUNC_1(FUNC_18(&VAR_51, VAR_17,
                                           VAR_37, VAR_35,
                                           VAR_0, VAR_30));
              VAR_52 = FUNC_12(VAR_51, VAR_30);
              if (VAR_52)
                FUNC_30(
                  VAR_39, VAR_14, VAR_52);
            }
        }
      else
        {

          FUNC_1(FUNC_20(&VAR_40, VAR_23->fs_root, VAR_24, VAR_30));
        }

      FUNC_1(FUNC_18(&VAR_51, VAR_16,
                                   VAR_23->fs_root, VAR_24, VAR_0, VAR_30));
      VAR_52 = FUNC_12(VAR_51, VAR_30);
      if (VAR_52)
        FUNC_30(
          VAR_39, VAR_8, VAR_52);

      FUNC_1(FUNC_18(&VAR_51, VAR_17,
                                   VAR_23->fs_root, VAR_24, VAR_0, VAR_30));
      VAR_52 = FUNC_12(VAR_51, VAR_30);
      if (VAR_52)
        FUNC_30(
          VAR_39, VAR_9, VAR_52);
    }




  FUNC_1(FUNC_29(VAR_23->stream, VAR_39,
                                      VAR_34 ? VAR_31 : ((void*)0),
                                      VAR_33,
                                      VAR_33 ? VAR_40 : 0,
                                      VAR_15 ,
                                      VAR_30));


  if (VAR_33 && (VAR_25 == VAR_19))
    {
      svn_stream_t *VAR_53;

      if (VAR_38)
        {


          VAR_53 = FUNC_36(VAR_38, VAR_0, VAR_30);
        }
      else
        FUNC_1(FUNC_19(&VAR_53, VAR_23->fs_root, VAR_24, VAR_30));

      FUNC_1(FUNC_34(VAR_53, FUNC_35(VAR_23->stream, VAR_30),
                               ((void*)0), ((void*)0), VAR_30));
    }

  VAR_32 = 2;
  return FUNC_38(VAR_23->stream, "\n\n", &VAR_32);
}
