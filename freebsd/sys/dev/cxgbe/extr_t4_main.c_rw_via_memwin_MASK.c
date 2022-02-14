
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct memwin {int mw_curpos; int mw_aperture; int mw_base; int mw_lock; } ;
struct adapter {struct memwin* memwin; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct adapter*,int,int) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct adapter*,int) ;
 int FUNC_11 (struct adapter*,int,int ) ;

int
FUNC_12(struct adapter *VAR_4, int VAR_5, uint32_t VAR_6, uint32_t *VAR_7,
    int VAR_8, int VAR_9)
{
 struct memwin *VAR_10;
 uint32_t VAR_11, VAR_12;

 FUNC_0(VAR_5 >= 0 && VAR_5 < VAR_1);


 if (VAR_6 & 3 || VAR_8 & 3 || VAR_8 <= 0)
  return (VAR_0);

 VAR_10 = &VAR_4->memwin[VAR_5];
 while (VAR_8 > 0) {
  FUNC_6(&VAR_10->mw_lock);
  VAR_11 = VAR_10->mw_curpos + VAR_10->mw_aperture;
  if (VAR_6 >= VAR_11 || VAR_6 < VAR_10->mw_curpos) {

   if (!FUNC_8(&VAR_10->mw_lock)) {
    FUNC_7(&VAR_10->mw_lock);
    FUNC_9(&VAR_10->mw_lock);
   }
   FUNC_4(&VAR_10->mw_lock, VAR_3);
   FUNC_3(VAR_4, VAR_5, VAR_6);
   FUNC_5(&VAR_10->mw_lock);
   VAR_11 = VAR_10->mw_curpos + VAR_10->mw_aperture;
  }
  FUNC_4(&VAR_10->mw_lock, VAR_2);
  while (VAR_6 < VAR_11 && VAR_8 > 0) {
   if (VAR_9 == 0) {
    VAR_12 = FUNC_10(VAR_4, VAR_10->mw_base + VAR_6 -
        VAR_10->mw_curpos);
    *VAR_7++ = FUNC_2(VAR_12);
   } else {
    VAR_12 = *VAR_7++;
    FUNC_11(VAR_4, VAR_10->mw_base + VAR_6 -
        VAR_10->mw_curpos, FUNC_1(VAR_12));
   }
   VAR_6 += 4;
   VAR_8 -= 4;
  }
  FUNC_7(&VAR_10->mw_lock);
 }

 return (0);
}
