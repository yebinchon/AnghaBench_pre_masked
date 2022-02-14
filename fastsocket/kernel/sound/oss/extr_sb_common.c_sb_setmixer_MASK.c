
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ model; int lock; } ;
typedef TYPE_1__ sb_devc ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,unsigned int,unsigned int) ;
 int FUNC_1 (unsigned char,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int) ;

void FUNC_5(sb_devc * VAR_3, unsigned int VAR_4, unsigned int VAR_5)
{
 unsigned long VAR_6;

 if (VAR_3->model == VAR_0) {
  FUNC_0 (VAR_3, VAR_4, VAR_5);
  return;
 }

 FUNC_2(&VAR_3->lock, VAR_6);

 FUNC_1(((unsigned char) (VAR_4 & 0xff)), VAR_1);
 FUNC_4(20);
 FUNC_1(((unsigned char) (VAR_5 & 0xff)), VAR_2);
 FUNC_4(20);

 FUNC_3(&VAR_3->lock, VAR_6);
}
