
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,int,char*,int) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int,char*) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_3(int VAR_1, char *VAR_2, size_t VAR_3)
{
 size_t VAR_4;

 for(VAR_4 = 0;;) {
  if (VAR_4 >= VAR_3)
   FUNC_2(1, "proxy read too long");
  if (FUNC_0(VAR_0, VAR_1, VAR_2 + VAR_4, 1) != 1)
   FUNC_1(1, "proxy read");

  if (VAR_2[VAR_4] == '\r')
   continue;
  if (VAR_2[VAR_4] == '\n') {
   VAR_2[VAR_4] = '\0';
   break;
  }
  VAR_4++;
 }
 return (VAR_4);
}
