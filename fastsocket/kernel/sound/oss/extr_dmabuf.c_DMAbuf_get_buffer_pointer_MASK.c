
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_buffparms {int flags; int dma; int bytes_in_use; int mapping_flags; scalar_t__ qhead; int fragment_size; scalar_t__ qtail; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int VAR_3 ;
 int FUNC_5 (unsigned long) ;

int FUNC_6(int VAR_4, struct dma_buffparms *VAR_5, int VAR_6)
{





 int VAR_7;
 unsigned long VAR_8;

 if (!(VAR_5->flags & VAR_0))
  VAR_7 = 0;
 else {
  int VAR_9 = VAR_5->dma;

  VAR_8=FUNC_0();
  FUNC_1(VAR_9);

  if(!VAR_3)
   FUNC_2(VAR_5->dma);

  VAR_7 = FUNC_4(VAR_9);

  VAR_7 = VAR_5->bytes_in_use - VAR_7;

  if (!(VAR_5->mapping_flags & VAR_1)) {
   if (VAR_6 == VAR_2) {
    if (VAR_5->qhead == 0)
     if (VAR_7 > VAR_5->fragment_size)
      VAR_7 = 0;
   } else {
    if (VAR_5->qtail == 0)
     if (VAR_7 > VAR_5->fragment_size)
      VAR_7 = 0;
   }
  }
  if (VAR_7 < 0)
   VAR_7 = 0;
  if (VAR_7 >= VAR_5->bytes_in_use)
   VAR_7 = 0;

  if(!VAR_3)
   FUNC_3(VAR_5->dma);

  FUNC_5(VAR_8);
 }


 return VAR_7;
}
