
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_trident {scalar_t__ device; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct snd_trident*,int ) ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (unsigned int,int ) ;

__attribute__((used)) static void FUNC_3(struct snd_trident * VAR_5)
{
 unsigned int VAR_6;

 VAR_6 = FUNC_1(FUNC_0(VAR_5, VAR_3));
 VAR_6 |= VAR_1;
 VAR_6 |= VAR_2;
 if (VAR_5->device == VAR_4)
  VAR_6 |= VAR_0;
 FUNC_2(VAR_6, FUNC_0(VAR_5, VAR_3));
}
