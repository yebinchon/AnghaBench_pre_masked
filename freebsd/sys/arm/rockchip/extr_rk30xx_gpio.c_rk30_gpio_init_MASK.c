
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_ctrl_entry {int (* handler ) (scalar_t__,int *,int) ;scalar_t__ compat; } ;
typedef scalar_t__ phandle_t ;
typedef int pcell_t ;
typedef int gpios ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (char*) ;
 int FUNC_2 (scalar_t__,char*,int *,int) ;
 int FUNC_3 (scalar_t__,char*) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int VAR_3 ;
 scalar_t__ FUNC_7 (scalar_t__,scalar_t__) ;
 int FUNC_8 (scalar_t__,int *,int) ;

__attribute__((used)) static int
FUNC_9(void)
{
 phandle_t VAR_4, VAR_5, VAR_6, VAR_7;
 pcell_t VAR_8[VAR_2 * VAR_1];
 struct gpio_ctrl_entry *VAR_9;
 int VAR_10, VAR_11;

 VAR_6 = FUNC_1("/");
 VAR_10 = 0;
 VAR_5 = VAR_6;


 for (VAR_4 = FUNC_0(VAR_5); VAR_4 != 0; VAR_4 = FUNC_6(VAR_4)) {


  while (FUNC_0(VAR_4)) {
   VAR_5 = VAR_4;
   VAR_4 = FUNC_0(VAR_4);
  }
  if ((VAR_10 = FUNC_3(VAR_4, "gpios")) > 0) {

   if (VAR_10 > sizeof(VAR_8))
    return (VAR_0);


   FUNC_2(VAR_4, "gpios", VAR_8, VAR_10);

   VAR_9 = (struct gpio_ctrl_entry *)&VAR_3;


   for (; VAR_9->compat; VAR_9++) {





    VAR_7 = FUNC_4(VAR_8[0]);

    if (FUNC_7(VAR_7, VAR_9->compat))

     if ((VAR_11 = VAR_9->handler(VAR_7,
         (pcell_t *)&VAR_8, VAR_10)))
      return (VAR_11);
   }
  }

  if (FUNC_6(VAR_4) == 0) {

   VAR_4 = VAR_5;
   VAR_5 = FUNC_5(VAR_4);
  }
 }
 return (0);
}
