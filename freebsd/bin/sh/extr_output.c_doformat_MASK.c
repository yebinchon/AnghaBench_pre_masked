
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;
struct output {int dummy; } ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (struct output*,int ) ;
 int FUNC_2 (int *,char const*,int ) ;

void
FUNC_3(struct output *VAR_1, const char *VAR_2, va_list VAR_3)
{
 FILE *VAR_4;

 if ((VAR_4 = FUNC_1(VAR_1, VAR_0)) != ((void*)0)) {
  FUNC_2(VAR_4, VAR_2, VAR_3);
  FUNC_0(VAR_4);
 }
}
