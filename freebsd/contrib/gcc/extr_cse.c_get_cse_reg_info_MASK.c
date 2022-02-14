
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cse_reg_info {scalar_t__ timestamp; } ;


 struct cse_reg_info* VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (unsigned int) ;

__attribute__((used)) static inline struct cse_reg_info *
FUNC_1 (unsigned int VAR_2)
{
  struct cse_reg_info *VAR_3 = &VAR_0[VAR_2];



  if (VAR_3->timestamp != VAR_1)
    FUNC_0 (VAR_2);

  return VAR_3;
}
