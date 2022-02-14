
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct azx_dev {int start_wallclk; int period_wallclk; unsigned int period_bytes; } ;
struct azx {size_t dev_index; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,char*) ;
 unsigned int FUNC_1 (struct azx*,struct azx_dev*,int) ;
 int FUNC_2 (struct azx*,int ) ;
 scalar_t__* VAR_1 ;

__attribute__((used)) static int FUNC_3(struct azx *VAR_2, struct azx_dev *VAR_3)
{
 u32 VAR_4;
 unsigned int VAR_5;

 VAR_4 = FUNC_2(VAR_2, VAR_0) - VAR_3->start_wallclk;
 if (VAR_4 < (VAR_3->period_wallclk * 2) / 3)
  return -1;

 VAR_5 = FUNC_1(VAR_2, VAR_3, 1);

 if (FUNC_0(!VAR_3->period_bytes,
        "hda-intel: zero azx_dev->period_bytes"))
  return -1;
 if (VAR_4 < (VAR_3->period_wallclk * 5) / 4 &&
     VAR_5 % VAR_3->period_bytes > VAR_3->period_bytes / 2)

  return VAR_1[VAR_2->dev_index] ? 0 : -1;
 VAR_3->start_wallclk += VAR_4;
 return 1;
}
