
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,char*,int) ;

__attribute__((used)) static char *
FUNC_1 (unsigned long VAR_1)
{
 static char VAR_2[32];
 int VAR_3;
 VAR_3 = FUNC_0 (VAR_2, "%lu", VAR_1);
 if (VAR_3>7 && !VAR_0) {
  VAR_2[3] = VAR_2[2];
  VAR_2[2] = VAR_2[1];
  VAR_2[1] = '.';
  VAR_2[4] = 'e';
  FUNC_0 (VAR_2 + 5, "%02d", VAR_3-1);
 }
 return VAR_2;
}
