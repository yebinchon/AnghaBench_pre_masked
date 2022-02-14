
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct a10codec_info {int dmat; } ;
struct a10codec_chinfo {int dmamap; int dmaaddr; int dmachan; int dmac; struct a10codec_info* parent; } ;
typedef int kobj_t ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static int
FUNC_3(kobj_t VAR_0, void *VAR_1)
{
 struct a10codec_chinfo *VAR_2 = VAR_1;
 struct a10codec_info *VAR_3 = VAR_2->parent;

 FUNC_0(VAR_2->dmac, VAR_2->dmachan);
 FUNC_1(VAR_3->dmat, VAR_2->dmamap);
 FUNC_2(VAR_3->dmat, VAR_2->dmaaddr, VAR_2->dmamap);

 return (0);
}
