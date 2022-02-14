
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct property {char* name; int deleted; } ;


 int FUNC_0 (struct property*,int ,int) ;
 struct property* FUNC_1 (int) ;

struct property *FUNC_2(char *VAR_0)
{
 struct property *VAR_1 = FUNC_1(sizeof(*VAR_1));

 FUNC_0(VAR_1, 0, sizeof(*VAR_1));

 VAR_1->name = VAR_0;
 VAR_1->deleted = 1;

 return VAR_1;
}
