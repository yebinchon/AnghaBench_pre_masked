
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
 unsigned int FUNC_0 (TYPE_1__*,unsigned int) ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (unsigned char,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int) ;

unsigned int FUNC_6(sb_devc * VAR_3, unsigned int VAR_4)
{
 unsigned int VAR_5;
 unsigned long VAR_6;

 if (VAR_3->model == VAR_0) return FUNC_0 (VAR_3, VAR_4);

 FUNC_3(&VAR_3->lock, VAR_6);

 FUNC_2(((unsigned char) (VAR_4 & 0xff)), VAR_1);
 FUNC_5(20);
 VAR_5 = FUNC_1(VAR_2);
 FUNC_5(20);

 FUNC_4(&VAR_3->lock, VAR_6);

 return VAR_5;
}
