
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,char*,size_t) ;
 char* FUNC_2 (char*,char) ;
 size_t FUNC_3 (char*) ;
 int FUNC_4 (int ,char*) ;

void
FUNC_5(char *VAR_2)
{
 size_t VAR_3;
 char *VAR_4;

 if ((VAR_4 = FUNC_2(VAR_2, '\n')))
  *VAR_4 = (char)0;


 VAR_3 = FUNC_3(VAR_2);
 if (VAR_2[0] == '.') {
  if ((VAR_3 + 2) > 1000) {
   FUNC_4(VAR_1, "Cannot escape leading dot.  Buffer overflow");
   FUNC_0(VAR_0);
  }
  FUNC_1((VAR_2 + 1), VAR_2, (VAR_3 + 1));
  VAR_2[0] = '.';
 }
}
