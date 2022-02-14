
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pattern_t ;


 char* VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (char) ;
 int FUNC_1 (int ,char*,char*) ;
 int FUNC_2 (int *) ;
 char* VAR_2 ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (int *,char*,int ) ;
 int FUNC_5 (int,int *,char*,int) ;
 int FUNC_6 (int *) ;
 int VAR_4 ;
 char* FUNC_7 (int ) ;

pattern_t *
FUNC_8(void)
{
 static pattern_t *VAR_5 = ((void*)0);
 static char VAR_6[1024];

 char *VAR_7;
 char VAR_8;
 int VAR_9;

 if ((VAR_8 = *VAR_2) == ' ') {
  VAR_0 = "invalid pattern delimiter";
  return ((void*)0);
 } else if (VAR_8 == '\n' || *++VAR_2 == '\n' || *VAR_2 == VAR_8) {
  if (!VAR_5)
   VAR_0 = "no previous pattern";
  return VAR_5;
 } else if ((VAR_7 = FUNC_0(VAR_8)) == ((void*)0))
  return ((void*)0);

 if (VAR_5 && !VAR_3)
  FUNC_6(VAR_5);
 else if ((VAR_5 = (pattern_t *) FUNC_3(sizeof(pattern_t))) == ((void*)0)) {
  FUNC_1(VAR_4, "%s\n", FUNC_7(VAR_1));
  VAR_0 = "out of memory";
  return ((void*)0);
 }
 VAR_3 = 0;
 if ((VAR_9 = FUNC_4(VAR_5, VAR_7, 0))) {
  FUNC_5(VAR_9, VAR_5, VAR_6, sizeof VAR_6);
  VAR_0 = VAR_6;
  FUNC_2(VAR_5);
  return VAR_5 = ((void*)0);
 }
 return VAR_5;
}
