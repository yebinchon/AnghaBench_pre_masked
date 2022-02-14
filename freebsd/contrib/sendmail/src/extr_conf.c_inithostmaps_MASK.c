
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (char*,char*,int) ;
 int * FUNC_3 (char*,int ,int ) ;
 scalar_t__ FUNC_4 (char*,char*) ;
 int FUNC_5 (char*,char**,short*) ;

void
FUNC_6()
{
 register int VAR_6;
 int VAR_7;
 char *VAR_8[VAR_3];
 short VAR_9[VAR_2];
 char VAR_10[VAR_1];





 if (FUNC_3("host", VAR_5, VAR_4) == ((void*)0))
 {

  (void) FUNC_2(VAR_10, "host host", sizeof(VAR_10));




  (void) FUNC_0(VAR_10);
 }





 VAR_7 = FUNC_5("aliases", VAR_8, VAR_9);
 for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++)
 {
  if (FUNC_4(VAR_8[VAR_6], "files") == 0 &&
      FUNC_3("aliases.files", VAR_5, VAR_4) == ((void*)0))
  {
   (void) FUNC_2(VAR_10, "aliases.files null",
       sizeof(VAR_10));
   (void) FUNC_0(VAR_10);
  }
 }
 if (FUNC_3("aliases", VAR_5, VAR_4) == ((void*)0))
 {
  (void) FUNC_2(VAR_10, "aliases switch aliases", sizeof(VAR_10));
  (void) FUNC_0(VAR_10);
 }
}
