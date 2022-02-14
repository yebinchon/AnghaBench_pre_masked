
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ali {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_ali*,int ) ;
 unsigned long FUNC_1 (int ) ;
 int FUNC_2 (unsigned long,int ) ;

__attribute__((used)) static void FUNC_3(struct snd_ali *VAR_1,
        unsigned int VAR_2)
{
 unsigned long VAR_3;

 VAR_3 = FUNC_1(FUNC_0(VAR_1, VAR_0));
 VAR_3 |= 1 << (VAR_2 & 0x0000001f);
 FUNC_2(VAR_3, FUNC_0(VAR_1, VAR_0));
}
