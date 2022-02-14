
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char const*,char*) ;
 size_t FUNC_3 (int ,int,size_t,int *) ;
 size_t FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(const char *restrict VAR_1)
{
 FILE *VAR_2;
 size_t VAR_3;

 VAR_2 = FUNC_2(VAR_1, "w");
 FUNC_0(VAR_2 != ((void*)0));
 VAR_3 = FUNC_3(VAR_0, 1, FUNC_4(VAR_0), VAR_2);
 FUNC_1(VAR_2);
 FUNC_0(VAR_3 == FUNC_4(VAR_0));
}
