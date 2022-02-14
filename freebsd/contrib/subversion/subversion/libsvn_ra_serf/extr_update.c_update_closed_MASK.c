
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


struct TYPE_20__ {char const* data; } ;
typedef TYPE_2__ svn_string_t ;
typedef int svn_revnum_t ;
typedef int svn_ra_serf__xml_estate_t ;
typedef int svn_error_t ;
struct TYPE_21__ {TYPE_5__* cur_dir; TYPE_1__* editor; TYPE_4__* cur_file; int send_all_mode; int add_props_included; int editor_baton; void* done; } ;
typedef TYPE_3__ report_context_t ;
struct TYPE_22__ {int file_baton; int * txdelta_stream; void* fetch_file; int pool; int final_sha1_checksum; int base_md5_checksum; int final_md5_checksum; int fetch_props; void* url; void* remove_props; int base_rev; } ;
typedef TYPE_4__ file_baton_t ;
struct TYPE_23__ {int dir_baton; int relpath; int fetch_props; void* url; struct TYPE_23__* parent_dir; int pool; void* remove_props; int base_rev; } ;
typedef TYPE_5__ dir_baton_t ;
typedef int apr_pool_t ;
typedef int apr_int64_t ;
typedef int apr_hash_t ;
struct TYPE_19__ {int (* change_dir_prop ) (int ,char const*,TYPE_2__ const*,int *) ;int (* change_file_prop ) (int ,char const*,TYPE_2__ const*,int *) ;int (* absent_file ) (int ,int ,int *) ;int (* absent_directory ) (int ,int ,int *) ;int (* delete_entry ) (int ,int ,int ,int *) ;int (* set_target_revision ) (int ,int ,int *) ;} ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int * VAR_3 ;
 char* VAR_4 ;
 char* VAR_5 ;
 char* VAR_6 ;

 void* VAR_7 ;



 int FUNC_3 (char*) ;
 void* FUNC_4 (int ) ;
 void* FUNC_5 (int ,char const*) ;
 int FUNC_6 (TYPE_4__*,int *) ;
 int FUNC_7 (TYPE_5__*,int *) ;
 int FUNC_8 (TYPE_4__*,int *) ;
 int FUNC_9 (TYPE_5__*,int *) ;
 int FUNC_10 (TYPE_4__*,int *) ;
 int FUNC_11 (TYPE_5__*) ;
 int FUNC_12 (char const*,char*) ;
 int FUNC_13 (int ,int ,int *) ;
 int FUNC_14 (int ,char const*,TYPE_2__ const*,int *) ;
 int FUNC_15 (int ,char const*,TYPE_2__ const*,int *) ;
 int FUNC_16 (int ,int ,int ,int *) ;
 int FUNC_17 (int ,int ,int *) ;
 int FUNC_18 (int ,int ,int *) ;
 int FUNC_19 (int ,char const*,TYPE_2__ const*,int *) ;
 int FUNC_20 (int ,char const*,TYPE_2__ const*,int *) ;
 TYPE_2__* FUNC_21 (TYPE_2__ const*,int *) ;
 int VAR_8 ;
 int FUNC_22 (int *,int ,char const*,int ) ;
 int VAR_9 ;
 int FUNC_23 (int *,char const*) ;
 int * FUNC_24 (int ,int *,int ) ;
 int * FUNC_25 (int ,int *,int ,char const*) ;
 char* FUNC_26 (int *,char*) ;
 int FUNC_27 (void*,void*,char*) ;
 int FUNC_28 (int ,char const*,int *) ;
 int FUNC_29 (int *) ;

