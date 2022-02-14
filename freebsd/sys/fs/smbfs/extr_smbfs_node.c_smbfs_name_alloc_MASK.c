
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u_char ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*,char*,int) ;
 char* FUNC_1 (int,int ,int ) ;

__attribute__((used)) static char *
FUNC_2(const u_char *VAR_2, int VAR_3)
{
 u_char *VAR_4;

 VAR_3++;
 VAR_4 = FUNC_1(VAR_3, VAR_0, VAR_1);
 FUNC_0(VAR_2, VAR_4, VAR_3 - 1);
 VAR_4[VAR_3 - 1] = 0;
 return VAR_4;
}
