
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int) ;
 char* VAR_1 ;
 int * FUNC_1 (int,char*) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (int ) ;
 int VAR_4 ;
 int * VAR_5 ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int) ;

int
FUNC_6(void)
{
 int VAR_6;
 int VAR_7;

 VAR_2 = VAR_3 = 0;
 VAR_7 = FUNC_5(077);
 FUNC_4(VAR_4, "/tmp/ed.XXXXXX");
 if ((VAR_6 = FUNC_2(VAR_4)) == -1 ||
     (VAR_5 = FUNC_1(VAR_6, "w+")) == ((void*)0)) {
  if (VAR_6 != -1)
   FUNC_0(VAR_6);
  FUNC_3(VAR_4);
  VAR_1 = "cannot open temp file";
  FUNC_5(VAR_7);
  return VAR_0;
 }
 FUNC_5(VAR_7);
 return 0;
}
