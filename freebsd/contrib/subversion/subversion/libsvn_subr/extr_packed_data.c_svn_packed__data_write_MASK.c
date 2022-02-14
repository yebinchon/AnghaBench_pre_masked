
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;


struct TYPE_22__ {int len; int data; } ;
typedef TYPE_1__ svn_stringbuf_t ;
typedef int svn_stream_t ;
struct TYPE_23__ {scalar_t__ private_data; } ;
typedef TYPE_2__ svn_packed__int_stream_t ;
struct TYPE_24__ {TYPE_4__* first_byte_stream; TYPE_2__* first_int_stream; int byte_stream_count; int int_stream_count; } ;
typedef TYPE_3__ svn_packed__data_root_t ;
struct TYPE_25__ {struct TYPE_25__* next; } ;
typedef TYPE_4__ svn_packed__byte_stream_t ;
typedef int svn_error_t ;
struct TYPE_26__ {TYPE_2__* next; } ;
typedef TYPE_5__ packed_int_private_t ;
typedef int apr_size_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (TYPE_4__*,TYPE_1__*) ;
 int FUNC_2 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int *,int ,int *) ;
 TYPE_1__* FUNC_6 (int,int *) ;
 int FUNC_7 (TYPE_1__*,int ) ;
 int FUNC_8 (TYPE_1__*,TYPE_4__*) ;
 int FUNC_9 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_10 (TYPE_1__*,int ) ;
 int FUNC_11 (int *,TYPE_1__*,TYPE_1__*) ;
 int FUNC_12 (int *,int ) ;

svn_error_t *
FUNC_13(svn_stream_t *VAR_1,
                       svn_packed__data_root_t *VAR_2,
                       apr_pool_t *VAR_3)
{
  svn_packed__int_stream_t *VAR_4;
  svn_packed__byte_stream_t *VAR_5;


  svn_stringbuf_t *VAR_6
    = FUNC_6(1024, VAR_3);
  svn_stringbuf_t *VAR_7
    = FUNC_6(1024, VAR_3);


  svn_stringbuf_t *VAR_8
    = FUNC_6(127, VAR_3);

  FUNC_10(VAR_8, VAR_2->int_stream_count);
  FUNC_9(VAR_8, VAR_2->first_int_stream);

  FUNC_10(VAR_8, VAR_2->byte_stream_count);
  FUNC_8(VAR_8, VAR_2->first_byte_stream);

  FUNC_0(FUNC_12(VAR_1, VAR_8->len));
  FUNC_0(FUNC_5(VAR_1, VAR_8->data, &VAR_8->len));



  for (VAR_4 = VAR_2->first_int_stream;
       VAR_4;
       VAR_4 = ((packed_int_private_t*)VAR_4->private_data)->next)
    {
      apr_size_t VAR_9 = FUNC_4(VAR_4);
      FUNC_7(VAR_7, VAR_9);

      FUNC_2(VAR_4, VAR_7);
      FUNC_0(FUNC_11(VAR_1, VAR_7, VAR_6));
    }

  for (VAR_5 = VAR_2->first_byte_stream;
       VAR_5;
       VAR_5 = VAR_5->next)
    {
      apr_size_t VAR_10 = FUNC_3(VAR_5);
      FUNC_7(VAR_7, VAR_10);

      FUNC_1(VAR_5, VAR_7);
      FUNC_0(FUNC_11(VAR_1, VAR_7, VAR_6));
    }

  return VAR_0;
}
