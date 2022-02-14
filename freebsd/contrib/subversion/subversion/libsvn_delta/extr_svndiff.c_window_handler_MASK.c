
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int num_ops; int src_ops; } ;
typedef TYPE_1__ svn_txdelta_window_t ;
struct TYPE_11__ {scalar_t__ len; int data; } ;
typedef TYPE_2__ svn_stringbuf_t ;
struct TYPE_12__ {scalar_t__ len; int data; } ;
typedef TYPE_3__ svn_string_t ;
typedef int svn_error_t ;
struct encoder_baton {int output; int scratch_pool; int compression_level; int version; scalar_t__ header_done; } ;
typedef scalar_t__ apr_size_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (TYPE_2__**,TYPE_2__**,TYPE_3__ const**,TYPE_1__*,int ,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,struct encoder_baton*) ;
 int * FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ,scalar_t__*) ;

__attribute__((used)) static svn_error_t *
FUNC_9(svn_txdelta_window_t *VAR_3, void *VAR_4)
{
  struct encoder_baton *VAR_5 = VAR_4;
  apr_size_t VAR_6;
  svn_stringbuf_t *VAR_7;
  svn_stringbuf_t *VAR_8;
  const svn_string_t *VAR_9;


  if (VAR_3 && !VAR_3->src_ops && VAR_3->num_ops == 1 && !VAR_5->version)
    return FUNC_4(FUNC_3(VAR_3, VAR_5));


  if (!VAR_5->header_done)
    {
      VAR_6 = VAR_0;
      FUNC_0(FUNC_8(VAR_5->output, FUNC_2(VAR_5->version),
                               &VAR_6));
      VAR_5->header_done = VAR_2;
    }

  if (VAR_3 == ((void*)0))
    {

      FUNC_0(FUNC_7(VAR_5->output));

      FUNC_6(VAR_5->scratch_pool);

      return VAR_1;
    }

  FUNC_5(VAR_5->scratch_pool);

  FUNC_0(FUNC_1(&VAR_7, &VAR_8, &VAR_9, VAR_3,
                        VAR_5->version, VAR_5->compression_level,
                        VAR_5->scratch_pool));


  VAR_6 = VAR_8->len;
  FUNC_0(FUNC_8(VAR_5->output, VAR_8->data, &VAR_6));
  if (VAR_7->len > 0)
    {
      VAR_6 = VAR_7->len;
      FUNC_0(FUNC_8(VAR_5->output, VAR_7->data, &VAR_6));
    }
  if (VAR_9->len > 0)
    {
      VAR_6 = VAR_9->len;
      FUNC_0(FUNC_8(VAR_5->output, VAR_9->data, &VAR_6));
    }

  return VAR_1;
}
