
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct message {char* option; struct file_line* files; } ;
struct file_line {char* file; int lineno; struct file_line* next; } ;


 int FUNC_0 (char*,char*,...) ;
 int FUNC_1 (char) ;

__attribute__((used)) static void FUNC_2(struct message *VAR_0)
{
 struct file_line *VAR_1 = VAR_0->files;

 FUNC_1('\n');
 if (VAR_0->option != ((void*)0))
  FUNC_0("# %s:00000\n", VAR_0->option);

 FUNC_0("#: %s:%d", VAR_1->file, VAR_1->lineno);
 VAR_1 = VAR_1->next;

 while (VAR_1 != ((void*)0)) {
  FUNC_0(", %s:%d", VAR_1->file, VAR_1->lineno);
  VAR_1 = VAR_1->next;
 }

 FUNC_1('\n');
}
