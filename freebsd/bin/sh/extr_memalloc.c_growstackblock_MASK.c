
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stack_block {struct stack_block* prev; } ;
typedef int pointer ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_1 (struct stack_block*) ;
 struct stack_block* FUNC_2 (int ,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,char*,int) ;
 char* VAR_3 ;
 int VAR_4 ;
 char* VAR_5 ;
 struct stack_block* VAR_6 ;
 char* FUNC_5 (int) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static void
FUNC_7(int VAR_7)
{
 char *VAR_8;
 int VAR_9;
 char *VAR_10;
 int VAR_11;
 struct stack_block *VAR_12;
 struct stack_block *VAR_13;

 if (VAR_7 < VAR_4)
  VAR_7 = VAR_4;
 if ((unsigned int)VAR_7 >=
     VAR_2 / 2 - FUNC_0(sizeof(struct stack_block)))
  FUNC_3("Out of space");
 VAR_7 += VAR_4;
 VAR_7 += FUNC_0(sizeof(struct stack_block));
 VAR_9 = 512;
 while (VAR_9 < VAR_7)
  VAR_9 <<= 1;
 VAR_10 = VAR_5;
 VAR_11 = VAR_4;

 if (VAR_6 != ((void*)0) && VAR_5 == FUNC_1(VAR_6)) {
  VAR_0;
  VAR_13 = VAR_6;
  VAR_6 = VAR_13->prev;
  VAR_12 = FUNC_2((pointer)VAR_13, VAR_9);
  VAR_12->prev = VAR_6;
  VAR_6 = VAR_12;
  VAR_5 = FUNC_1(VAR_12);
  VAR_4 = VAR_9 - (VAR_5 - (char*)VAR_12);
  VAR_3 = VAR_5 + VAR_4;
  VAR_1;
 } else {
  VAR_9 -= FUNC_0(sizeof(struct stack_block));
  VAR_8 = FUNC_5(VAR_9);
  if (VAR_11 != 0)
   FUNC_4(VAR_8, VAR_10, VAR_11);
  FUNC_6(VAR_8);
 }
}
