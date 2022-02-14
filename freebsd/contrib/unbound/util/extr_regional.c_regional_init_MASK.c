
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regional {char* data; scalar_t__ total_large; int * large_list; int * next; scalar_t__ first_size; scalar_t__ available; } ;


 int VAR_0 ;
 size_t FUNC_0 (int,int ) ;

__attribute__((used)) static void
FUNC_1(struct regional* VAR_1)
{
 size_t VAR_2 = FUNC_0(sizeof(struct regional), VAR_0);
 VAR_1->data = (char*)VAR_1 + VAR_2;
 VAR_1->available = VAR_1->first_size - VAR_2;
 VAR_1->next = ((void*)0);
 VAR_1->large_list = ((void*)0);
 VAR_1->total_large = 0;
}
