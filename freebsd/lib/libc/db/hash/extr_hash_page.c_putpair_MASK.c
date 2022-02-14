
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int16_t ;
struct TYPE_4__ {int size; int data; } ;
typedef TYPE_1__ DBT ;


 int FUNC_0 (int*) ;
 int FUNC_1 (char*,int ,int) ;

__attribute__((used)) static void
FUNC_2(char *VAR_0, const DBT *VAR_1, const DBT *VAR_2)
{
 u_int16_t *VAR_3, VAR_4, VAR_5;

 VAR_3 = (u_int16_t *)VAR_0;


 VAR_4 = VAR_3[0];

 VAR_5 = FUNC_0(VAR_3) - VAR_1->size;
 FUNC_1(VAR_0 + VAR_5, VAR_1->data, VAR_1->size);
 VAR_3[++VAR_4] = VAR_5;


 VAR_5 -= VAR_2->size;
 FUNC_1(VAR_0 + VAR_5, VAR_2->data, VAR_2->size);
 VAR_3[++VAR_4] = VAR_5;


 VAR_3[0] = VAR_4;
 VAR_3[VAR_4 + 1] = VAR_5 - ((VAR_4 + 3) * sizeof(u_int16_t));
 VAR_3[VAR_4 + 2] = VAR_5;
}
