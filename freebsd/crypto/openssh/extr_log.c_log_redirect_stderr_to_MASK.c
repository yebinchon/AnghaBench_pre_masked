
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,char const*,char*) ;
 int VAR_4 ;
 int FUNC_2 (char const*,int,int) ;
 int VAR_5 ;
 char* FUNC_3 (int ) ;

void
FUNC_4(const char *VAR_6)
{
 int VAR_7;

 if ((VAR_7 = FUNC_2(VAR_6, VAR_2|VAR_1|VAR_0, 0600)) == -1) {
  FUNC_1(VAR_5, "Couldn't open logfile %s: %s\n", VAR_6,
       FUNC_3(VAR_3));
  FUNC_0(1);
 }
 VAR_4 = VAR_7;
}
