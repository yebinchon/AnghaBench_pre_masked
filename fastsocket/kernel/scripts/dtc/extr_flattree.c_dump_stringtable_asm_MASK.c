
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct data {char* val; int len; } ;
typedef int FILE ;


 int FUNC_0 (int *,char*,char const*) ;
 int FUNC_1 (char const*) ;

__attribute__((used)) static void FUNC_2(FILE *VAR_0, struct data VAR_1)
{
 const char *VAR_2;
 int VAR_3;

 VAR_2 = VAR_1.val;

 while (VAR_2 < (VAR_1.val + VAR_1.len)) {
  VAR_3 = FUNC_1(VAR_2);
  FUNC_0(VAR_0, "\t.string \"%s\"\n", VAR_2);
  VAR_2 += VAR_3+1;
 }
}
