
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (char*,char*) ;
 char* FUNC_4 (char*,char) ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (char*) ;
 char** VAR_3 ;

int
FUNC_7(int VAR_4, char **VAR_5)
{
 int VAR_6;
 char *VAR_7;

 if ((VAR_7 = FUNC_4(VAR_5[0], '/')) == ((void*)0))
  VAR_7 = VAR_5[0];
 else
  VAR_7++;
 if (FUNC_3(VAR_7, "[") == 0) {
  if (FUNC_3(VAR_5[--VAR_4], "]") != 0)
   FUNC_0("missing ]");
  VAR_5[VAR_4] = ((void*)0);
 }


 if (--VAR_4 <= 0)
  return 1;


 (void)FUNC_2(VAR_0, "");

 VAR_1 = VAR_4;
 VAR_3 = &VAR_5[1];
 VAR_2 = 0;
 if (VAR_1 == 4 && FUNC_3(*VAR_3, "!") == 0) {

  --VAR_1;
  ++VAR_3;
  VAR_6 = FUNC_1(FUNC_6(*VAR_3));
 } else
  VAR_6 = !FUNC_1(FUNC_6(*VAR_3));

 if (--VAR_1 > 0)
  FUNC_5(*VAR_3, "unexpected operator");

 return VAR_6;
}
