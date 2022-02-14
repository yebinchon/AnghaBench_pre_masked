
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_revnum_t ;
typedef int svn_repos__dumpfile_headers_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
struct file_baton {void* dump_props; } ;
struct dump_edit_baton {int stream; scalar_t__ update_anchor_relpath; } ;
struct dir_baton {void* dump_props; } ;
typedef enum svn_node_action { ____Placeholder_svn_node_action } svn_node_action ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char const*,int *) ;




 int FUNC_3 (char const*) ;
 char* FUNC_4 (scalar_t__,char const*,int *) ;
 int FUNC_5 (int *,int ,char const*) ;
 int FUNC_6 (int *,int ,char*,int ) ;
 int * FUNC_7 (int *) ;

__attribute__((used)) static svn_error_t *
FUNC_8(svn_repos__dumpfile_headers_t **VAR_7,
          struct dump_edit_baton *VAR_8,
          const char *VAR_9,
          struct dir_baton *VAR_10,
          struct file_baton *VAR_11,
          enum svn_node_action VAR_12,
          svn_boolean_t VAR_13,
          const char *VAR_14,
          svn_revnum_t VAR_15,
          apr_pool_t *VAR_16)
{
  const char *VAR_17 = VAR_9;
  svn_repos__dumpfile_headers_t *VAR_18
    = FUNC_7(VAR_16);

  FUNC_1(FUNC_3(VAR_9));
  FUNC_1(!VAR_14 || FUNC_3(VAR_14));
  FUNC_1(! (VAR_10 && VAR_11));


  if (VAR_8->update_anchor_relpath)
    VAR_17 = FUNC_4(VAR_8->update_anchor_relpath,
                                    VAR_17, VAR_16);


  FUNC_5(
    VAR_18, VAR_5, VAR_17);


  if (VAR_11)
    FUNC_5(
      VAR_18, VAR_4, "file");
  else if (VAR_10)
    FUNC_5(
      VAR_18, VAR_4, "dir");



  switch (VAR_12)
    {
    case 130:





      FUNC_5(
        VAR_18, VAR_1, "change");
      break;

    case 129:

      FUNC_5(
        VAR_18, VAR_1, "delete");
      break;

    case 128:
      if (! VAR_13)
        {

          FUNC_5(
            VAR_18, VAR_1, "replace");



          if (VAR_11)
            VAR_11->dump_props = VAR_6;
          else if (VAR_10)
            VAR_10->dump_props = VAR_6;
          break;
        }
      else
        {







          FUNC_0(FUNC_2(VAR_8->stream, VAR_9, VAR_16));



        }


    case 131:

      FUNC_5(
        VAR_18, VAR_1, "add");

      if (VAR_13)
        {

          FUNC_6(
            VAR_18, VAR_3, "%ld", VAR_15);
          FUNC_5(
            VAR_18, VAR_2, VAR_14);
        }
      else
        {
          if (VAR_11)
            VAR_11->dump_props = VAR_6;
          else if (VAR_10)
            VAR_10->dump_props = VAR_6;
        }

      break;
    }




  *VAR_7 = VAR_18;
  return VAR_0;
}
