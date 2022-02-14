
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char*) ;
 char* FUNC_3 (char const*) ;
 char* FUNC_4 (char**,int ) ;

int
FUNC_5(const char *VAR_3)
{
 char *VAR_4, *VAR_5, *VAR_6;
 int VAR_7 = VAR_2;

 if (VAR_3 == ((void*)0))
  return VAR_7;
 VAR_6 = VAR_4 = FUNC_3(VAR_3);
 if (VAR_4 == ((void*)0))
  return VAR_7;
 for ((VAR_5 = FUNC_4(&VAR_6, VAR_0)); VAR_5 && *VAR_5 != '\0'; (VAR_5 = FUNC_4(&VAR_6, VAR_0))) {
  switch (FUNC_0(VAR_5)) {
  case 2:
   VAR_7 |= VAR_1;
   break;
  default:
   FUNC_2("ignoring bad proto spec: '%s'.", VAR_5);
   break;
  }
 }
 FUNC_1(VAR_4);
 return VAR_7;
}
