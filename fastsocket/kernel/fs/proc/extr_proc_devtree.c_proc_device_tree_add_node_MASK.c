
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct property {char* name; struct property* next; } ;
struct proc_dir_entry {int dummy; } ;
struct device_node {char* full_name; struct property* properties; } ;


 struct proc_dir_entry* FUNC_0 (struct proc_dir_entry*,struct property*,char const*) ;
 scalar_t__ FUNC_1 (struct proc_dir_entry*,char const*) ;
 char* FUNC_2 (struct device_node*,struct proc_dir_entry*,char const*) ;
 struct device_node* FUNC_3 (struct device_node*,struct device_node*) ;
 int FUNC_4 (struct device_node*) ;
 struct proc_dir_entry* FUNC_5 (char const*,struct proc_dir_entry*) ;
 int FUNC_6 (struct device_node*,struct proc_dir_entry*) ;
 char* FUNC_7 (char*,char) ;

void FUNC_8(struct device_node *VAR_0,
          struct proc_dir_entry *VAR_1)
{
 struct property *VAR_2;
 struct proc_dir_entry *VAR_3;
 struct device_node *VAR_4;
 const char *VAR_5;

 FUNC_6(VAR_0, VAR_1);
 for (VAR_4 = ((void*)0); (VAR_4 = FUNC_3(VAR_0, VAR_4));) {

  VAR_5 = FUNC_7(VAR_4->full_name, '/');
  if (!VAR_5)
   VAR_5 = VAR_4->full_name;
  else
   ++VAR_5;

  if (FUNC_1(VAR_1, VAR_5))
   VAR_5 = FUNC_2(VAR_0, VAR_1, VAR_5);

  VAR_3 = FUNC_5(VAR_5, VAR_1);
  if (VAR_3 == ((void*)0))
   break;
  FUNC_8(VAR_4, VAR_3);
 }
 FUNC_4(VAR_4);

 for (VAR_2 = VAR_0->properties; VAR_2 != ((void*)0); VAR_2 = VAR_2->next) {
  VAR_5 = VAR_2->name;

  if (FUNC_1(VAR_1, VAR_5))
   VAR_5 = FUNC_2(VAR_0, VAR_1, VAR_5);

  VAR_3 = FUNC_0(VAR_1, VAR_2, VAR_5);
  if (VAR_3 == ((void*)0))
   break;
 }
}
