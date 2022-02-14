
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int lock; scalar_t__ codec; } ;
typedef TYPE_1__ sscape_info ;


 unsigned char FUNC_0 (scalar_t__) ;
 int FUNC_1 (unsigned char,scalar_t__) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static unsigned char FUNC_4(sscape_info* VAR_0, unsigned char VAR_1)
{
 unsigned char VAR_2;
 unsigned long VAR_3;

 FUNC_2(&VAR_0->lock,VAR_3);
 FUNC_1( VAR_1, VAR_0 -> codec);
 VAR_2 = FUNC_0 (VAR_0 -> codec + 1);
 FUNC_3(&VAR_0->lock,VAR_3);
 return VAR_2;

}
