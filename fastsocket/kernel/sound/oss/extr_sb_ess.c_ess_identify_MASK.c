
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int lock; } ;
typedef TYPE_1__ sb_devc ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (unsigned char,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int) ;

__attribute__((used)) static unsigned int FUNC_5 (sb_devc * VAR_2)
{
 unsigned int VAR_3;
 unsigned long VAR_4;

 FUNC_2(&VAR_2->lock, VAR_4);
 FUNC_1(((unsigned char) (0x40 & 0xff)), VAR_0);

 FUNC_4(20);
 VAR_3 = FUNC_0(VAR_1) << 8;
 FUNC_4(20);
 VAR_3 |= FUNC_0(VAR_1);
 FUNC_4(20);
 FUNC_3(&VAR_2->lock, VAR_4);

 return VAR_3;
}
