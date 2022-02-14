
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 () ;
 int FUNC_2 (char*,int,char*,int) ;

__attribute__((used)) static void
FUNC_3(
 int VAR_0
 )
{
 int VAR_1;
 char VAR_2[32];

 VAR_1 = FUNC_1() ^ (FUNC_1() << 16);
 VAR_2[0] = 'a' + VAR_1 % 26;
 VAR_1 >>= 5;
 VAR_2[1] = 'a' + VAR_1 % 26;
 VAR_1 >>= 5;
 VAR_2[2] = 'a' + VAR_1 % 26;
 VAR_1 >>= 5;
 VAR_2[3] = '.';
 FUNC_2(&VAR_2[4], sizeof(VAR_2) - 4, "%d", VAR_0);
 FUNC_0(VAR_2, VAR_1);
}
