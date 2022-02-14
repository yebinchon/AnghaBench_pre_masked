
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ input_byte; } ;
typedef TYPE_1__ uart401_devc ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (TYPE_1__*,int ) ;
 int FUNC_6 (TYPE_1__*) ;
 scalar_t__ FUNC_7 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_8(uart401_devc * VAR_2)
{
 int VAR_3, VAR_4, VAR_5;





 VAR_3 = 0;

 for (VAR_5 = 0; VAR_5 < 2 && !VAR_3; VAR_5++)
 {
  for (VAR_4 = 30000; VAR_4 > 0 && !FUNC_3(VAR_2); VAR_4--);
  VAR_2->input_byte = 0;
  FUNC_5(VAR_2, VAR_1);






  for (VAR_4 = 50000; VAR_4 > 0 && !VAR_3; VAR_4--)
  {
   if (VAR_2->input_byte == VAR_0)
    VAR_3 = 1;
   else if (FUNC_2(VAR_2))
   {
    if (FUNC_7(VAR_2) == VAR_0)
     VAR_3 = 1;
   }
  }
 }


 if (VAR_3)
 {
  FUNC_1(FUNC_4("Reset UART401 OK\n"));
 }
 else
  FUNC_0(FUNC_4("Reset UART401 failed - No hardware detected.\n"));

 if (VAR_3)
  FUNC_6(VAR_2);



 return VAR_3;
}
