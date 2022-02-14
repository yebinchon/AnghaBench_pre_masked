
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kallsym_iter {unsigned int nameoff; char* module_name; size_t pos; int name; int type; int value; } ;


 int * VAR_0 ;
 unsigned int FUNC_0 (unsigned int,int ) ;
 int FUNC_1 (unsigned int) ;

__attribute__((used)) static unsigned long FUNC_2(struct kallsym_iter *VAR_1)
{
 unsigned VAR_2 = VAR_1->nameoff;

 VAR_1->module_name[0] = '\0';
 VAR_1->value = VAR_0[VAR_1->pos];

 VAR_1->type = FUNC_1(VAR_2);

 VAR_2 = FUNC_0(VAR_2, VAR_1->name);

 return VAR_2 - VAR_1->nameoff;
}
