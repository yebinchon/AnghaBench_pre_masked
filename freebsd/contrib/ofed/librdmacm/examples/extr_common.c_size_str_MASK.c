
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,size_t,char*,long long,char,...) ;

void FUNC_1(char *VAR_0, size_t VAR_1, long long VAR_2)
{
 long long VAR_3, VAR_4 = 0;
 char VAR_5;

 if (VAR_2 >= (1 << 30)) {
  VAR_3 = 1 << 30;
  VAR_5 = 'g';
 } else if (VAR_2 >= (1 << 20)) {
  VAR_3 = 1 << 20;
  VAR_5 = 'm';
 } else if (VAR_2 >= (1 << 10)) {
  VAR_3 = 1 << 10;
  VAR_5 = 'k';
 } else {
  VAR_3 = 1;
  VAR_5 = '\0';
 }

 if (VAR_2 / VAR_3 < 10)
  VAR_4 = (VAR_2 % VAR_3) * 10 / VAR_3;
 if (VAR_4) {
  FUNC_0(VAR_0, VAR_1, "%lld.%lld%c", VAR_2 / VAR_3, VAR_4, VAR_5);
 } else {
  FUNC_0(VAR_0, VAR_1, "%lld%c", VAR_2 / VAR_3, VAR_5);
 }
}
