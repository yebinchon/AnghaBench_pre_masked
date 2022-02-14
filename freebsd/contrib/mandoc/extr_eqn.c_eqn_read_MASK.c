
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eqn_node {char* data; int sz; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char**,char*,char*,char const*) ;
 char* FUNC_2 (char const*) ;
 int FUNC_3 (char const*) ;

void
FUNC_4(struct eqn_node *VAR_0, const char *VAR_1)
{
 char *VAR_2;

 if (VAR_0->data == ((void*)0)) {
  VAR_0->sz = FUNC_3(VAR_1);
  VAR_0->data = FUNC_2(VAR_1);
 } else {
  VAR_0->sz = FUNC_1(&VAR_2, "%s %s", VAR_0->data, VAR_1);
  FUNC_0(VAR_0->data);
  VAR_0->data = VAR_2;
 }
 VAR_0->sz += 1;
}
