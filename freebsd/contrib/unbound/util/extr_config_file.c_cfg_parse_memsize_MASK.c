
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char const*,size_t) ;
 scalar_t__ FUNC_2 (unsigned char) ;
 int FUNC_3 (char*,char const*) ;
 scalar_t__ FUNC_4 (char const*) ;
 char FUNC_5 (unsigned char) ;

int
FUNC_6(const char* VAR_0, size_t* VAR_1)
{
 size_t VAR_2;
 size_t VAR_3 = 1;
 if(!VAR_0 || (VAR_2=(size_t)FUNC_4(VAR_0)) == 0) {
  FUNC_3("not a size: '%s'", VAR_0);
  return 0;
 }
 if(FUNC_1(VAR_0, VAR_2)) {
  *VAR_1 = (size_t)FUNC_0(VAR_0);
  return 1;
 }

 while(VAR_2>0 && VAR_0[VAR_2-1]==' ')
  VAR_2--;
 if(VAR_2 > 1 && VAR_0[VAR_2-1] == 'b')
  VAR_2--;
 else if(VAR_2 > 1 && VAR_0[VAR_2-1] == 'B')
  VAR_2--;

 if(VAR_2 > 1 && FUNC_5((unsigned char)VAR_0[VAR_2-1]) == 'g')
  VAR_3 = 1024*1024*1024;
 else if(VAR_2 > 1 && FUNC_5((unsigned char)VAR_0[VAR_2-1]) == 'm')
  VAR_3 = 1024*1024;
 else if(VAR_2 > 1 && FUNC_5((unsigned char)VAR_0[VAR_2-1]) == 'k')
  VAR_3 = 1024;
 else if(VAR_2 > 0 && FUNC_2((unsigned char)VAR_0[VAR_2-1]))
  VAR_3 = 1;
 else {
  FUNC_3("unknown size specifier: '%s'", VAR_0);
  return 0;
 }
 while(VAR_2>1 && VAR_0[VAR_2-2]==' ')
  VAR_2--;

 if(!FUNC_1(VAR_0, VAR_2-1)) {
  FUNC_3("unknown size specifier: '%s'", VAR_0);
  return 0;
 }
 *VAR_1 = ((size_t)FUNC_0(VAR_0)) * VAR_3;
 return 1;
}
