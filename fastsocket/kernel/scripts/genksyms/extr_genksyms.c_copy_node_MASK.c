
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct string_list {int tag; int string; } ;


 struct string_list* FUNC_0 (int) ;
 int FUNC_1 (int ) ;

struct string_list *FUNC_2(struct string_list *VAR_0)
{
 struct string_list *VAR_1;

 VAR_1 = FUNC_0(sizeof(*VAR_1));
 VAR_1->string = FUNC_1(VAR_0->string);
 VAR_1->tag = VAR_0->tag;

 return VAR_1;
}
