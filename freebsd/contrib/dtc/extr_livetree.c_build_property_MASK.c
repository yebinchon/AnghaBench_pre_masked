
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct data {int dummy; } ;
struct property {char* name; struct data val; } ;


 int FUNC_0 (struct property*,int ,int) ;
 struct property* FUNC_1 (int) ;

struct property *FUNC_2(char *VAR_0, struct data VAR_1)
{
 struct property *VAR_2 = FUNC_1(sizeof(*VAR_2));

 FUNC_0(VAR_2, 0, sizeof(*VAR_2));

 VAR_2->name = VAR_0;
 VAR_2->val = VAR_1;

 return VAR_2;
}
