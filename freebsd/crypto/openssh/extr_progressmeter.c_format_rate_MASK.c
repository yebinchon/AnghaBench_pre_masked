
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int off_t ;


 int FUNC_0 (char*,int,char*,long long,long long,char,char*) ;
 char* VAR_0 ;

__attribute__((used)) static void
FUNC_1(char *VAR_1, int VAR_2, off_t VAR_3)
{
 int VAR_4;

 VAR_3 *= 100;
 for (VAR_4 = 0; VAR_3 >= 100*1000 && VAR_0[VAR_4] != 'T'; VAR_4++)
  VAR_3 = (VAR_3 + 512) / 1024;
 if (VAR_4 == 0) {
  VAR_4++;
  VAR_3 = (VAR_3 + 512) / 1024;
 }
 FUNC_0(VAR_1, VAR_2, "%3lld.%1lld%c%s",
     (long long) (VAR_3 + 5) / 100,
     (long long) (VAR_3 + 5) / 10 % 10,
     VAR_0[VAR_4],
     VAR_4 ? "B" : " ");
}
