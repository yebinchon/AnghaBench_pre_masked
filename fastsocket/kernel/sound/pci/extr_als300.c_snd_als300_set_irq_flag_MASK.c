
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct snd_als300 {int revision; scalar_t__ chip_type; int port; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct snd_als300 *VAR_4, int VAR_5)
{
 u32 VAR_6 = FUNC_2(VAR_4->port, VAR_3);
 FUNC_0();




 if (((VAR_4->revision > 5 || VAR_4->chip_type == VAR_0) ^
      (VAR_5 == VAR_1)) == 0)
  VAR_6 |= VAR_2;
 else
  VAR_6 &= ~VAR_2;
 FUNC_3(VAR_4->port, VAR_3, VAR_6);
 FUNC_1();
}
