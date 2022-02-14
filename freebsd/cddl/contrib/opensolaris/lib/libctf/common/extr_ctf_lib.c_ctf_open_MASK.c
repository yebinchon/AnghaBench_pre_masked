
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ctf_file_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int * FUNC_1 (int,int*) ;
 int VAR_1 ;
 int FUNC_2 (char const*,int ) ;

ctf_file_t *
FUNC_3(const char *VAR_2, int *VAR_3)
{
 ctf_file_t *VAR_4;
 int VAR_5;

 if ((VAR_5 = FUNC_2(VAR_2, VAR_0)) == -1) {
  if (VAR_3 != ((void*)0))
   *VAR_3 = VAR_1;
  return (((void*)0));
 }

 VAR_4 = FUNC_1(VAR_5, VAR_3);
 (void) FUNC_0(VAR_5);
 return (VAR_4);
}
