
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dl_list {int dummy; } ;
struct cli_txt_entry {int dummy; } ;


 int FUNC_0 (struct cli_txt_entry*) ;
 struct cli_txt_entry* FUNC_1 (struct dl_list*,char const*) ;

void FUNC_2(struct dl_list *VAR_0, const char *VAR_1)
{
 struct cli_txt_entry *VAR_2;

 VAR_2 = FUNC_1(VAR_0, VAR_1);
 if (VAR_2)
  FUNC_0(VAR_2);
}
