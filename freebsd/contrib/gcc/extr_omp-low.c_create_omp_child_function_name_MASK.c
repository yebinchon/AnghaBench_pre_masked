
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;


 int FUNC_0 (char*,char*,int ) ;
 int FUNC_1 (int ) ;
 size_t FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 char* FUNC_4 (int) ;
 int VAR_0 ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,int ,size_t) ;
 int FUNC_7 (char*,char*) ;
 int VAR_1 ;

__attribute__((used)) static tree
FUNC_8 (void)
{
  tree VAR_2 = FUNC_1 (VAR_0);
  size_t VAR_3 = FUNC_2 (VAR_2);
  char *VAR_4, *VAR_5;

  VAR_5 = FUNC_4 (VAR_3 + sizeof ("_omp_fn"));
  FUNC_6 (VAR_5, FUNC_3 (VAR_2), VAR_3);
  FUNC_7 (VAR_5 + VAR_3, "_omp_fn");

  VAR_5[VAR_3] = '.';



  FUNC_0 (VAR_4, VAR_5, VAR_1++);
  return FUNC_5 (VAR_4);
}
