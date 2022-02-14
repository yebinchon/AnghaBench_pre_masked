
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct data {int dummy; } ;
struct property {struct data val; } ;
struct node {int dummy; } ;


 int FUNC_0 (struct node*,struct property*) ;
 struct property* FUNC_1 (char*,struct data) ;
 struct data FUNC_2 (struct data,void const*,int) ;
 struct data VAR_0 ;
 struct property* FUNC_3 (struct node*,char*) ;

void FUNC_4(struct node *VAR_1,
        char *VAR_2, const void *VAR_3, int VAR_4)
{
 struct data VAR_5;
 struct property *VAR_6;

 VAR_6 = FUNC_3(VAR_1, VAR_2);
 if (VAR_6) {
  VAR_5 = FUNC_2(VAR_6->val, VAR_3, VAR_4);
  VAR_6->val = VAR_5;
 } else {
  VAR_5 = FUNC_2(VAR_0, VAR_3, VAR_4);
  VAR_6 = FUNC_1(VAR_2, VAR_5);
  FUNC_0(VAR_1, VAR_6);
 }
}
