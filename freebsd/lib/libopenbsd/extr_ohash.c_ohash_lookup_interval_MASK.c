
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int key_offset; } ;
struct ohash {int size; TYPE_2__* t; TYPE_1__ info; } ;
struct TYPE_4__ {char* p; int hv; } ;


 char* VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (char*,char const*,int) ;

unsigned int
FUNC_1(struct ohash *VAR_5, const char *VAR_6, const char *VAR_7,
    uint32_t VAR_8)
{
 unsigned int VAR_9, VAR_10;
 unsigned int VAR_11;




 VAR_11 = VAR_1;
 VAR_9 = VAR_8 % VAR_5->size;
 VAR_10 = ((VAR_8 % (VAR_5->size-2)) & ~1) + 1;
 while (VAR_5->t[VAR_9].p != ((void*)0)) {



  if (VAR_5->t[VAR_9].p == VAR_0) {
   if (VAR_11 == VAR_1)
    VAR_11 = VAR_9;
  } else if (VAR_5->t[VAR_9].hv == VAR_8 &&
      FUNC_0(VAR_5->t[VAR_9].p+VAR_5->info.key_offset, VAR_6,
   VAR_7 - VAR_6) == 0 &&
      (VAR_5->t[VAR_9].p+VAR_5->info.key_offset)[VAR_7-VAR_6] == '\0') {
   if (VAR_11 != VAR_1) {
    VAR_5->t[VAR_11].hv = VAR_8;
    VAR_5->t[VAR_11].p = VAR_5->t[VAR_9].p;
    VAR_5->t[VAR_9].p = VAR_0;
    return VAR_11;
   } else {



    return VAR_9;
   }
  }
  VAR_9 += VAR_10;
  if (VAR_9 >= VAR_5->size)
   VAR_9 -= VAR_5->size;
 }


 if (VAR_11 != VAR_1)
  VAR_9 = VAR_11;
 VAR_5->t[VAR_9].hv = VAR_8;
 return VAR_9;
}