__attribute__((used)) static svn_error_t *
FUNC_30(svn_ra_serf__xml_estate_t *VAR_10,
              void *VAR_11,
              int VAR_12,
              const svn_string_t *VAR_13,
              apr_hash_t *VAR_14,
              apr_pool_t *VAR_15)
{
  report_context_t *VAR_16 = VAR_11;

  switch (VAR_12)
    {
      case 129:
        VAR_16->done = VAR_7;
        break;
      case 131:
        {
          const char *VAR_17 = FUNC_26(VAR_14, "rev");
          apr_int64_t VAR_18;

          FUNC_0(FUNC_23(&VAR_18, VAR_17));

          FUNC_0(VAR_16->editor->set_target_revision(VAR_16->editor_baton,
                                                   (svn_revnum_t)VAR_18,
                                                   VAR_15));
        }
        break;

      case 141:
        if (VAR_16->cur_file)
          VAR_16->cur_file->url = FUNC_5(VAR_16->cur_file->pool, VAR_13->data);
        else
          VAR_16->cur_dir->url = FUNC_5(VAR_16->cur_dir->pool, VAR_13->data);
        break;

      case 132:
      case 133:
        {
          const char *VAR_19 = FUNC_26(VAR_14, "name");
          const char *VAR_20;
          const svn_string_t *VAR_21;

          if (VAR_12 == 133)
            VAR_21 = ((void*)0);
          else if ((VAR_20 = FUNC_26(VAR_14, "encoding")))
            {
              if (FUNC_12(VAR_20, "base64") != 0)
                return FUNC_25(VAR_1, ((void*)0),
                                         FUNC_3("Got unrecognized encoding '%s'"),
                                         VAR_20);

              VAR_21 = FUNC_21(VAR_13, VAR_15);
            }
          else
            VAR_21 = VAR_13;

          if (VAR_16->cur_file)
            {
              file_baton_t *VAR_22 = VAR_16->cur_file;

              if (VAR_21
                  || VAR_16->add_props_included
                  || FUNC_2(VAR_22->base_rev))
                {
                  FUNC_0(FUNC_8(VAR_22, VAR_15));

                  FUNC_0(VAR_16->editor->change_file_prop(VAR_22->file_baton,
                                                        VAR_19,
                                                        VAR_21,
                                                        VAR_15));
                }
              else
                {
                  if (!VAR_22->remove_props)
                    VAR_22->remove_props = FUNC_4(VAR_22->pool);

                  FUNC_27(VAR_22->remove_props,
                                FUNC_5(VAR_22->pool, VAR_19),
                                "");
                }
            }
          else
            {
              dir_baton_t *VAR_23 = VAR_16->cur_dir;

              if (VAR_21
                  || VAR_16->add_props_included
                  || FUNC_2(VAR_23->base_rev))
                {
                  FUNC_0(FUNC_7(VAR_23, VAR_15));

                  FUNC_0(VAR_16->editor->change_dir_prop(VAR_23->dir_baton,
                                                       VAR_19,
                                                       VAR_21,
                                                       VAR_15));
                }
              else
                {
                  if (!VAR_23->remove_props)
                    VAR_23->remove_props = FUNC_4(VAR_23->pool);

                  FUNC_27(VAR_23->remove_props,
                                FUNC_5(VAR_23->pool, VAR_19),
                                "");
                }
            }
        }
        break;

      case 135:
      case 143:
        {
          dir_baton_t *VAR_24 = VAR_16->cur_dir;
          VAR_16->cur_dir = VAR_16->cur_dir->parent_dir;

          if (VAR_24->fetch_props && ! VAR_24->url)
            {
              return FUNC_24(VAR_0, ((void*)0),
                                      FUNC_3("The REPORT response did not "
                                        "include the requested checked-in "
                                        "value"));
            }

          if (!VAR_24->fetch_props)
            {
              FUNC_0(FUNC_11(VAR_24));
              break;
            }
          else
            {


              FUNC_0(FUNC_9(VAR_24, VAR_15));
            }
        }
        break;

      case 134:
      case 142:
        {
          file_baton_t *VAR_25 = VAR_16->cur_file;

          VAR_16->cur_file = ((void*)0);


          if ((VAR_25->fetch_file || VAR_25->fetch_props) && ! VAR_25->url)
            {
              return FUNC_24(VAR_0, ((void*)0),
                                      FUNC_3("The REPORT response did not "
                                        "include the requested checked-in "
                                        "value"));
            }



          if (! VAR_25->fetch_file && ! VAR_25->fetch_props)
            {
              FUNC_0(FUNC_6(VAR_25, VAR_15));
              break;
            }
          else
            {



              FUNC_0(FUNC_10(VAR_25, VAR_15));
            }
        }
        break;

      case 136:
        FUNC_0(FUNC_22(&VAR_16->cur_file->final_md5_checksum,
                                       VAR_8,
                                       VAR_13->data,
                                       VAR_16->cur_file->pool));
        break;

      case 137:
        {
          file_baton_t *VAR_26 = VAR_16->cur_file;
          const char *VAR_27 = FUNC_26(VAR_14, "base-checksum");
          const char *VAR_28 = FUNC_26(VAR_14, "sha1-checksum");

          if (VAR_27)
            FUNC_0(FUNC_22(&VAR_26->base_md5_checksum,
                                           VAR_8, VAR_27,
                                           VAR_26->pool));


          if (VAR_28 && !VAR_26->final_sha1_checksum)
            FUNC_0(FUNC_22(&VAR_26->final_sha1_checksum,
                                           VAR_9,
                                           VAR_28,
                                           VAR_26->pool));



          if (! VAR_16->send_all_mode)
            VAR_26->fetch_file = VAR_7;
        }
        break;

      case 138:
        {
          const char *VAR_29 = FUNC_26(VAR_14, "name");
          const char *VAR_30;
          apr_int64_t VAR_31;

          FUNC_0(FUNC_7(VAR_16->cur_dir, VAR_15));

          VAR_30 = FUNC_26(VAR_14, "rev");

          if (VAR_30)
            FUNC_0(FUNC_23(&VAR_31, VAR_30));
          else
            VAR_31 = VAR_2;

          FUNC_0(VAR_16->editor->delete_entry(
                                    FUNC_28(VAR_16->cur_dir->relpath,
                                                     VAR_29,
                                                     VAR_15),
                                    (svn_revnum_t)VAR_31,
                                    VAR_16->cur_dir->dir_baton,
                                    VAR_15));
        }
        break;

      case 145:
        {
          const char *VAR_32 = FUNC_26(VAR_14, "name");

          FUNC_0(FUNC_7(VAR_16->cur_dir, VAR_15));

          FUNC_0(VAR_16->editor->absent_directory(
                                    FUNC_28(VAR_16->cur_dir->relpath,
                                                     VAR_32, VAR_15),
                                    VAR_16->cur_dir->dir_baton,
                                    VAR_15));
        }
        break;
     case 144:
        {
          const char *VAR_33 = FUNC_26(VAR_14, "name");

          FUNC_0(FUNC_7(VAR_16->cur_dir, VAR_15));

          FUNC_0(VAR_16->editor->absent_file(
                                    FUNC_28(VAR_16->cur_dir->relpath,
                                                     VAR_33, VAR_15),
                                    VAR_16->cur_dir->dir_baton,
                                    VAR_15));
        }
        break;

      case 130:
        {
          file_baton_t *VAR_34 = VAR_16->cur_file;

          if (VAR_34->txdelta_stream)
            {
              FUNC_0(FUNC_29(VAR_34->txdelta_stream));
              VAR_34->txdelta_stream = ((void*)0);
            }
        }
        break;

      case 128:
      case 140:
      case 139:
        {
          const char *VAR_35;

          if (VAR_16->cur_file)
            FUNC_0(FUNC_8(VAR_16->cur_file, VAR_15));
          else if (VAR_16->cur_dir)
            FUNC_0(FUNC_7(VAR_16->cur_dir, VAR_15));
          else
            break;

          switch (VAR_12)
            {
              case 128:
                VAR_35 = VAR_5;
                break;
              case 140:
                VAR_35 = VAR_4;
                break;
              case 139:
                VAR_35 = VAR_6;
                break;
              default:
                FUNC_1();
            }

          if (VAR_16->cur_file)
            FUNC_0(VAR_16->editor->change_file_prop(VAR_16->cur_file->file_baton,
                                                  VAR_35, VAR_13,
                                                  VAR_15));
          else
            FUNC_0(VAR_16->editor->change_dir_prop(VAR_16->cur_dir->dir_baton,
                                                  VAR_35, VAR_13,
                                                  VAR_15));
        }
        break;
    }

  return VAR_3;
}
