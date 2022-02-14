
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*,int,int,int,char const*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int * FUNC_3 (char*,int) ;
 void* FUNC_4 (unsigned int) ;

__attribute__((used)) static char *
FUNC_5(char *VAR_0, int VAR_1, int VAR_2, int VAR_3, const char *VAR_4)
{
 if (!FUNC_2(VAR_1) || !FUNC_1(VAR_1) || FUNC_3("$-_.+!*'(),", VAR_1) != ((void*)0)) {
  *VAR_0++ = '%';
  *VAR_0++ = FUNC_4(((unsigned int)VAR_1 >> 4) & 0xf);
  *VAR_0++ = FUNC_4((unsigned int)VAR_1 & 0xf);
 } else {
  VAR_0 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
 }
 return VAR_0;
}
