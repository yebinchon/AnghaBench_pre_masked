
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trapframe {int dummy; } ;


 uintptr_t VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct trapframe*) ;
 uintptr_t FUNC_1 (struct trapframe*) ;
 int VAR_2 ;
 int VAR_3 ;

int
FUNC_2(uintptr_t *VAR_4, int VAR_5,
    struct trapframe *VAR_6)
{
 uintptr_t *VAR_7, *VAR_8;
 uintptr_t VAR_9;
 int VAR_10 = 0;

 VAR_4[VAR_10++] = FUNC_1(VAR_6);
 VAR_8 = (uintptr_t *)FUNC_0(VAR_6);
 VAR_7 = (uintptr_t *)VAR_1;

 for (; VAR_10 < VAR_5; VAR_10++) {
  if (VAR_8 <= VAR_7)
   break;



  VAR_9 = VAR_8[1];

  if ((VAR_9 & 3) || (VAR_9 < 0x100))
   break;





  if (VAR_9 + VAR_0 == (uintptr_t) &VAR_3 ||
      VAR_9 + VAR_0 == (uintptr_t) &VAR_2)
   break;

  VAR_4[VAR_10] = VAR_9;
  VAR_7 = VAR_8;
  VAR_8 = (uintptr_t *)*VAR_8;
 }
 return (VAR_10);
}
