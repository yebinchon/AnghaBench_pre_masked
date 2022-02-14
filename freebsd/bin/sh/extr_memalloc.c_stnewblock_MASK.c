
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stack_block {struct stack_block* prev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_1 (struct stack_block*) ;
 struct stack_block* FUNC_2 (int) ;
 char* VAR_3 ;
 int VAR_4 ;
 char* VAR_5 ;
 struct stack_block* VAR_6 ;

__attribute__((used)) static void
FUNC_3(int VAR_7)
{
 struct stack_block *VAR_8;
 int VAR_9;

 if (VAR_7 < VAR_2)
  VAR_7 = VAR_2;

 VAR_9 = FUNC_0(sizeof(struct stack_block)) + FUNC_0(VAR_7);

 VAR_0;
 VAR_8 = FUNC_2(VAR_9);
 VAR_8->prev = VAR_6;
 VAR_5 = FUNC_1(VAR_8);
 VAR_4 = VAR_9 - (VAR_5 - (char*)VAR_8);
 VAR_3 = VAR_5 + VAR_4;
 VAR_6 = VAR_8;
 VAR_1;
}
