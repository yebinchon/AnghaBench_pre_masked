
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int lock; } ;
typedef TYPE_1__ sb_devc ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (TYPE_1__*,unsigned int) ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (unsigned char,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int) ;

unsigned int FUNC_6 (sb_devc * VAR_2, unsigned int VAR_3)
{
 unsigned int VAR_4;
 unsigned long VAR_5;

 FUNC_3(&VAR_2->lock, VAR_5);

 if (VAR_3 >= 0xa0) {
  VAR_4 = FUNC_0 (VAR_2, VAR_3);
 } else {
  FUNC_2(((unsigned char) (VAR_3 & 0xff)), VAR_0);

  FUNC_5(20);
  VAR_4 = FUNC_1(VAR_1);
  FUNC_5(20);
 }
 FUNC_4(&VAR_2->lock, VAR_5);

 return VAR_4;
}
