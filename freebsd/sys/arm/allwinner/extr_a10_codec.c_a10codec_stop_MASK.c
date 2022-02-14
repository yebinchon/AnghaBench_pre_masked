
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct a10codec_info {TYPE_1__* cfg; } ;
struct a10codec_chinfo {int dir; int dmachan; int dmac; struct a10codec_info* parent; } ;
struct TYPE_2__ {int (* mute ) (struct a10codec_info*,int,int ) ;} ;


 int FUNC_0 (struct a10codec_info*) ;
 int FUNC_1 (struct a10codec_info*) ;
 int FUNC_2 (struct a10codec_info*,int ,int ) ;
 int VAR_0 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct a10codec_info*,int,int ) ;

__attribute__((used)) static void
FUNC_5(struct a10codec_chinfo *VAR_1)
{
 struct a10codec_info *VAR_2 = VAR_1->parent;


 FUNC_3(VAR_1->dmac, VAR_1->dmachan);

 VAR_2->cfg->mute(VAR_2, 1, VAR_1->dir);

 if (VAR_1->dir == VAR_0) {

  FUNC_2(VAR_2, FUNC_1(VAR_2), 0);
 } else {

  FUNC_2(VAR_2, FUNC_0(VAR_2), 0);
 }
}
