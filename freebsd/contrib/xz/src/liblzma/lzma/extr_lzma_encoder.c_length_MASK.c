
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int lzma_range_encoder ;
struct TYPE_4__ {scalar_t__* counters; int high; int choice2; int * mid; int choice; int * low; } ;
typedef TYPE_1__ lzma_length_encoder ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,scalar_t__ const) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int *,int ,int ,scalar_t__) ;

__attribute__((used)) static inline void
FUNC_4(lzma_range_encoder *VAR_7, lzma_length_encoder *VAR_8,
  const uint32_t VAR_9, uint32_t VAR_10, const bool VAR_11)
{
 FUNC_0(VAR_10 <= VAR_5);
 VAR_10 -= VAR_6;

 if (VAR_10 < VAR_2) {
  FUNC_2(VAR_7, &VAR_8->choice, 0);
  FUNC_3(VAR_7, VAR_8->low[VAR_9], VAR_1, VAR_10);
 } else {
  FUNC_2(VAR_7, &VAR_8->choice, 1);
  VAR_10 -= VAR_2;

  if (VAR_10 < VAR_4) {
   FUNC_2(VAR_7, &VAR_8->choice2, 0);
   FUNC_3(VAR_7, VAR_8->mid[VAR_9], VAR_3, VAR_10);
  } else {
   FUNC_2(VAR_7, &VAR_8->choice2, 1);
   VAR_10 -= VAR_4;
   FUNC_3(VAR_7, VAR_8->high, VAR_0, VAR_10);
  }
 }



 if (!VAR_11)
  if (--VAR_8->counters[VAR_9] == 0)
   FUNC_1(VAR_8, VAR_9);
}
