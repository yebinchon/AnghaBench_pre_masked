
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (unsigned long,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (char*,unsigned long) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(unsigned long VAR_4)
{
 int VAR_5;

 FUNC_2(1, FUNC_0(VAR_4, VAR_3));
 FUNC_4(10);
 FUNC_2(0, FUNC_0(VAR_4, VAR_3));
 FUNC_4(30);
 for (VAR_5 = 0; VAR_5 < 1000 && !(FUNC_1(FUNC_0(VAR_4, VAR_0)) & 0x80); VAR_5++);
 if (FUNC_1(FUNC_0(VAR_4, VAR_2)) != 0xaa) {
  FUNC_3("sb_reset: failed at 0x%lx!!!\n", VAR_4);
  return -VAR_1;
 }
 return 0;
}
