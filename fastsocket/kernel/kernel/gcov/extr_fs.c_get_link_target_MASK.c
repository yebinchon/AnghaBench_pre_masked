
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gcov_link {scalar_t__ dir; int ext; } ;


 scalar_t__ VAR_0 ;
 char* FUNC_0 (int *,char const*,int ) ;
 int * VAR_1 ;
 int * VAR_2 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (char const*,int *,int) ;

__attribute__((used)) static char *FUNC_3(const char *VAR_3, const struct gcov_link *VAR_4)
{
 const char *VAR_5;
 char *VAR_6;

 if (FUNC_2(VAR_3, VAR_1, FUNC_1(VAR_1)) == 0) {
  VAR_5 = VAR_3 + FUNC_1(VAR_1) + 1;
  if (VAR_4->dir == VAR_0)
   VAR_6 = FUNC_0(VAR_2, VAR_5, VAR_4->ext);
  else
   VAR_6 = FUNC_0(VAR_1, VAR_5, VAR_4->ext);
 } else {

  VAR_6 = FUNC_0(((void*)0), VAR_3, VAR_4->ext);
 }

 return VAR_6;
}
