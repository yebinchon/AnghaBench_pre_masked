
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ivopts_data {int dummy; } ;
struct iv_use {scalar_t__ stmt; } ;
struct iv_cand {scalar_t__ pos; scalar_t__ incremented_at; } ;
typedef int * bitmap ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (struct ivopts_data*,struct iv_use*,struct iv_cand*,int,int **) ;
 int FUNC_1 (struct ivopts_data*,struct iv_use*,struct iv_cand*,unsigned int,int *,int ) ;

__attribute__((used)) static bool
FUNC_2 (struct ivopts_data *VAR_3,
          struct iv_use *VAR_4, struct iv_cand *VAR_5)
{
  bitmap VAR_6;
  unsigned VAR_7;





  if (VAR_5->pos == VAR_1
      && VAR_5->incremented_at == VAR_4->stmt)
    {
      FUNC_1 (VAR_3, VAR_4, VAR_5, 0, ((void*)0), VAR_2);
      return 1;
    }

  VAR_7 = FUNC_0 (VAR_3, VAR_4, VAR_5, 0, &VAR_6);
  FUNC_1 (VAR_3, VAR_4, VAR_5, VAR_7, VAR_6, VAR_2);

  return VAR_7 != VAR_0;
}
