
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (size_t) ;
 int FUNC_1 (char*,size_t,char*,char*) ;
 int VAR_0 ;
 int * FUNC_2 (char*,char) ;
 size_t FUNC_3 (char*,int ) ;
 int FUNC_4 (char*,char*,size_t) ;
 size_t FUNC_5 (char*) ;

char *
FUNC_6(char *VAR_1)
{
 char *VAR_2;
 size_t VAR_3;
 size_t VAR_4;

 VAR_3 = FUNC_5(VAR_1);
 VAR_4 = VAR_3 + 2 + 1;
 VAR_2 = FUNC_0(VAR_4);
 if ('"' != VAR_1[0]
     && (FUNC_3(VAR_1, VAR_0) < VAR_3
  || FUNC_2(VAR_1, ' ') != ((void*)0))) {
  FUNC_1(VAR_2, VAR_4, "\"%s\"", VAR_1);
 } else
  FUNC_4(VAR_2, VAR_1, VAR_4);

 return VAR_2;
}
