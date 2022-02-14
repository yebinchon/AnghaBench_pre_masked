
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ivopts_data {int iv_candidates; int iv_uses; int niters; int important_candidates; int relevant; int version_info; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct ivopts_data*) ;
 int VAR_1 ;
 int FUNC_4 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_5 (struct ivopts_data *VAR_5)
{
  FUNC_3 (VAR_5);
  FUNC_2 (VAR_5->version_info);
  FUNC_0 (VAR_5->relevant);
  FUNC_0 (VAR_5->important_candidates);
  FUNC_4 (VAR_5->niters);

  FUNC_1 (VAR_4, VAR_1, VAR_0);
  FUNC_1 (VAR_3, VAR_1, VAR_5->iv_uses);
  FUNC_1 (VAR_2, VAR_1, VAR_5->iv_candidates);
}
