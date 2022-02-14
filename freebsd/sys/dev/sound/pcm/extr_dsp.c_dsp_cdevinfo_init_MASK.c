
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snddev_info {int dsp_cdevinfo_pool; } ;
struct dsp_cdevinfo {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct snddev_info*) ;
 int FUNC_2 (struct snddev_info*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,struct dsp_cdevinfo*,int ) ;
 int VAR_4 ;
 struct dsp_cdevinfo* FUNC_5 (int,int ,int) ;

void
FUNC_6(struct snddev_info *VAR_5)
{
 struct dsp_cdevinfo *VAR_6;
 int VAR_7;

 FUNC_0(VAR_5 != ((void*)0), ("NULL snddev_info"));
 FUNC_1(VAR_5);
 FUNC_2(VAR_5);

 FUNC_3(&VAR_5->dsp_cdevinfo_pool);
 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
  VAR_6 = FUNC_5(sizeof(*VAR_6), VAR_1, VAR_2 | VAR_3);
  FUNC_4(&VAR_5->dsp_cdevinfo_pool, VAR_6, VAR_4);
 }
}
