
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ tview_len; size_t sview_len; TYPE_2__* new_data; scalar_t__ sview_offset; TYPE_1__* ops; } ;
typedef TYPE_3__ svn_txdelta_window_t ;
typedef int svn_error_t ;
struct encoder_baton {int output; int version; scalar_t__ header_done; } ;
typedef size_t apr_uint64_t ;
typedef size_t apr_size_t ;
struct TYPE_6__ {size_t len; char const* data; } ;
struct TYPE_5__ {scalar_t__ action_code; scalar_t__ length; scalar_t__ offset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int * VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (unsigned char*,int ,int) ;
 unsigned char* FUNC_4 (unsigned char*,size_t) ;
 int FUNC_5 (int ,char const*,size_t*) ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static svn_error_t *
FUNC_6(svn_txdelta_window_t *VAR_6,
                             struct encoder_baton *VAR_7)
{
  unsigned char VAR_8[VAR_1 + 5 * VAR_3
                          + VAR_0];
  unsigned char VAR_9[VAR_0];
  unsigned char *VAR_10;
  apr_size_t VAR_11;
  apr_size_t VAR_12, VAR_13;
  apr_size_t VAR_14 = VAR_6->new_data->len;


  FUNC_1(VAR_6->ops[0].action_code == VAR_5);
  FUNC_1(VAR_6->ops[0].length == VAR_6->tview_len);
  FUNC_1(VAR_6->ops[0].offset == 0);


  if (!VAR_7->header_done)
    {
      VAR_7->header_done = VAR_4;
      FUNC_3(VAR_8, FUNC_2(VAR_7->version), VAR_1);
      VAR_10 = VAR_8 + VAR_1;
    }
  else
    {
      VAR_10 = VAR_8;
    }


  if (VAR_6->tview_len >> 6 == 0)
    {
      VAR_9[0] = (unsigned char)(VAR_6->tview_len + (0x2 << 6));
      VAR_12 = 1;
    }
  else
    {
      VAR_9[0] = (0x2 << 6);
      VAR_12 = FUNC_4(VAR_9 + 1, VAR_6->tview_len) - VAR_9;
    }



  VAR_10 = FUNC_4(VAR_10,
                                    (apr_uint64_t)VAR_6->sview_offset);
  VAR_10 = FUNC_4(VAR_10, VAR_6->sview_len);
  VAR_10 = FUNC_4(VAR_10, VAR_6->tview_len);
  VAR_10[0] = (unsigned char)VAR_12;
  VAR_10 = FUNC_4(&VAR_10[1], VAR_14);


  for (VAR_13 = 0; VAR_13 < VAR_12; ++VAR_13)
    VAR_10[VAR_13] = VAR_9[VAR_13];

  VAR_11 = VAR_10 - VAR_8 + VAR_12;


  FUNC_0(FUNC_5(VAR_7->output, (const char *)VAR_8, &VAR_11));
  if (VAR_14)
    FUNC_0(FUNC_5(VAR_7->output, VAR_6->new_data->data, &VAR_14));

  return VAR_2;
}
