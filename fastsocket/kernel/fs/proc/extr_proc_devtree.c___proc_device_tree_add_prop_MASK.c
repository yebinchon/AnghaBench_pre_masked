
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct property {scalar_t__ length; } ;
struct proc_dir_entry {scalar_t__ size; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct proc_dir_entry* FUNC_0 (char const*,int ,struct proc_dir_entry*,int ,struct property*) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (char const*,char*,int) ;

__attribute__((used)) static struct proc_dir_entry *
FUNC_2(struct proc_dir_entry *VAR_3, struct property *VAR_4,
  const char *VAR_5)
{
 struct proc_dir_entry *VAR_6;





 VAR_6 = FUNC_0(VAR_5,
         FUNC_1(VAR_5, "security-", 9)
         ? VAR_0 : VAR_1, VAR_3,
         VAR_2, VAR_4);
 if (VAR_6 == ((void*)0))
  return ((void*)0);

 if (!FUNC_1(VAR_5, "security-", 9))
  VAR_6->size = 0;
 else
  VAR_6->size = VAR_4->length;

 return VAR_6;
}
