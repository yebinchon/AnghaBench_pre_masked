
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;


struct TYPE_23__ {int len; char* data; } ;
typedef TYPE_1__ svn_stringbuf_t ;
typedef int svn_stream_t ;
struct TYPE_24__ {scalar_t__ private_data; } ;
typedef TYPE_2__ svn_packed__int_stream_t ;
struct TYPE_25__ {TYPE_4__* first_byte_stream; TYPE_2__* first_int_stream; } ;
typedef TYPE_3__ svn_packed__data_root_t ;
struct TYPE_26__ {struct TYPE_26__* next; } ;
typedef TYPE_4__ svn_packed__byte_stream_t ;
typedef int svn_error_t ;
struct TYPE_27__ {TYPE_2__* next; } ;
typedef TYPE_5__ packed_int_private_t ;
typedef scalar_t__ apr_uint64_t ;
typedef int apr_size_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_1__*,int ,TYPE_2__*) ;
 int FUNC_5 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int *,int ,TYPE_1__*,TYPE_1__*) ;
 int FUNC_8 (int *,scalar_t__*) ;
 int FUNC_9 (TYPE_3__*,int ,int ) ;
 TYPE_3__* FUNC_10 (int *) ;
 int FUNC_11 (int *,char*,int*) ;
 TYPE_1__* FUNC_12 (int,int *) ;
 int FUNC_13 (TYPE_4__*,TYPE_1__*,int*) ;
 int FUNC_14 (TYPE_2__*,TYPE_1__*,int*) ;

svn_error_t *
FUNC_15(svn_packed__data_root_t **VAR_2,
                      svn_stream_t *VAR_3,
                      apr_pool_t *VAR_4,
                      apr_pool_t *VAR_5)
{
  apr_uint64_t VAR_6;
  apr_uint64_t VAR_7;

  svn_packed__int_stream_t *VAR_8;
  svn_packed__byte_stream_t *VAR_9;
  svn_packed__data_root_t *VAR_10 = FUNC_10(VAR_4);

  svn_stringbuf_t *VAR_11
    = FUNC_12(1024, VAR_5);
  svn_stringbuf_t *VAR_12
    = FUNC_12(1024, VAR_5);



  apr_uint64_t VAR_13;
  svn_stringbuf_t *VAR_14;

  FUNC_0(FUNC_8(VAR_3, &VAR_13));
  VAR_14
    = FUNC_12((apr_size_t)VAR_13, VAR_5);
  VAR_14->len = (apr_size_t)VAR_13;

  FUNC_0(FUNC_11(VAR_3, VAR_14->data, &VAR_14->len));
  VAR_14->data[VAR_14->len] = '\0';



  VAR_7 = FUNC_6(VAR_14);
  for (VAR_6 = 0; VAR_6 < VAR_7; ++VAR_6)
    FUNC_5(VAR_14,
                              FUNC_9(VAR_10, VAR_0,
                                                                 VAR_0));

  VAR_7 = FUNC_6(VAR_14);
  for (VAR_6 = 0; VAR_6 < VAR_7; ++VAR_6)
    FUNC_4(VAR_14,
                               FUNC_1(VAR_10),
                               VAR_10->first_int_stream);



  for (VAR_8 = VAR_10->first_int_stream;
       VAR_8;
       VAR_8 = ((packed_int_private_t*)VAR_8->private_data)->next)
    {
      apr_size_t VAR_15 = 0;
      FUNC_0(FUNC_7(VAR_3,
                               FUNC_3(VAR_8),
                               VAR_12, VAR_11));
      FUNC_14(VAR_8, VAR_12, &VAR_15);
    }

  for (VAR_9 = VAR_10->first_byte_stream;
       VAR_9;
       VAR_9 = VAR_9->next)
    {
      apr_size_t VAR_16 = 0;
      FUNC_0(FUNC_7(VAR_3,
                               FUNC_2(VAR_9),
                               VAR_12, VAR_11));
      FUNC_13(VAR_9, VAR_12, &VAR_16);
    }

  *VAR_2 = VAR_10;
  return VAR_1;
}
