
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct temp_file_cleanup_s {int pool; scalar_t__ fname_apr; } ;
typedef int apr_status_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (scalar_t__,int ) ;

__attribute__((used)) static apr_status_t
FUNC_2(void *VAR_1)
{
  struct temp_file_cleanup_s *VAR_2 = VAR_1;
  apr_status_t VAR_3 = VAR_0;

  if (VAR_2->fname_apr)
    {
      VAR_3 = FUNC_1(VAR_2->fname_apr, VAR_2->pool);
      FUNC_0(VAR_3, FUNC_1(VAR_2->fname_apr, VAR_2->pool));
    }

  return VAR_3;
}
