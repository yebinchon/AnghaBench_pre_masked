
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char const*,int ) ;
 int FUNC_1 (char) ;

__attribute__((used)) static int
FUNC_2(unsigned char **VAR_0, int VAR_1, int VAR_2)
{
 int VAR_3, VAR_4 = 0;
 char * VAR_5;

 static const char VAR_6[] = "0123456789abcdef";

 for (VAR_3 = 0, VAR_5 = *VAR_0; VAR_3++ < VAR_2; ++VAR_5) {
  int VAR_7;
  const char * VAR_8 = FUNC_0(VAR_6, FUNC_1(*VAR_5));

  if (VAR_8 == ((void*)0) || (VAR_7 = VAR_8 - VAR_6) >= VAR_1)
   break;
  VAR_4 = (VAR_4 * VAR_1) + VAR_7;
 }
 *VAR_0 = VAR_5;
 return VAR_4;
}
