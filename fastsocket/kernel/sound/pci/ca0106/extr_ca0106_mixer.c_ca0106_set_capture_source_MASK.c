
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ca0106 {unsigned int capture_source; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_ca0106*,int ,int ) ;
 int FUNC_1 (struct snd_ca0106*,int ,int ,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct snd_ca0106 *VAR_1)
{
 unsigned int VAR_2 = VAR_1->capture_source;
 unsigned int VAR_3, VAR_4;
 VAR_3 = (VAR_2 << 28) | (VAR_2 << 24) | (VAR_2 << 20) | (VAR_2 << 16);
 VAR_4 = FUNC_0(VAR_1, VAR_0, 0) & 0xffff;
 FUNC_1(VAR_1, VAR_0, 0, VAR_3 | VAR_4);
}
