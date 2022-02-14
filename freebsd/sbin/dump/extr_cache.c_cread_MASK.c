
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t ssize_t ;
typedef size_t off_t ;
struct TYPE_5__ {scalar_t__ fs_bsize; } ;
struct TYPE_4__ {size_t b_Offset; void* b_Data; struct TYPE_4__* b_HNext; } ;
typedef TYPE_1__ Block ;


 TYPE_1__** VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (void*,void*,size_t) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 () ;
 size_t FUNC_2 (int,void*,size_t,size_t) ;
 TYPE_2__* VAR_5 ;

ssize_t
FUNC_3(int VAR_6, void *VAR_7, size_t VAR_8, off_t VAR_9)
{
 Block *VAR_10;
 Block **VAR_11;
 Block **VAR_12;
 int VAR_13;
 int VAR_14;
 off_t VAR_15;






 if (VAR_4 <= 0 || VAR_5->fs_bsize == 0)
  return(FUNC_2(VAR_6, VAR_7, VAR_8, VAR_9));
 if (VAR_2 == ((void*)0))
  FUNC_1();







 VAR_15 = ~(off_t)(VAR_1 - 1);
 if (VAR_8 >= VAR_1 ||
     ((VAR_9 ^ (VAR_9 + VAR_8 - 1)) & VAR_15) != 0) {
  return(FUNC_2(VAR_6, VAR_7, VAR_8, VAR_9));
 }






 VAR_13 = (VAR_9 / VAR_1) % VAR_3;
 VAR_11 = &VAR_0[VAR_13];
 VAR_12 = ((void*)0);
 while ((VAR_10 = *VAR_11) != ((void*)0)) {
  if (((VAR_10->b_Offset ^ VAR_9) & VAR_15) == 0)
   break;
  VAR_12 = VAR_11;
  VAR_11 = &VAR_10->b_HNext;
 }
 if (VAR_10 == ((void*)0)) {
  VAR_10 = *VAR_12;
  VAR_11 = VAR_12;
  VAR_10->b_Offset = VAR_9 & VAR_15;
  VAR_14 = FUNC_2(VAR_6, VAR_10->b_Data, VAR_1, VAR_10->b_Offset);
  if (VAR_14 != VAR_1) {
   VAR_10->b_Offset = (off_t)-1;
   VAR_10 = ((void*)0);
  }
 }
 if (VAR_10) {
  FUNC_0(VAR_10->b_Data + (VAR_9 - VAR_10->b_Offset), VAR_7, VAR_8);
  *VAR_11 = VAR_10->b_HNext;
  VAR_10->b_HNext = VAR_0[VAR_13];
  VAR_0[VAR_13] = VAR_10;
  return(VAR_8);
 } else {
  return(FUNC_2(VAR_6, VAR_7, VAR_8, VAR_9));
 }
}
