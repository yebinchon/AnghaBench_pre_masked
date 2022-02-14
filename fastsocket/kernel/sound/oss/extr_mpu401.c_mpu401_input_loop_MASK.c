
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpu_config {int m_busy; scalar_t__ mode; int opened; int devno; int (* inputintr ) (int ,unsigned char) ;int lock; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct mpu_config*) ;
 int FUNC_1 (struct mpu_config*,unsigned char) ;
 unsigned char FUNC_2 (struct mpu_config*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int ,unsigned char) ;

__attribute__((used)) static void FUNC_6(struct mpu_config *VAR_2)
{
 unsigned long VAR_3;
 int VAR_4;
 int VAR_5;

 FUNC_3(&VAR_2->lock,VAR_3);
 VAR_4 = VAR_2->m_busy;
 VAR_2->m_busy = 1;
 FUNC_4(&VAR_2->lock,VAR_3);

 if (VAR_4)
  return;

 VAR_5 = 50;

 while (FUNC_0(VAR_2) && VAR_5-- > 0)
 {
  unsigned char VAR_6 = FUNC_2(VAR_2);

  if (VAR_2->mode == VAR_0)
  {
   FUNC_1(VAR_2, VAR_6);
  }
  else if (VAR_2->opened & VAR_1 && VAR_2->inputintr != ((void*)0))
   VAR_2->inputintr(VAR_2->devno, VAR_6);
 }
 VAR_2->m_busy = 0;
}
