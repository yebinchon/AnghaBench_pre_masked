
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int build_id ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *,int,char*) ;
 int FUNC_1 (char const*,int *,int) ;
 int FUNC_2 (int *,char*,char*) ;

__attribute__((used)) static int FUNC_3(const char *VAR_1, FILE *VAR_2)
{
 u8 VAR_3[VAR_0];
 char VAR_4[VAR_0 * 2 + 1];

 if (FUNC_1(VAR_1, VAR_3,
        sizeof(VAR_3)) != sizeof(VAR_3))
  return 0;

 FUNC_0(VAR_3, sizeof(VAR_3), VAR_4);
 return FUNC_2(VAR_2, "%s\n", VAR_4);
}
