
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kallsym_iter {char* name; int pos; int nameoff; } ;
typedef int loff_t ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct kallsym_iter *VAR_0, loff_t VAR_1)
{
 VAR_0->name[0] = '\0';
 VAR_0->nameoff = FUNC_0(VAR_1);
 VAR_0->pos = VAR_1;
}
