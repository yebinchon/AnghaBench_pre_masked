
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpu_config {int initialized; scalar_t__ uart_mode; scalar_t__ last_status; scalar_t__ m_left; scalar_t__ m_ptr; int m_state; int lock; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct mpu_config*) ;
 int FUNC_1 (struct mpu_config*) ;
 scalar_t__ FUNC_2 (struct mpu_config*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (struct mpu_config*,int ) ;

__attribute__((used)) static int FUNC_6(struct mpu_config *VAR_3)
{
 unsigned long VAR_4;
 int VAR_5, VAR_6, VAR_7;
 int VAR_8;






 VAR_5 = 0;

 VAR_8 = VAR_3->initialized ? 30000 : 100000;
 VAR_3->initialized = 1;

 for (VAR_7 = 0; VAR_7 < 2 && !VAR_5; VAR_7++)
 {
  for (VAR_6 = VAR_8; VAR_6 > 0 && !VAR_5; VAR_6--)
     VAR_5 = FUNC_1(VAR_3);

  FUNC_5(VAR_3, VAR_1);
  for (VAR_6 = VAR_8 * 2; VAR_6 > 0 && !VAR_5; VAR_6--)
  {
   FUNC_3(&VAR_3->lock,VAR_4);
   if (FUNC_0(VAR_3))
    if (FUNC_2(VAR_3) == VAR_0)
     VAR_5 = 1;
   FUNC_4(&VAR_3->lock,VAR_4);
  }

 }

 VAR_3->m_state = VAR_2;
 VAR_3->m_ptr = 0;
 VAR_3->m_left = 0;
 VAR_3->last_status = 0;
 VAR_3->uart_mode = 0;

 return VAR_5;
}
