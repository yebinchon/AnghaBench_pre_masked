
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_3__ {scalar_t__* current_line; } ;
typedef TYPE_1__ svn_diff3__file_output_baton_t ;
typedef scalar_t__ apr_off_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static svn_error_t *
FUNC_2(void *VAR_3, int VAR_4, apr_off_t VAR_5,
            apr_off_t VAR_6)
{
  svn_diff3__file_output_baton_t *VAR_7 = VAR_3;


  while (VAR_7->current_line[VAR_4] < VAR_5)
    {
      FUNC_0(FUNC_1(VAR_7, VAR_2, VAR_4));
    }

  VAR_5 += VAR_6;

  while (VAR_7->current_line[VAR_4] < VAR_5)
    {
      FUNC_0(FUNC_1(VAR_7, VAR_1, VAR_4));
    }

  return VAR_0;
}
