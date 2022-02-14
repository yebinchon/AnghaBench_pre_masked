
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int u_int ;
typedef int buf ;


 int FUNC_0 (char*,int,char*,long,char) ;

__attribute__((used)) static char *
FUNC_1(uint64_t VAR_0, u_int VAR_1)
{
 static char VAR_2[80];
 char VAR_3;

 VAR_0 = VAR_0 * VAR_1 / 1024;
 VAR_3 = 'K';
 if (VAR_0 >= 10485760000LL) {
  VAR_0 /= 1073741824;
  VAR_3 = 'T';
 } else if (VAR_0 >= 10240000) {
  VAR_0 /= 1048576;
  VAR_3 = 'G';
 } else if (VAR_0 >= 10000) {
  VAR_0 /= 1024;
  VAR_3 = 'M';
 }
 FUNC_0(VAR_2, sizeof(VAR_2), "%4ld%cB", (long)VAR_0, VAR_3);
 return (VAR_2);
}
