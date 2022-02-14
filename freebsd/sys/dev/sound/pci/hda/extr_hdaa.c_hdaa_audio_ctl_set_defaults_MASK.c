
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdaa_pcm_devinfo {int ossmask; int* maxamp; int* minamp; int mixer; int digital; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int,int,int) ;
 int * VAR_6 ;
 scalar_t__ FUNC_5 (int ,int ,int ,int*) ;

__attribute__((used)) static void
FUNC_6(struct hdaa_pcm_devinfo *VAR_7)
{
 int VAR_8, VAR_9, VAR_10;

 for (VAR_10 = 0; VAR_10 < VAR_3; VAR_10++) {
  if ((VAR_7->ossmask & (1 << VAR_10)) == 0)
   continue;


  if (FUNC_5(FUNC_0(VAR_7->dev),
      FUNC_1(VAR_7->dev), VAR_6[VAR_10], &VAR_9) == 0)
   continue;

  VAR_9 = -1;
  if (VAR_10 == VAR_4)
   VAR_9 = 100;
  else if (VAR_10 == VAR_0)
   VAR_9 = 0;
  else if (VAR_10 == VAR_1 ||
      VAR_10 == VAR_2)
   VAR_8 = 20 * 4;
  else if (VAR_10 == VAR_5 && !VAR_7->digital)
   VAR_8 = -10 * 4;
  else
   VAR_8 = 0;
  if (VAR_9 < 0 &&
      (VAR_7->maxamp[VAR_10] - VAR_7->minamp[VAR_10]) <= 0) {
   VAR_9 = 100;
  } else if (VAR_9 < 0) {
   VAR_9 = ((VAR_8 - VAR_7->minamp[VAR_10]) * 100 +
       (VAR_7->maxamp[VAR_10] - VAR_7->minamp[VAR_10]) / 2) /
       (VAR_7->maxamp[VAR_10] - VAR_7->minamp[VAR_10]);
   VAR_9 = FUNC_3(FUNC_2(VAR_9, 1), 100);
  }
  FUNC_4(VAR_7->mixer, VAR_10, VAR_9, VAR_9);
 }
}
