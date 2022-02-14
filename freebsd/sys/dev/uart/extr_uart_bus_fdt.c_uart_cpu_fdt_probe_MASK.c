
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u_int ;
struct uart_class {int dummy; } ;
typedef int phandle_t ;
typedef void* pcell_t ;
typedef int bus_space_tag_t ;
typedef int bus_space_handle_t ;
typedef int br ;


 int VAR_0 ;
 int FUNC_0 (int,int ,int *,int *,int *) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int,char*,void**,int) ;
 char* FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int,char const*,int*) ;
 scalar_t__ FUNC_5 (int,int) ;
 int FUNC_6 (int,void**) ;
 scalar_t__ FUNC_7 (int,void**) ;
 scalar_t__ FUNC_8 (int,void**) ;
 void* FUNC_9 (struct uart_class*) ;
 void* FUNC_10 (struct uart_class*) ;

int
FUNC_11(struct uart_class **VAR_1, bus_space_tag_t *VAR_2,
    bus_space_handle_t *VAR_3, int *VAR_4, u_int *VAR_5, u_int *VAR_6,
    u_int *VAR_7)
{
 const char *VAR_8[] = {"stdout-path", "linux,stdout-path", "stdout",
     "stdin-path", "stdin", ((void*)0)};
 const char **VAR_9;
 struct uart_class *VAR_10;
 phandle_t VAR_11, VAR_12;
 pcell_t VAR_13, VAR_14, VAR_15, VAR_16;
 char *VAR_17;
 int VAR_18;


 VAR_17 = FUNC_3("hw.fdt.console");
 if (VAR_17 == ((void*)0)) {



  VAR_11 = -1;
  if ((VAR_12 = FUNC_1("/chosen")) != -1) {
   for (VAR_9 = VAR_8; *VAR_9 != ((void*)0); VAR_9++) {
    if (FUNC_4(VAR_12, *VAR_9,
        &VAR_11) == 0)
     break;
   }
  }
  if (VAR_12 == -1 || *VAR_9 == ((void*)0))
   VAR_11 = FUNC_1("serial0");
 } else {
  VAR_11 = FUNC_1(VAR_17);
 }

 if (VAR_11 == -1)
  return (VAR_0);






 VAR_10 = (struct uart_class *)FUNC_5(VAR_11, 0);
 if (VAR_10 != ((void*)0)) {
  if ((VAR_18 = FUNC_6(VAR_11, &VAR_14)) != 0)
   return (VAR_18);
 } else {

  VAR_10 =
      (struct uart_class *)FUNC_5(VAR_11, 1);
  if (VAR_10 == ((void*)0))
   return (VAR_0);
  VAR_14 = 0;
 }




 if (FUNC_8(VAR_11, &VAR_15) != 0)
  VAR_15 = FUNC_10(VAR_10);

 if (FUNC_7(VAR_11, &VAR_16) != 0)
  VAR_16 = FUNC_9(VAR_10);

 if (FUNC_2(VAR_11, "current-speed", &VAR_13, sizeof(VAR_13)) <= 0)
  VAR_13 = 0;

 VAR_18 = FUNC_0(VAR_11, 0, VAR_2, VAR_3, ((void*)0));
 if (VAR_18 != 0)
  return (VAR_18);

 *VAR_1 = VAR_10;
 *VAR_4 = VAR_13;
 *VAR_5 = VAR_14;
 *VAR_6 = VAR_15;
 *VAR_7 = VAR_16;

 return (0);
}
