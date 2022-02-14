
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct dma_debug_entry {int list; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct dma_debug_entry* FUNC_1 () ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct dma_debug_entry*) ;
 struct dma_debug_entry* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 int VAR_5 ;

int FUNC_9(u32 VAR_6)
{
 int VAR_7, VAR_8, VAR_9 = 0;
 unsigned long VAR_10;
 struct dma_debug_entry *VAR_11;
 FUNC_0(VAR_5);

 FUNC_7(&VAR_2, VAR_10);

 if (VAR_3 < VAR_6) {
  VAR_8 = VAR_6 - VAR_3;

  FUNC_8(&VAR_2, VAR_10);

  for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++) {
   VAR_11 = FUNC_3(sizeof(*VAR_11), VAR_0);
   if (!VAR_11)
    break;

   FUNC_4(&VAR_11->list, &VAR_5);
  }

  FUNC_7(&VAR_2, VAR_10);

  FUNC_6(&VAR_5, &VAR_1);
  VAR_3 += VAR_7;
  VAR_4 += VAR_7;
 } else {
  VAR_8 = VAR_3 - VAR_6;

  for (VAR_7 = 0; VAR_7 < VAR_8 && !FUNC_5(&VAR_1); VAR_7++) {
   VAR_11 = FUNC_1();
   FUNC_2(VAR_11);
  }

  VAR_3 -= VAR_7;
 }

 if (VAR_3 != VAR_6)
  VAR_9 = 1;

 FUNC_8(&VAR_2, VAR_10);

 return VAR_9;
}
