
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int sview_len; int tview_len; int num_ops; int * new_data; TYPE_2__* ops; scalar_t__ src_ops; int sview_offset; } ;
typedef TYPE_1__ svn_txdelta_window_t ;
struct TYPE_12__ {scalar_t__ action_code; int offset; int length; } ;
typedef TYPE_2__ svn_txdelta_op_t ;
struct TYPE_13__ {int len; scalar_t__ data; } ;
typedef TYPE_3__ svn_stringbuf_t ;
typedef int svn_string_t ;
typedef int svn_filesize_t ;
typedef int svn_error_t ;
typedef int apr_size_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int * VAR_2 ;
 TYPE_2__* FUNC_2 (int *,int) ;
 int FUNC_3 (int*,unsigned char const*,unsigned char const*,int,int,int) ;
 unsigned char* FUNC_4 (TYPE_2__*,unsigned char const*,unsigned char const*) ;
 int FUNC_5 (unsigned char const*,int,TYPE_3__*,int ) ;
 int FUNC_6 (unsigned char const*,int,TYPE_3__*,int ) ;
 int * FUNC_7 (char const*,int,int *) ;
 int * FUNC_8 (TYPE_3__*) ;
 TYPE_3__* FUNC_9 (int *) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static svn_error_t *
FUNC_10(svn_txdelta_window_t *VAR_5, svn_filesize_t VAR_6,
              apr_size_t VAR_7, apr_size_t VAR_8, apr_size_t VAR_9,
              apr_size_t VAR_10, const unsigned char *VAR_11, apr_pool_t *VAR_12,
              unsigned int VAR_13)
{
  const unsigned char *VAR_14;
  int VAR_15;
  apr_size_t VAR_16;
  svn_txdelta_op_t *VAR_17, *VAR_18;
  svn_string_t *VAR_19;

  VAR_5->sview_offset = VAR_6;
  VAR_5->sview_len = VAR_7;
  VAR_5->tview_len = VAR_8;

  VAR_14 = VAR_11 + VAR_9;

  if (VAR_13 == 2)
    {
      svn_stringbuf_t *VAR_20 = FUNC_9(VAR_12);
      svn_stringbuf_t *VAR_21 = FUNC_9(VAR_12);

      FUNC_0(FUNC_5(VAR_14, VAR_10, VAR_21,
                                  VAR_1));
      FUNC_0(FUNC_5(VAR_11, VAR_14 - VAR_11, VAR_20,
                                  VAR_0));

      VAR_10 = VAR_21->len;
      VAR_11 = (unsigned char *)VAR_20->data;
      VAR_14 = (unsigned char *)VAR_20->data + VAR_20->len;

      VAR_19 = FUNC_8(VAR_21);
    }
  else if (VAR_13 == 1)
    {
      svn_stringbuf_t *VAR_22 = FUNC_9(VAR_12);
      svn_stringbuf_t *VAR_23 = FUNC_9(VAR_12);

      FUNC_0(FUNC_6(VAR_14, VAR_10, VAR_23,
                                   VAR_1));
      FUNC_0(FUNC_6(VAR_11, VAR_14 - VAR_11, VAR_22,
                                   VAR_0));

      VAR_10 = VAR_23->len;
      VAR_11 = (unsigned char *)VAR_22->data;
      VAR_14 = (unsigned char *)VAR_22->data + VAR_22->len;

      VAR_19 = FUNC_8(VAR_23);
    }
  else
    {


      VAR_19 = FUNC_7((const char*)VAR_14, VAR_10, VAR_12);
    }


  FUNC_0(FUNC_3(&VAR_15, VAR_11, VAR_14,
                                        VAR_7, VAR_8, VAR_10));


  VAR_17 = FUNC_2(VAR_12, VAR_15 * sizeof(*VAR_17));
  VAR_16 = 0;
  VAR_5->src_ops = 0;
  for (VAR_18 = VAR_17; VAR_18 < VAR_17 + VAR_15; VAR_18++)
    {
      VAR_11 = FUNC_4(VAR_18, VAR_11, VAR_14);
      if (VAR_18->action_code == VAR_4)
        ++VAR_5->src_ops;
      else if (VAR_18->action_code == VAR_3)
        {
          VAR_18->offset = VAR_16;
          VAR_16 += VAR_18->length;
        }
    }
  FUNC_1(VAR_11 == VAR_14);

  VAR_5->ops = VAR_17;
  VAR_5->num_ops = VAR_15;
  VAR_5->new_data = VAR_19;

  return VAR_2;
}
