
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hsearch_data {struct __hsearch* __hsearch; } ;
struct __hsearch {struct __hsearch* entries; } ;


 int FUNC_0 (struct __hsearch*) ;

void
FUNC_1(struct hsearch_data *VAR_0)
{
 struct __hsearch *VAR_1;


 VAR_1 = VAR_0->__hsearch;
 FUNC_0(VAR_1->entries);
 FUNC_0(VAR_1);
}
