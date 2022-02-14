
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char const*) ;
 long FUNC_1 (char const*,char**,int ) ;

__attribute__((used)) static int
FUNC_2(const char *VAR_0, int VAR_1)
{
 const char *VAR_2;
 char *VAR_3;
 long VAR_4;

 VAR_4 = VAR_1;
 VAR_2 = FUNC_0(VAR_0);
 if (VAR_2 && *VAR_2) {
  VAR_4 = FUNC_1(VAR_2, &VAR_3, 0);
  if ((VAR_3 && *VAR_3) || VAR_4 != (int)VAR_4) {
   VAR_4 = VAR_1;
  }
 }
 return (int)VAR_4;
}
