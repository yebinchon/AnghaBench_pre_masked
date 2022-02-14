
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char const*,char const*,int) ;
 char* VAR_1 ;

__attribute__((used)) static int FUNC_1(const char * VAR_2, int VAR_3)
{
 const char * VAR_4;
 const char * VAR_5 = VAR_1 + VAR_0 - VAR_3;
 for ( VAR_4 = VAR_1 + 1; VAR_4 < VAR_5; VAR_4++ ) {
  if (VAR_4[ -1] == '\n'
  && VAR_4[VAR_3] == '\n'
  && !FUNC_0(VAR_4, VAR_2, VAR_3))
   return 1;
 }
 return 0;
}
