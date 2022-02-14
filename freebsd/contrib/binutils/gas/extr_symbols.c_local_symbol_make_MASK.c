
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int valueT ;
struct local_symbol {char* lsy_name; int lsy_value; int lsy_section; int * lsy_marker; } ;
typedef int segT ;
typedef int fragS ;
typedef int PTR ;


 int FUNC_0 (int ,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct local_symbol*,int *) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int *,int) ;
 char* FUNC_3 (char const*) ;

__attribute__((used)) static struct local_symbol *
FUNC_4 (const char *VAR_3, segT VAR_4, valueT VAR_5, fragS *VAR_6)
{
  char *VAR_7;
  struct local_symbol *VAR_8;

  ++VAR_1;

  VAR_7 = FUNC_3 (VAR_3);

  VAR_8 = (struct local_symbol *) FUNC_2 (&VAR_2, sizeof *VAR_8);
  VAR_8->lsy_marker = ((void*)0);
  VAR_8->lsy_name = VAR_7;
  VAR_8->lsy_section = VAR_4;
  FUNC_1 (VAR_8, VAR_6);
  VAR_8->lsy_value = VAR_5;

  FUNC_0 (VAR_0, VAR_7, (PTR) VAR_8);

  return VAR_8;
}
