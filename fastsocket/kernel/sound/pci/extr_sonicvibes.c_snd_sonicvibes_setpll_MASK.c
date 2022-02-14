
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sonicvibes {int reg_lock; } ;


 int FUNC_0 (struct sonicvibes*,unsigned char,unsigned int) ;
 int FUNC_1 (unsigned int,unsigned int*,unsigned int*,unsigned int*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct sonicvibes * VAR_0,
                                  unsigned char VAR_1,
                                  unsigned int VAR_2)
{
 unsigned long VAR_3;
 unsigned int VAR_4, VAR_5, VAR_6;

 FUNC_1(VAR_2, &VAR_4, &VAR_5, &VAR_6);
 if (VAR_0 != ((void*)0)) {
  FUNC_2(&VAR_0->reg_lock, VAR_3);
  FUNC_0(VAR_0, VAR_1, VAR_5);
  FUNC_0(VAR_0, VAR_1 + 1, VAR_4 | VAR_6);
  FUNC_3(&VAR_0->reg_lock, VAR_3);
 }
}
