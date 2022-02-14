
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char* FUNC_0 (int ) ;
 char* VAR_1 ;
 char* VAR_2 ;
 int FUNC_1 (int ,char*,...) ;
 char* FUNC_2 () ;
 char* FUNC_3 () ;
 char* VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_4(void)
{
 extern char VAR_5[];




 static char VAR_6[] = "unknown";


 const char *VAR_7;
 (void)FUNC_1(VAR_4, "%s version %s\n", VAR_3, VAR_5);
 (void)FUNC_1(VAR_4, "libpcap version %s\n", VAR_6);







 VAR_7 = FUNC_2();
 if (VAR_7 != ((void*)0))
  (void)FUNC_1 (VAR_4, "SMI-library: %s\n", VAR_7);
}
