
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct atiixp_info {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct atiixp_info*,int ) ;
 int FUNC_2 (struct atiixp_info*,int ,int) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static void
FUNC_4(struct atiixp_info *VAR_6)
{
 uint32_t VAR_7, VAR_8;


 VAR_7 = FUNC_1(VAR_6, VAR_0);
 if (VAR_7 & VAR_5) {

  VAR_7 &= ~VAR_5;
  FUNC_2(VAR_6, VAR_0, VAR_7);


  FUNC_0(20);
 }


 VAR_7 = FUNC_1(VAR_6, VAR_0);
 VAR_7 |= VAR_3;
 FUNC_2(VAR_6, VAR_0, VAR_7);


 VAR_7 = FUNC_1(VAR_6, VAR_0);
 FUNC_0(20);


 VAR_7 = FUNC_1(VAR_6, VAR_0);
 VAR_7 &= ~VAR_3;
 FUNC_2(VAR_6, VAR_0, VAR_7);


 VAR_8 = 10;
 VAR_7 = FUNC_1(VAR_6, VAR_0);
 while (!(VAR_7 & VAR_1) && --VAR_8) {





  VAR_7 &= ~VAR_2;
  VAR_7 |= VAR_4;
  FUNC_2(VAR_6, VAR_0, VAR_7);


  VAR_7 = FUNC_1(VAR_6, VAR_0);
  FUNC_0(20);


  VAR_7 = FUNC_1(VAR_6, VAR_0);
  VAR_7 |= VAR_2;
  FUNC_2(VAR_6, VAR_0, VAR_7);


  VAR_7 = FUNC_1(VAR_6, VAR_0);
 }

 if (VAR_8 == 0)
  FUNC_3(VAR_6->dev, "giving up aclink reset\n");






 VAR_7 = FUNC_1(VAR_6, VAR_0);
 VAR_7 |= VAR_4 | VAR_2;
 FUNC_2(VAR_6, VAR_0, VAR_7);
}
