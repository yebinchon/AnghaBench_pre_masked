
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_txdelta_window_handler_t ;
typedef int svn_stream_t ;
struct TYPE_4__ {TYPE_2__* fsap_data; } ;
typedef TYPE_1__ svn_fs_t ;
struct TYPE_5__ {scalar_t__ delta_compression_type; scalar_t__ format; int delta_compression_level; } ;
typedef TYPE_2__ fs_fs_data_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int *,void**,int *,int,int ,int *) ;

__attribute__((used)) static void
FUNC_2(svn_txdelta_window_handler_t *VAR_4,
                   void **VAR_5,
                   svn_stream_t *VAR_6,
                   svn_fs_t *VAR_7,
                   apr_pool_t *VAR_8)
{
  fs_fs_data_t *VAR_9 = VAR_7->fsap_data;
  int VAR_10;

  if (VAR_9->delta_compression_type == VAR_2)
    {
      FUNC_0(VAR_9->format >= VAR_1);
      VAR_10 = 2;
    }
  else if (VAR_9->delta_compression_type == VAR_3)
    {
      FUNC_0(VAR_9->format >= VAR_0);
      VAR_10 = 1;
    }
  else
    {
      VAR_10 = 0;
    }

  FUNC_1(VAR_4, VAR_5, VAR_6, VAR_10,
                          VAR_9->delta_compression_level, VAR_8);
}
