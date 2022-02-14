
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int kallsyms_build_id ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *,int,char*) ;
 int FUNC_1 (int *,char*,char*) ;
 scalar_t__ FUNC_2 (char*,int *,int) ;

__attribute__((used)) static int FUNC_3(FILE *VAR_1)
{
 u8 VAR_2[VAR_0];
 char VAR_3[VAR_0 * 2 + 1];

 if (FUNC_2("/sys/kernel/notes", VAR_2,
     sizeof(VAR_2)) != 0)
  return -1;

 FUNC_0(VAR_2, sizeof(VAR_2),
     VAR_3);
 FUNC_1(VAR_1, "%s\n", VAR_3);
 return 0;
}
