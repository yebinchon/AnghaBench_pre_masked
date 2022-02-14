
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dl_list {int dummy; } ;
struct cli_txt_entry {int list; int * txt; } ;


 struct cli_txt_entry* FUNC_0 (struct dl_list*,char const*) ;
 int FUNC_1 (struct dl_list*,int *) ;
 int FUNC_2 (struct cli_txt_entry*) ;
 int * FUNC_3 (char const*) ;
 struct cli_txt_entry* FUNC_4 (int) ;

int FUNC_5(struct dl_list *VAR_0, const char *VAR_1)
{
 struct cli_txt_entry *VAR_2;

 VAR_2 = FUNC_0(VAR_0, VAR_1);
 if (VAR_2)
  return 0;
 VAR_2 = FUNC_4(sizeof(*VAR_2));
 if (VAR_2 == ((void*)0))
  return -1;
 VAR_2->txt = FUNC_3(VAR_1);
 if (VAR_2->txt == ((void*)0)) {
  FUNC_2(VAR_2);
  return -1;
 }
 FUNC_1(VAR_0, &VAR_2->list);
 return 0;
}
