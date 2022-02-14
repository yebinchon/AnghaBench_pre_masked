
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int len; int data; } ;
typedef TYPE_1__ svn_stringbuf_t ;
typedef int svn_stream_t ;
typedef scalar_t__ svn_revnum_t ;
typedef int svn_error_t ;
typedef int svn_cancel_func_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_size_t ;
typedef int apr_pool_t ;
typedef int apr_file_t ;
struct TYPE_10__ {int nelts; } ;
typedef TYPE_2__ apr_array_header_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int * VAR_5 ;
 char const* FUNC_1 (int *,char*,scalar_t__) ;
 int FUNC_2 (int *,scalar_t__,TYPE_2__*,int ,int ,int *) ;
 int FUNC_3 (int ,int ,TYPE_1__*,int) ;
 char const* FUNC_4 (char const*,char const*,int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int **,char const*,int,int ,int *) ;
 int FUNC_8 (int *,int ,int ,int *,int *) ;
 int FUNC_9 (int *) ;
 int * FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,int *,int ,void*,int *) ;
 int * FUNC_14 (int *,int ,int *) ;
 int * FUNC_15 (TYPE_1__*,int *) ;
 TYPE_1__* FUNC_16 (int *) ;
 TYPE_1__* FUNC_17 (int ,int *) ;

svn_error_t *
FUNC_18(const char *VAR_6,
                         const char *VAR_7,
                         const char *VAR_8,
                         svn_revnum_t VAR_9,
                         svn_revnum_t VAR_10,
                         apr_array_header_t *VAR_11,
                         apr_size_t VAR_12,
                         int VAR_13,
                         svn_boolean_t VAR_14,
                         svn_cancel_func_t VAR_15,
                         void *VAR_16,
                         apr_pool_t *VAR_17)
{
  svn_stream_t *VAR_18;
  apr_file_t *VAR_19;
  svn_revnum_t VAR_20;
  apr_pool_t *VAR_21 = FUNC_10(VAR_17);


  svn_stringbuf_t *VAR_22
    = FUNC_17(VAR_12, VAR_17);
  svn_stringbuf_t *VAR_23
    = FUNC_16(VAR_17);
  VAR_18 = FUNC_15(VAR_22, VAR_17);


  FUNC_0(FUNC_2(VAR_18, VAR_9, VAR_11, 0,
                                    VAR_11->nelts, VAR_21));


  FUNC_0(FUNC_7(&VAR_19, FUNC_4(VAR_6,
                                                       VAR_7,
                                                       VAR_17),
                           VAR_3 | VAR_0, VAR_1,
                           VAR_17));


  for (VAR_20 = VAR_9; VAR_20 <= VAR_10; VAR_20++)
    {
      const char *VAR_24;
      svn_stream_t *VAR_25;
      apr_file_t *VAR_26;

      FUNC_9(VAR_21);


      VAR_24 = FUNC_4(VAR_8, FUNC_1(VAR_21, "%ld", VAR_20),
                             VAR_21);




      FUNC_0(FUNC_7(&VAR_26, VAR_24, VAR_2, VAR_1,
                               VAR_21));
      VAR_25 = FUNC_14(VAR_26, VAR_4, VAR_21);
      FUNC_0(FUNC_13(VAR_25, VAR_18,
                               VAR_15, VAR_16, VAR_21));
    }


  FUNC_0(FUNC_12(VAR_18));


  FUNC_0(FUNC_3(VAR_22->data, VAR_22->len,
                             VAR_23, VAR_13));


  FUNC_0(FUNC_8(VAR_19, VAR_23->data, VAR_23->len,
                                 ((void*)0), VAR_17));
  if (VAR_14)
    FUNC_0(FUNC_6(VAR_19, VAR_17));
  FUNC_0(FUNC_5(VAR_19, VAR_17));

  FUNC_11(VAR_21);

  return VAR_5;
}
