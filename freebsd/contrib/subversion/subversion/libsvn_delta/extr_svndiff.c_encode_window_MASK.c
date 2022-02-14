
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_16__ {int num_ops; TYPE_4__* new_data; int tview_len; int sview_len; int sview_offset; TYPE_2__ const* ops; } ;
typedef TYPE_1__ svn_txdelta_window_t ;
struct TYPE_17__ {int action_code; int length; int offset; } ;
typedef TYPE_2__ const svn_txdelta_op_t ;
struct TYPE_18__ {int len; int data; } ;
typedef TYPE_3__ svn_stringbuf_t ;
struct TYPE_19__ {int len; int data; } ;
typedef TYPE_4__ svn_string_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int FUNC_1 (TYPE_3__*,int ) ;
 int FUNC_2 (int ,int ,TYPE_3__*) ;
 int FUNC_3 (int ,int ,TYPE_3__*,int) ;
 unsigned char* FUNC_4 (unsigned char*,int) ;
 TYPE_4__* FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*,char const*,int) ;
 TYPE_3__* FUNC_7 (int *) ;




__attribute__((used)) static svn_error_t *
FUNC_8(svn_stringbuf_t **VAR_2,
              svn_stringbuf_t **VAR_3,
              const svn_string_t **VAR_4,
              svn_txdelta_window_t *VAR_5,
              int VAR_6,
              int VAR_7,
              apr_pool_t *VAR_8)
{
  svn_stringbuf_t *VAR_9;
  svn_stringbuf_t *VAR_10;
  const svn_string_t *VAR_11;
  unsigned char VAR_12[VAR_0], *VAR_13;
  const svn_txdelta_op_t *VAR_14;


  VAR_9 = FUNC_7(VAR_8);
  VAR_10 = FUNC_7(VAR_8);


  for (VAR_14 = VAR_5->ops; VAR_14 < VAR_5->ops + VAR_5->num_ops; VAR_14++)
    {

      VAR_13 = VAR_12;
      switch (VAR_14->action_code)
        {
        case 129: *VAR_13 = 0; break;
        case 128: *VAR_13 = (0x1 << 6); break;
        case 130: *VAR_13 = (0x2 << 6); break;
        }
      if (VAR_14->length >> 6 == 0)
        *VAR_13++ |= (unsigned char)VAR_14->length;
      else
        VAR_13 = FUNC_4(VAR_13 + 1, VAR_14->length);
      if (VAR_14->action_code != 130)
        VAR_13 = FUNC_4(VAR_13, VAR_14->offset);
      FUNC_6(VAR_9, (const char *)VAR_12, VAR_13 - VAR_12);
    }


  FUNC_1(VAR_10, VAR_5->sview_offset);
  FUNC_1(VAR_10, VAR_5->sview_len);
  FUNC_1(VAR_10, VAR_5->tview_len);
  if (VAR_6 == 2)
    {
      svn_stringbuf_t *VAR_15;
      VAR_15 = FUNC_7(VAR_8);
      FUNC_0(FUNC_2(VAR_9->data, VAR_9->len,
                                VAR_15));
      VAR_9 = VAR_15;
    }
  else if (VAR_6 == 1)
    {
      svn_stringbuf_t *VAR_16;
      VAR_16 = FUNC_7(VAR_8);
      FUNC_0(FUNC_3(VAR_9->data, VAR_9->len,
                                 VAR_16, VAR_7));
      VAR_9 = VAR_16;
    }
  FUNC_1(VAR_10, VAR_9->len);


  if (VAR_6 == 2)
    {
      svn_stringbuf_t *VAR_17 = FUNC_7(VAR_8);

      FUNC_0(FUNC_2(VAR_5->new_data->data, VAR_5->new_data->len,
                                VAR_17));
      VAR_11 = FUNC_5(VAR_17);
    }
  else if (VAR_6 == 1)
    {
      svn_stringbuf_t *VAR_18 = FUNC_7(VAR_8);

      FUNC_0(FUNC_3(VAR_5->new_data->data, VAR_5->new_data->len,
                                 VAR_18, VAR_7));
      VAR_11 = FUNC_5(VAR_18);
    }
  else
    VAR_11 = VAR_5->new_data;

  FUNC_1(VAR_10, VAR_11->len);

  *VAR_2 = VAR_9;
  *VAR_3 = VAR_10;
  *VAR_4 = VAR_11;

  return VAR_1;
}
