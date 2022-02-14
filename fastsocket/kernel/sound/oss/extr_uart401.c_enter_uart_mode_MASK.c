
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ input_byte; int lock; } ;
typedef TYPE_1__ uart401_devc ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_6(uart401_devc * VAR_2)
{
 int VAR_3, VAR_4;
 unsigned long VAR_5;

 FUNC_2(&VAR_2->lock,VAR_5);
 for (VAR_4 = 30000; VAR_4 > 0 && !FUNC_1(VAR_2); VAR_4--);

 VAR_2->input_byte = 0;
 FUNC_4(VAR_2, VAR_1);

 VAR_3 = 0;
 for (VAR_4 = 50000; VAR_4 > 0 && !VAR_3; VAR_4--)
  if (VAR_2->input_byte == VAR_0)
   VAR_3 = 1;
  else if (FUNC_0(VAR_2))
   if (FUNC_5(VAR_2) == VAR_0)
    VAR_3 = 1;

 FUNC_3(&VAR_2->lock,VAR_5);
}
