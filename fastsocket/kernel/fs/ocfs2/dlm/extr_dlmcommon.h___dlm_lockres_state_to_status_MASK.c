
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_lock_resource {int state; int spinlock; } ;
typedef enum dlm_status { ____Placeholder_dlm_status } dlm_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static inline enum dlm_status
FUNC_1(struct dlm_lock_resource *VAR_7)
{
 enum dlm_status VAR_8 = VAR_5;

 FUNC_0(&VAR_7->spinlock);

 if (VAR_7->state & VAR_3)
  VAR_8 = VAR_6;
 else if (VAR_7->state & VAR_2)
  VAR_8 = VAR_4;
 else if (VAR_7->state & VAR_1)
  VAR_8 = VAR_0;

 return VAR_8;
}
