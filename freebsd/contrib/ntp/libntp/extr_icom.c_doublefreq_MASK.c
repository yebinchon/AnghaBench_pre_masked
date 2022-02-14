
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
typedef int s1 ;


 int VAR_0 ;
 int FUNC_0 (char*,int,char*,double) ;

__attribute__((used)) static void
FUNC_1(
 double VAR_1,
 u_char *VAR_2,
 int VAR_3
 )
{
 int VAR_4;
 char VAR_5[16];
 char *VAR_6;

 FUNC_0(VAR_5, sizeof(VAR_5), " %10.0f", VAR_1);
 VAR_6 = VAR_5 + 10;
 VAR_4 = 0;
 while (*VAR_6 != ' ') {
  VAR_2[VAR_4] = *VAR_6-- & 0x0f;
  VAR_2[VAR_4] = VAR_2[VAR_4] | ((*VAR_6-- & 0x0f) << 4);
  VAR_4++;
 }
 for ( ; VAR_4 < VAR_3; VAR_4++)
  VAR_2[VAR_4] = 0;
 VAR_2[VAR_4] = VAR_0;
}
