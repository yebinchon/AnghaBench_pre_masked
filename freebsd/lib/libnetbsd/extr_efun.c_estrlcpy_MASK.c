
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int,char*,size_t,size_t) ;
 int VAR_1 ;
 size_t FUNC_1 (char*,char const*,size_t) ;
 int FUNC_2 (int,char*,size_t,size_t) ;

size_t
FUNC_3(char *VAR_2, const char *VAR_3, size_t VAR_4)
{
 size_t VAR_5;
 if ((VAR_5 = FUNC_1(VAR_2, VAR_3, VAR_4)) >= VAR_4) {
  VAR_1 = VAR_0;
  FUNC_0)(1,
      "Cannot copy string; %zu chars needed %zu provided",
      VAR_5, VAR_4);
 }
 return VAR_5;
}
