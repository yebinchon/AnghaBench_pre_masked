
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {void* tview_len; void* sview_len; int sview_offset; } ;
typedef TYPE_1__ svn_txdelta_window_t ;
struct TYPE_9__ {int new_data; int member_0; } ;
typedef TYPE_2__ svn_txdelta__ops_baton_t ;
typedef int svn_filesize_t ;
typedef void* apr_size_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*,int ,int ,void*,char const*,int *) ;
 TYPE_1__* FUNC_2 (TYPE_2__*,int *) ;
 int FUNC_3 (TYPE_2__*,char const*,void*,void*,int *) ;
 int VAR_0 ;

__attribute__((used)) static svn_txdelta_window_t *
FUNC_4(const char *VAR_1, apr_size_t VAR_2, apr_size_t VAR_3,
               svn_filesize_t VAR_4, apr_pool_t *VAR_5)
{
  svn_txdelta__ops_baton_t VAR_6 = { 0 };
  svn_txdelta_window_t *VAR_7;


  VAR_6.new_data = FUNC_0(VAR_5);

  if (VAR_2 == 0)
    FUNC_1(&VAR_6, VAR_0, 0, VAR_3, VAR_1,
                           VAR_5);
  else
    FUNC_3(&VAR_6, VAR_1, VAR_2, VAR_3, VAR_5);


  VAR_7 = FUNC_2(&VAR_6, VAR_5);
  VAR_7->sview_offset = VAR_4;
  VAR_7->sview_len = VAR_2;
  VAR_7->tview_len = VAR_3;
  return VAR_7;
}
