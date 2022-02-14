
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_spillbuf_reader_t ;
typedef int svn_error_t ;
struct TYPE_4__ {int start_empty; int * pool; int * lock_token; int depth; int * path; int rev; int * link_path; } ;
typedef TYPE_1__ path_info_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 TYPE_1__* FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int *,int *,int *) ;
 int FUNC_3 (int *,int *,int *) ;
 int FUNC_4 (int **,int *,int *) ;
 int VAR_1 ;
 int FUNC_5 (char*,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_6(path_info_t **VAR_2,
               svn_spillbuf_reader_t *VAR_3,
               apr_pool_t *VAR_4)
{
  char VAR_5;

  FUNC_0(FUNC_5(&VAR_5, VAR_3, VAR_4));
  if (VAR_5 == '-')
    {
      *VAR_2 = ((void*)0);
      return VAR_0;
    }

  *VAR_2 = FUNC_1(VAR_4, sizeof(**VAR_2));
  FUNC_0(FUNC_4(&(*VAR_2)->path, VAR_3, VAR_4));
  FUNC_0(FUNC_5(&VAR_5, VAR_3, VAR_4));
  if (VAR_5 == '+')
    FUNC_0(FUNC_4(&(*VAR_2)->link_path, VAR_3, VAR_4));
  else
    (*VAR_2)->link_path = ((void*)0);
  FUNC_0(FUNC_3(&(*VAR_2)->rev, VAR_3, VAR_4));
  FUNC_0(FUNC_5(&VAR_5, VAR_3, VAR_4));
  if (VAR_5 == '+')
    FUNC_0(FUNC_2(&((*VAR_2)->depth), VAR_3, (*VAR_2)->path, VAR_4));
  else
    (*VAR_2)->depth = VAR_1;
  FUNC_0(FUNC_5(&VAR_5, VAR_3, VAR_4));
  (*VAR_2)->start_empty = (VAR_5 == '+');
  FUNC_0(FUNC_5(&VAR_5, VAR_3, VAR_4));
  if (VAR_5 == '+')
    FUNC_0(FUNC_4(&(*VAR_2)->lock_token, VAR_3, VAR_4));
  else
    (*VAR_2)->lock_token = ((void*)0);
  (*VAR_2)->pool = VAR_4;
  return VAR_0;
}
