
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct snd_ac97 {int num; } ;
struct aaci {int maincr; scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct aaci *VAR_6, struct snd_ac97 *VAR_7)
{
 u32 VAR_8, VAR_9 = VAR_6->maincr | FUNC_0(VAR_7->num);




 VAR_8 = FUNC_1(VAR_6->base + VAR_3);
 if (VAR_8 & VAR_5)
  FUNC_1(VAR_6->base + VAR_2);
 if (VAR_8 & VAR_4)
  FUNC_1(VAR_6->base + VAR_1);

 FUNC_2(VAR_9, VAR_6->base + VAR_0);
}
