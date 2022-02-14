
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int ,char*,int *,int *) ;
 char* FUNC_3 (char*) ;
 int FUNC_4 (char*,int,char*,int,int) ;
 scalar_t__ FUNC_5 (char*,char*) ;
 int FUNC_6 (char const*,int *,int ) ;

__attribute__((used)) static int
FUNC_7(char *VAR_3)
{
 const char *VAR_4, *VAR_5;
 char *VAR_6;
 char *VAR_7;
 int VAR_8, VAR_9, VAR_10;
 char VAR_11[50];

 VAR_8 = FUNC_1(VAR_3);
 VAR_8 |= FUNC_0();

 VAR_7 = FUNC_3("console");
 if (VAR_7 != ((void*)0)) {
  if (FUNC_5(VAR_7, "comconsole") == 0)
   VAR_8 |= VAR_2;
  if (FUNC_5(VAR_7, "nullconsole") == 0)
   VAR_8 |= VAR_1;

  if (FUNC_5(VAR_7, "efi") == 0 &&
      FUNC_3("efi_8250_uid") != ((void*)0) &&
      FUNC_3("hw.uart.console") == ((void*)0)) {
   VAR_9 = -1;
   VAR_10 = -1;
   VAR_5 = FUNC_3("efi_com_speed");
   if (VAR_5 != ((void*)0))
    VAR_9 = FUNC_6(VAR_5, ((void*)0), 0);
   VAR_5 = FUNC_3("efi_com_port");
   if (VAR_5 == ((void*)0))
    VAR_5 = FUNC_3("comconsole_port");
   if (VAR_5 != ((void*)0))
    VAR_10 = FUNC_6(VAR_5, ((void*)0), 0);
   if (VAR_9 != -1 && VAR_10 != -1) {
    FUNC_4(VAR_11, sizeof(VAR_11), "io:%d,br:%d", VAR_10,
        VAR_9);
    FUNC_2("hw.uart.console", VAR_0, VAR_11,
        ((void*)0), ((void*)0));
   }
  }

 }

 return (VAR_8);
}
