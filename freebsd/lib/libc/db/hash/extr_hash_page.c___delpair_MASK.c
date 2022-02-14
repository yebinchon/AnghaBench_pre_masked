
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ u_int16_t ;
struct TYPE_8__ {char* page; int flags; } ;
struct TYPE_7__ {scalar_t__ BSIZE; int cndx; int NKEYS; } ;
typedef TYPE_1__ HTAB ;
typedef TYPE_2__ BUFHEAD ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_2 (char*,char*,scalar_t__) ;

int
FUNC_3(HTAB *VAR_3, BUFHEAD *VAR_4, int VAR_5)
{
 u_int16_t *VAR_6, VAR_7, VAR_8;
 int VAR_9;

 VAR_6 = (u_int16_t *)VAR_4->page;
 VAR_9 = VAR_6[0];

 if (VAR_6[VAR_5 + 1] < VAR_2)
  return (FUNC_1(VAR_3, VAR_4));
 if (VAR_5 != 1)
  VAR_7 = VAR_6[VAR_5 - 1];
 else
  VAR_7 = VAR_3->BSIZE;
 VAR_8 = VAR_7 - VAR_6[VAR_5 + 1];

 if (VAR_5 != (VAR_9 - 1)) {

  int VAR_10;
  char *VAR_11 = VAR_4->page + (int)FUNC_0(VAR_6);
  char *VAR_12 = VAR_11 + (int)VAR_8;
  FUNC_2(VAR_12, VAR_11, VAR_6[VAR_5 + 1] - FUNC_0(VAR_6));


  for (VAR_10 = VAR_5 + 2; VAR_10 <= VAR_9; VAR_10 += 2) {
   if (VAR_6[VAR_10 + 1] == VAR_1) {
    VAR_6[VAR_10 - 2] = VAR_6[VAR_10];
    VAR_6[VAR_10 - 1] = VAR_6[VAR_10 + 1];
   } else {
    VAR_6[VAR_10 - 2] = VAR_6[VAR_10] + VAR_8;
    VAR_6[VAR_10 - 1] = VAR_6[VAR_10 + 1] + VAR_8;
   }
  }
  if (VAR_5 == VAR_3->cndx) {





   VAR_3->cndx -= 2;
  }
 }

 VAR_6[VAR_9] = FUNC_0(VAR_6) + VAR_8;
 VAR_6[VAR_9 - 1] = VAR_6[VAR_9 + 1] + VAR_8 + 2 * sizeof(u_int16_t);
 VAR_6[0] = VAR_9 - 2;
 VAR_3->NKEYS--;

 VAR_4->flags |= VAR_0;
 return (0);
}
