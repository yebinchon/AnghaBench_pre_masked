
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sonicvibes {unsigned char format; int reg_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sonicvibes*,int ) ;
 unsigned char FUNC_1 (int ) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(struct sonicvibes * VAR_4,
                                  unsigned char VAR_5,
                                  unsigned char VAR_6)
{
 unsigned long VAR_7;

 FUNC_3(&VAR_4->reg_lock, VAR_7);
 FUNC_2(VAR_3 | VAR_2, FUNC_0(VAR_4, VAR_1));
 if (VAR_5) {
  VAR_4->format = FUNC_1(FUNC_0(VAR_4, VAR_0));
  FUNC_5(10);
 }
 VAR_4->format = (VAR_4->format & VAR_5) | VAR_6;
 FUNC_2(VAR_4->format, FUNC_0(VAR_4, VAR_0));
 FUNC_5(10);
 FUNC_2(0, FUNC_0(VAR_4, VAR_1));
 FUNC_5(10);
 FUNC_4(&VAR_4->reg_lock, VAR_7);
}
