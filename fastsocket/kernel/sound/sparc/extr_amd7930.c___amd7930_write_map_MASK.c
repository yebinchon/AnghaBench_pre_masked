
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amd7930_map {int gx; int gr; int stgr; int ger; int mmr1; int mmr2; } ;
struct snd_amd7930 {scalar_t__ regs; struct amd7930_map map; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct snd_amd7930 *VAR_8)
{
 struct amd7930_map *VAR_9 = &VAR_8->map;

 FUNC_0(VAR_4, VAR_8->regs + VAR_0);
 FUNC_0(((VAR_9->gx >> 0) & 0xff), VAR_8->regs + VAR_1);
 FUNC_0(((VAR_9->gx >> 8) & 0xff), VAR_8->regs + VAR_1);

 FUNC_0(VAR_3, VAR_8->regs + VAR_0);
 FUNC_0(((VAR_9->gr >> 0) & 0xff), VAR_8->regs + VAR_1);
 FUNC_0(((VAR_9->gr >> 8) & 0xff), VAR_8->regs + VAR_1);

 FUNC_0(VAR_7, VAR_8->regs + VAR_0);
 FUNC_0(((VAR_9->stgr >> 0) & 0xff), VAR_8->regs + VAR_1);
 FUNC_0(((VAR_9->stgr >> 8) & 0xff), VAR_8->regs + VAR_1);

 FUNC_0(VAR_2, VAR_8->regs + VAR_0);
 FUNC_0(((VAR_9->ger >> 0) & 0xff), VAR_8->regs + VAR_1);
 FUNC_0(((VAR_9->ger >> 8) & 0xff), VAR_8->regs + VAR_1);

 FUNC_0(VAR_5, VAR_8->regs + VAR_0);
 FUNC_0(VAR_9->mmr1, VAR_8->regs + VAR_1);

 FUNC_0(VAR_6, VAR_8->regs + VAR_0);
 FUNC_0(VAR_9->mmr2, VAR_8->regs + VAR_1);
}
