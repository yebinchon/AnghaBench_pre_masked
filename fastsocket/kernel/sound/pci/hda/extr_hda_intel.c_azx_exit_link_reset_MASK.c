
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct azx {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct azx*,int ) ;
 int FUNC_1 (struct azx*,int ,int) ;
 unsigned long VAR_2 ;
 unsigned long FUNC_2 (int) ;
 scalar_t__ FUNC_3 (unsigned long,unsigned long) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static void FUNC_5(struct azx *VAR_3)
{
 unsigned long VAR_4;

 FUNC_1(VAR_3, VAR_0, FUNC_0(VAR_3, VAR_0) | VAR_1);

 VAR_4 = VAR_2 + FUNC_2(100);
 while (!FUNC_0(VAR_3, VAR_0) &&
   FUNC_3(VAR_2, VAR_4))
  FUNC_4(500, 1000);
}
