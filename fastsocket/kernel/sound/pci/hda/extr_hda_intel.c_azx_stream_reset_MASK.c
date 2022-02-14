
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct azx_dev {scalar_t__* posbuf; } ;
struct azx {int dummy; } ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char FUNC_0 (struct azx_dev*,int ) ;
 int FUNC_1 (struct azx_dev*,int ,unsigned char) ;
 int FUNC_2 (struct azx*,struct azx_dev*) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct azx *VAR_2, struct azx_dev *VAR_3)
{
 unsigned char VAR_4;
 int VAR_5;

 FUNC_2(VAR_2, VAR_3);

 FUNC_1(VAR_3, VAR_0, FUNC_0(VAR_3, VAR_0) |
        VAR_1);
 FUNC_3(3);
 VAR_5 = 300;
 while (!((VAR_4 = FUNC_0(VAR_3, VAR_0)) & VAR_1) &&
        --VAR_5)
  ;
 VAR_4 &= ~VAR_1;
 FUNC_1(VAR_3, VAR_0, VAR_4);
 FUNC_3(3);

 VAR_5 = 300;

 while (((VAR_4 = FUNC_0(VAR_3, VAR_0)) & VAR_1) &&
        --VAR_5)
  ;


 *VAR_3->posbuf = 0;
}
