
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,unsigned char*,size_t) ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int * VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(unsigned char *VAR_7, char VAR_8)
{





 if (VAR_2 >= VAR_1)
  if (!VAR_5)
   FUNC_2();



 if (!VAR_8 && VAR_2 >= VAR_1 && !FUNC_3(&VAR_6)) {



  FUNC_0(&VAR_6);
 }
 if (VAR_2 >= VAR_1)
 {
  return 0;


 }
 FUNC_1(&VAR_4[VAR_3 * VAR_0], VAR_7, VAR_0);

 VAR_3 = (VAR_3 + 1) % VAR_1;
 VAR_2++;

 return 1;
}
