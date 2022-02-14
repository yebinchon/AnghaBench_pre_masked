
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_txdelta_window_t ;
typedef int svn_error_t ;
struct handler_baton {int pool; scalar_t__ install_data; int new_text_base_sha1_checksum; int new_text_base_md5_digest; TYPE_1__* actual_source_checksum; TYPE_1__* expected_source_checksum; int source_checksum_stream; int apply_baton; int * (* apply_handler ) (int *,int ) ;struct file_baton* fb; } ;
struct file_baton {int new_text_base_md5_checksum; int new_text_base_sha1_checksum; int pool; int local_abspath; } ;
struct TYPE_4__ {scalar_t__ kind; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_2 (char*) ;
 int * FUNC_3 (int *,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ) ;
 int * FUNC_10 (int *,int *) ;
 int * FUNC_11 (int ,int *,int ,int ,int ,int ) ;
 int FUNC_12 (int ) ;
 int * FUNC_13 (int ) ;
 int FUNC_14 (scalar_t__,int ,int ,int ) ;
 int FUNC_15 (scalar_t__,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_16(svn_txdelta_window_t *VAR_2, void *VAR_3)
{
  struct handler_baton *VAR_4 = VAR_3;
  struct file_baton *VAR_5 = VAR_4->fb;
  svn_error_t *VAR_6;


  VAR_6 = VAR_4->apply_handler(VAR_2, VAR_4->apply_baton);
  if (VAR_2 != ((void*)0) && !VAR_6)
    return VAR_1;

  if (VAR_4->expected_source_checksum)
    {

      svn_error_t *VAR_7 = FUNC_13(VAR_4->source_checksum_stream);

      if (!VAR_7)
        {
          FUNC_1(VAR_4->expected_source_checksum->kind ==
                        VAR_4->actual_source_checksum->kind);

          if (!FUNC_6(VAR_4->expected_source_checksum,
                                  VAR_4->actual_source_checksum))
            {
              VAR_6 = FUNC_11(VAR_0, VAR_6,
                        FUNC_2("Checksum mismatch while updating '%s':\n"
                          "   expected:  %s\n"
                          "     actual:  %s\n"),
                        FUNC_8(VAR_5->local_abspath, VAR_4->pool),
                        FUNC_7(VAR_4->expected_source_checksum,
                                                VAR_4->pool),
                        FUNC_7(VAR_4->actual_source_checksum,
                                                VAR_4->pool));
            }
        }

      VAR_6 = FUNC_10(VAR_6, VAR_7);
    }

  if (VAR_6)
    {


      if (VAR_4->install_data)
        {
          FUNC_9(FUNC_15(VAR_4->install_data,
                                                            VAR_4->pool));
        }
    }
  else
    {

      VAR_5->new_text_base_md5_checksum =
        FUNC_4(VAR_4->new_text_base_md5_digest, VAR_5->pool);
      VAR_5->new_text_base_sha1_checksum =
        FUNC_5(VAR_4->new_text_base_sha1_checksum, VAR_5->pool);




      FUNC_0(FUNC_14(VAR_4->install_data,
                                          VAR_5->new_text_base_sha1_checksum,
                                          VAR_5->new_text_base_md5_checksum,
                                          VAR_4->pool));
    }

  FUNC_12(VAR_4->pool);

  return VAR_6;
}
