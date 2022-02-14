
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct quoting_options {int style; int quote_these_too; } ;
typedef enum quoting_style { ____Placeholder_quoting_style } quoting_style ;


 int FUNC_0 (int ,int ,int) ;
 char* FUNC_1 (unsigned int,char const*,struct quoting_options*) ;

char *
FUNC_2 (unsigned int VAR_0, enum quoting_style VAR_1, char const *VAR_2)
{
  struct quoting_options VAR_3;
  VAR_3.style = VAR_1;
  FUNC_0 (VAR_3.quote_these_too, 0, sizeof VAR_3.quote_these_too);
  return FUNC_1 (VAR_0, VAR_2, &VAR_3);
}
