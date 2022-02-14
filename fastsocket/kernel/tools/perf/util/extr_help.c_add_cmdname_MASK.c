
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmdnames {scalar_t__ cnt; struct cmdname** names; int alloc; } ;
struct cmdname {size_t len; scalar_t__* name; } ;


 int FUNC_0 (struct cmdname**,scalar_t__,int ) ;
 struct cmdname* FUNC_1 (int) ;
 int FUNC_2 (scalar_t__*,char const*,size_t) ;

void FUNC_3(struct cmdnames *VAR_0, const char *VAR_1, size_t VAR_2)
{
 struct cmdname *VAR_3 = FUNC_1(sizeof(*VAR_3) + VAR_2 + 1);

 VAR_3->len = VAR_2;
 FUNC_2(VAR_3->name, VAR_1, VAR_2);
 VAR_3->name[VAR_2] = 0;

 FUNC_0(VAR_0->names, VAR_0->cnt + 1, VAR_0->alloc);
 VAR_0->names[VAR_0->cnt++] = VAR_3;
}
