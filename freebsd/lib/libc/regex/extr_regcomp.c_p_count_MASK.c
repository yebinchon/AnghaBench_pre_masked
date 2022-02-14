
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uch ;
struct parse {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 int VAR_1 ;
 int FUNC_3 (int,int ) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(struct parse *VAR_2)
{
 int VAR_3 = 0;
 int VAR_4 = 0;

 while (FUNC_1() && FUNC_4((uch)FUNC_2()) && VAR_3 <= VAR_0) {
  VAR_3 = VAR_3*10 + (FUNC_0() - '0');
  VAR_4++;
 }

 (void)FUNC_3(VAR_4 > 0 && VAR_3 <= VAR_0, VAR_1);
 return(VAR_3);
}
