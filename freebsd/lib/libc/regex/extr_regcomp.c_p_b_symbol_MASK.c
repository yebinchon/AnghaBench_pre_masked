
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wint_t ;
struct parse {int dummy; } ;


 int FUNC_0 (char,char) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (struct parse*,char) ;

__attribute__((used)) static wint_t
FUNC_5(struct parse *VAR_2)
{
 wint_t VAR_3;

 (void)FUNC_2(FUNC_1(), VAR_0);
 if (!FUNC_0('[', '.'))
  return(FUNC_3());


 VAR_3 = FUNC_4(VAR_2, '.');
 (void)FUNC_2(FUNC_0('.', ']'), VAR_1);
 return(VAR_3);
}
