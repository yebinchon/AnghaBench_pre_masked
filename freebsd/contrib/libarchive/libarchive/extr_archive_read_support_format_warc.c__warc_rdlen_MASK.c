
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;
typedef int _key ;


 char* FUNC_0 (char const*,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (unsigned char) ;
 long FUNC_2 (char const*,char**,int) ;
 char* FUNC_3 (char const*,size_t,char const*,int) ;

__attribute__((used)) static ssize_t
FUNC_4(const char *VAR_1, size_t VAR_2)
{
 static const char VAR_3[] = "\r\nContent-Length:";
 const char *VAR_4, *VAR_5;
 char *VAR_6 = ((void*)0);
 long int VAR_7;

 if ((VAR_4 = FUNC_3(VAR_1, VAR_2, VAR_3, sizeof(VAR_3) - 1U)) == ((void*)0)) {

  return -1;
 }
 VAR_4 += sizeof(VAR_3) - 1U;
 if ((VAR_5 = FUNC_0(VAR_4, VAR_1 + VAR_2 - VAR_4)) == ((void*)0)) {

  return -1;
 }


 while (VAR_4 < VAR_5 && (*VAR_4 == ' ' || *VAR_4 == '\t'))
  VAR_4++;

 if (!FUNC_1((unsigned char)*VAR_4))
  return -1;
 VAR_0 = 0;
 VAR_7 = FUNC_2(VAR_4, &VAR_6, 10);
 if (VAR_0 != 0 || VAR_6 != VAR_5) {

  return -1;
 }

 return (size_t)VAR_7;
}
