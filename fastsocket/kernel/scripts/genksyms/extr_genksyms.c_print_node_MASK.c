
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct string_list {size_t tag; int string; } ;
typedef int FILE ;


 size_t VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (char,int *) ;
 char** VAR_1 ;

__attribute__((used)) static void FUNC_2(FILE * VAR_2, struct string_list *VAR_3)
{
 if (VAR_3->tag != VAR_0) {
  FUNC_1(VAR_1[VAR_3->tag][0], VAR_2);
  FUNC_1('#', VAR_2);
 }
 FUNC_0(VAR_3->string, VAR_2);
}
