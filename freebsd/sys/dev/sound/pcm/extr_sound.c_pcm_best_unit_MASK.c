
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snddev_info {scalar_t__ playcount; scalar_t__ reccount; } ;


 int FUNC_0 (struct snddev_info*) ;
 int FUNC_1 (int *) ;
 struct snddev_info* FUNC_2 (int *,int) ;
 int * VAR_0 ;

__attribute__((used)) static int
FUNC_3(int VAR_1)
{
 struct snddev_info *VAR_2;
 int VAR_3, VAR_4, VAR_5, VAR_6;

 VAR_4 = -1;
 VAR_5 = -100;
 for (VAR_3 = 0; VAR_0 != ((void*)0) &&
     VAR_3 < FUNC_1(VAR_0); VAR_3++) {
  VAR_2 = FUNC_2(VAR_0, VAR_3);
  if (!FUNC_0(VAR_2))
   continue;
  VAR_6 = 0;
  if (VAR_2->playcount == 0)
   VAR_6 -= 10;
  if (VAR_2->reccount == 0)
   VAR_6 -= 2;
  if (VAR_6 > VAR_5 || (VAR_6 == VAR_5 && VAR_3 == VAR_1)) {
   VAR_4 = VAR_3;
   VAR_5 = VAR_6;
  }
 }
 return (VAR_4);
}
