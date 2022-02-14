
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,char const*) ;
 char* FUNC_1 (char const*,char) ;

__attribute__((used)) static void FUNC_2(char *VAR_2, size_t VAR_3)
{
 const char *VAR_4;

 VAR_4 = VAR_2;
 if (*VAR_4 == '<') {
  VAR_4 = FUNC_1(VAR_4, '>');
  if (VAR_4)
   VAR_4++;
  else
   VAR_4 = VAR_2;
 }

 FUNC_0(VAR_0, VAR_1, VAR_4);
}
