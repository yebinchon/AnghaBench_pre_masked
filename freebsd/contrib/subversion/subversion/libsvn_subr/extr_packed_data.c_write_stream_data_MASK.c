
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int len; int data; } ;
typedef TYPE_1__ svn_stringbuf_t ;
typedef int svn_stream_t ;
typedef int svn_error_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int FUNC_1 (int ,int ,TYPE_1__*,int ) ;
 int FUNC_2 (int *,int ,int *) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_5(svn_stream_t *VAR_2,
                  svn_stringbuf_t *VAR_3,
                  svn_stringbuf_t *VAR_4)
{
  FUNC_0(FUNC_1(VAR_3->data, VAR_3->len,
                             VAR_4,
                             VAR_0));

  FUNC_0(FUNC_4(VAR_2, VAR_4->len));
  FUNC_0(FUNC_2(VAR_2, VAR_4->data, &VAR_4->len));

  FUNC_3(VAR_3);
  FUNC_3(VAR_4);

  return VAR_1;
}
