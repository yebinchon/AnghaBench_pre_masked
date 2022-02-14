
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bitstr_t ;
typedef int FILE ;


 int FUNC_0 (int *,int,int*) ;
 int FUNC_1 (int *,int,int*) ;
 scalar_t__ FUNC_2 (int *,int) ;
 int FUNC_3 (int *,char*,char,...) ;

__attribute__((used)) static void
FUNC_4(FILE *VAR_0, bitstr_t *VAR_1, int VAR_2)
{
 int VAR_3;
 int VAR_4, VAR_5;

 FUNC_0(VAR_1, VAR_2, &VAR_4);
 FUNC_1(VAR_1, VAR_2, &VAR_5);

 (void) FUNC_3(VAR_0, "%3d %3d ", VAR_4, VAR_5);

 for (VAR_3=0; VAR_3 < VAR_2; VAR_3++) {
  (void) FUNC_3(VAR_0, "%c", (FUNC_2(VAR_1, VAR_3) ? '1' : '0'));
 }

 (void) FUNC_3(VAR_0, "%c", '\n');
}
