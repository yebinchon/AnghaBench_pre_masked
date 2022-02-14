
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snddev_info {int dsp_cdevinfo_pool; } ;
struct dsp_cdevinfo {int dummy; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int FUNC_1 (struct snddev_info*) ;
 int FUNC_2 (struct snddev_info*) ;
 struct dsp_cdevinfo* FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct dsp_cdevinfo* FUNC_5 (struct dsp_cdevinfo*,int ) ;
 int FUNC_6 (struct dsp_cdevinfo*,int ) ;
 int VAR_1 ;

void
FUNC_7(struct snddev_info *VAR_2)
{
 struct dsp_cdevinfo *VAR_3, *VAR_4;

 FUNC_0(VAR_2 != ((void*)0), ("NULL snddev_info"));
 FUNC_1(VAR_2);
 FUNC_2(VAR_2);

 VAR_3 = FUNC_3(&VAR_2->dsp_cdevinfo_pool);
 while (VAR_3 != ((void*)0)) {
  VAR_4 = FUNC_5(VAR_3, VAR_1);
  FUNC_6(VAR_3, VAR_0);
  VAR_3 = VAR_4;
 }
 FUNC_4(&VAR_2->dsp_cdevinfo_pool);
}
