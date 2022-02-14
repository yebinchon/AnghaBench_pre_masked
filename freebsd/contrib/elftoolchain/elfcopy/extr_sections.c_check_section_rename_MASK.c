
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct section {char* name; char* newname; scalar_t__ loadable; scalar_t__ pseudo; } ;
struct sec_action {char* newname; scalar_t__ rename; } ;
struct elfcopy {char* prefix_alloc; char* prefix_sec; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 struct sec_action* FUNC_1 (struct elfcopy*,char*,int ) ;
 char* FUNC_2 (size_t) ;
 int FUNC_3 (char*,size_t,char*,char*,char*) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static void
FUNC_6(struct elfcopy *VAR_1, struct section *VAR_2)
{
 struct sec_action *VAR_3;
 char *VAR_4;
 size_t VAR_5;

 if (VAR_2->pseudo)
  return;

 VAR_3 = FUNC_1(VAR_1, VAR_2->name, 0);
 if (VAR_3 != ((void*)0) && VAR_3->rename)
  VAR_2->name = VAR_3->newname;

 if (!FUNC_4(VAR_2->name, ".symtab") ||
     !FUNC_4(VAR_2->name, ".strtab") ||
     !FUNC_4(VAR_2->name, ".shstrtab"))
  return;

 VAR_4 = ((void*)0);
 if (VAR_2->loadable && VAR_1->prefix_alloc != ((void*)0))
  VAR_4 = VAR_1->prefix_alloc;
 else if (VAR_1->prefix_sec != ((void*)0))
  VAR_4 = VAR_1->prefix_sec;

 if (VAR_4 != ((void*)0)) {
  VAR_5 = FUNC_5(VAR_2->name) + FUNC_5(VAR_4) + 1;
  if ((VAR_2->newname = FUNC_2(VAR_5)) == ((void*)0))
   FUNC_0(VAR_0, "malloc failed");
  FUNC_3(VAR_2->newname, VAR_5, "%s%s", VAR_4, VAR_2->name);
  VAR_2->name = VAR_2->newname;
 }
}
