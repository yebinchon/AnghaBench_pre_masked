
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct emu_pcm_info {int dev; int bufsz; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_1(struct emu_pcm_info *VAR_3)
{
 VAR_3->bufsz = FUNC_0(VAR_3->dev, VAR_0, VAR_2, VAR_1);
 return (0);
}
