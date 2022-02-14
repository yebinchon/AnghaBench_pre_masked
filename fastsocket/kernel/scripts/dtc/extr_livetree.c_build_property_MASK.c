
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct data {int dummy; } ;
struct property {char* name; char* label; int * next; struct data val; } ;


 struct property* FUNC_0 (int) ;

struct property *FUNC_1(char *VAR_0, struct data VAR_1, char *VAR_2)
{
 struct property *VAR_3 = FUNC_0(sizeof(*VAR_3));

 VAR_3->name = VAR_0;
 VAR_3->val = VAR_1;

 VAR_3->next = ((void*)0);

 VAR_3->label = VAR_2;

 return VAR_3;
}
