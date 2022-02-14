
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parser_temp {void* data; struct parser_temp* next; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (size_t) ;
 struct parser_temp* VAR_2 ;

__attribute__((used)) static void *
FUNC_1(size_t VAR_3)
{
 struct parser_temp *VAR_4;

 VAR_0;
 VAR_4 = FUNC_0(sizeof(*VAR_4));
 VAR_4->data = ((void*)0);
 VAR_4->next = VAR_2;
 VAR_2 = VAR_4;
 VAR_4->data = FUNC_0(VAR_3);
 VAR_1;
 return VAR_4->data;
}
