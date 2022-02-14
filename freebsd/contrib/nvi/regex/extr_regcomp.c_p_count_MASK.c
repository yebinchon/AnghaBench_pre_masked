
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parse {int dummy; } ;
typedef int UCHAR_T ;


 int VAR_0 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 int VAR_1 ;
 int FUNC_4 (int,int ) ;

__attribute__((used)) static int
FUNC_5(struct parse *VAR_2)
{
 int VAR_3 = 0;
 int VAR_4 = 0;

 while (FUNC_2() && FUNC_1((UCHAR_T)FUNC_3()) && VAR_3 <= VAR_0) {
  VAR_3 = VAR_3*10 + (FUNC_0() - '0');
  VAR_4++;
 }

 (void)FUNC_4(VAR_4 > 0 && VAR_3 <= VAR_0, VAR_1);
 return(VAR_3);
}
