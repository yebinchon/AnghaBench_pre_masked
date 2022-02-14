
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ len; int data; } ;
typedef TYPE_1__ svn_string_t ;
typedef int svn_error_t ;
typedef int svn_diff__normalize_state_t ;
struct TYPE_4__ {char** normalization_buf; int normalization_options; } ;
typedef TYPE_2__ diff_mem_baton_t ;
typedef scalar_t__ apr_off_t ;


 int * VAR_0 ;
 int FUNC_0 (char*,char*,size_t) ;
 int FUNC_1 (char**,scalar_t__*,int *,int ,int ) ;
 int VAR_1 ;

__attribute__((used)) static svn_error_t *
FUNC_2(void *VAR_2, void *VAR_3, void *VAR_4, int *VAR_5)
{


  diff_mem_baton_t *VAR_6 = VAR_2;
  svn_string_t *VAR_7 = VAR_3;
  svn_string_t *VAR_8 = VAR_4;
  char *VAR_9 = VAR_6->normalization_buf[0];
  char *VAR_10 = VAR_6->normalization_buf[1];
  apr_off_t VAR_11 = VAR_7->len;
  apr_off_t VAR_12 = VAR_8->len;
  svn_diff__normalize_state_t VAR_13 = VAR_1;

  FUNC_1(&VAR_9, &VAR_11, &VAR_13, VAR_7->data,
                             VAR_6->normalization_options);
  VAR_13 = VAR_1;
  FUNC_1(&VAR_10, &VAR_12, &VAR_13, VAR_8->data,
                             VAR_6->normalization_options);

  if (VAR_11 != VAR_12)
    *VAR_5 = (VAR_11 < VAR_12) ? -1 : 1;
  else
    *VAR_5 = (VAR_11 == 0) ? 0 : FUNC_0(VAR_9, VAR_10, (size_t) VAR_11);

  return VAR_0;
}
