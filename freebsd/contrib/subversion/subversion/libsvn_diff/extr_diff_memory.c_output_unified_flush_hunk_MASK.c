
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_6__ {TYPE_2__* hunk; scalar_t__* hunk_start; scalar_t__* hunk_length; int output_stream; int pool; int header_encoding; scalar_t__ context_size; } ;
typedef TYPE_1__ output_baton_t ;
typedef int apr_size_t ;
typedef scalar_t__ apr_off_t ;
struct TYPE_7__ {int data; int len; } ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (TYPE_1__*,int ,int ,scalar_t__) ;
 int FUNC_2 (int ,int ,char const*,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int *,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int *) ;
 scalar_t__ FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int VAR_1 ;

__attribute__((used)) static svn_error_t *
FUNC_7(output_baton_t *VAR_2,
                          const char *VAR_3)
{
  apr_off_t VAR_4;
  apr_size_t VAR_5;
  apr_off_t VAR_6;
  apr_off_t VAR_7;

  if (FUNC_5(VAR_2->hunk))
    return VAR_0;

  FUNC_3(VAR_2->pool);


  VAR_4 = VAR_2->hunk_start[0] + VAR_2->hunk_length[0]
                 + VAR_2->context_size;
  FUNC_0(FUNC_1(VAR_2, 0 ,
                                     VAR_1,
                                     VAR_4));
  if (VAR_3 == ((void*)0))
    VAR_3 = "@@";

  VAR_6 = VAR_2->hunk_start[0];
  VAR_7 = VAR_2->hunk_start[1];



  if (VAR_2->hunk_length[0])
    VAR_6++;
  if (VAR_2->hunk_length[1])
    VAR_7++;


  FUNC_0(FUNC_2(
            VAR_2->output_stream, VAR_2->header_encoding, VAR_3,
            VAR_6, VAR_2->hunk_length[0],
            VAR_7, VAR_2->hunk_length[1],
            ((void*)0) ,
            VAR_2->pool));

  VAR_5 = VAR_2->hunk->len;
  FUNC_0(FUNC_4(VAR_2->output_stream,
                           VAR_2->hunk->data, &VAR_5));


  VAR_2->hunk_length[0] = 0;
  VAR_2->hunk_length[1] = 0;
  VAR_2->hunk_start[0] = 0;
  VAR_2->hunk_start[1] = 0;
  FUNC_6(VAR_2->hunk);

  return VAR_0;
}
