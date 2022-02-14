
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_stringbuf_t ;
typedef int svn_stream_t ;
typedef int svn_repos__dumpfile_headers_t ;
typedef int svn_filesize_t ;
typedef int svn_error_t ;
struct file_baton {char const* base_checksum; scalar_t__ dump_text; int deleted_props; int props; scalar_t__ dump_props; int copyfrom_rev; int copyfrom_path; int is_copy; int action; int repos_relpath; struct dump_edit_baton* eb; } ;
struct dump_edit_baton {int stream; int delta_file; } ;
typedef int apr_pool_t ;
typedef int apr_off_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int * VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int **,struct dump_edit_baton*,int ,int *,struct file_baton*,int ,int ,int ,int ,int *) ;
 int FUNC_3 (struct dump_edit_baton*,int *) ;
 int FUNC_4 (int *,int **,int ,int ,int *,int *) ;
 int FUNC_5 (int ,int ,int *,int *) ;
 int FUNC_6 (int *,int ,int *) ;
 int FUNC_7 (int ,int ,int *) ;
 int FUNC_8 (int ,int *,int *,scalar_t__,int ,scalar_t__,int *) ;
 int FUNC_9 (int *,int ,char const*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int ,int *,int *,int *) ;
 int * FUNC_12 (int ,int ,int *) ;
 int FUNC_13 (int ,char*) ;

__attribute__((used)) static svn_error_t *
FUNC_14(void *VAR_7,
           const char *VAR_8,
           apr_pool_t *VAR_9)
{
  struct file_baton *VAR_10 = VAR_7;
  struct dump_edit_baton *VAR_11 = VAR_10->eb;
  svn_filesize_t VAR_12 = 0;
  svn_stringbuf_t *VAR_13 = ((void*)0);
  svn_repos__dumpfile_headers_t *VAR_14;

  FUNC_0(FUNC_3(VAR_11, VAR_9));


  FUNC_0(FUNC_2(&VAR_14, VAR_11, VAR_10->repos_relpath, ((void*)0), VAR_10,
                    VAR_10->action, VAR_10->is_copy, VAR_10->copyfrom_path,
                    VAR_10->copyfrom_rev, VAR_9));




  if (VAR_10->dump_props)
    {
      FUNC_0(FUNC_4(VAR_14, &VAR_13,
                                VAR_10->props, VAR_10->deleted_props,
                                VAR_9, VAR_9));
    }


  if (VAR_10->dump_text)
    {

      FUNC_9(
        VAR_14, VAR_4, "true");

      FUNC_0(FUNC_6(&VAR_12, VAR_11->delta_file,
                                   VAR_9));

      if (VAR_10->base_checksum)

        FUNC_9(
          VAR_14, VAR_5, VAR_10->base_checksum);


      FUNC_9(
        VAR_14, VAR_3, VAR_8);
    }


  FUNC_0(FUNC_8(VAR_11->stream, VAR_14, VAR_13,
                                      VAR_10->dump_text, VAR_12,
                                      VAR_1 ,
                                      VAR_9));

  if (VAR_10->dump_props)
    {

      VAR_10->dump_props = VAR_1;
      FUNC_1(VAR_10->props);
      FUNC_1(VAR_10->deleted_props);
    }


  if (VAR_10->dump_text)
    {





      svn_stream_t *VAR_15;
      apr_off_t VAR_16 = 0;

      FUNC_0(FUNC_5(VAR_11->delta_file, VAR_0, &VAR_16, VAR_9));
      VAR_15 = FUNC_12(VAR_11->delta_file, VAR_6, VAR_9);
      FUNC_0(FUNC_11(VAR_15, VAR_11->stream, ((void*)0), ((void*)0), VAR_9));


      FUNC_0(FUNC_10(VAR_15));
      FUNC_0(FUNC_7(VAR_11->delta_file, 0, VAR_9));
    }



  FUNC_0(FUNC_13(VAR_11->stream, "\n\n"));

  return VAR_2;
}
