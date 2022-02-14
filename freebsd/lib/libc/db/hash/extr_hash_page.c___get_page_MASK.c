
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int32_t ;
typedef int u_int16_t ;
typedef int off_t ;
struct TYPE_3__ {int fp; int BSIZE; int BSHIFT; scalar_t__ LORDER; } ;
typedef TYPE_1__ HTAB ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 int VAR_2 ;
 int FUNC_5 (int,char*,int,int) ;

int
FUNC_6(HTAB *VAR_3, char *VAR_4, u_int32_t VAR_5, int VAR_6, int VAR_7,
    int VAR_8)
{
 int VAR_9, VAR_10, VAR_11, VAR_12;
 u_int16_t *VAR_13;

 VAR_9 = VAR_3->fp;
 VAR_11 = VAR_3->BSIZE;

 if ((VAR_9 == -1) || !VAR_7) {
  FUNC_4(VAR_4);
  return (0);
 }
 if (VAR_6)
  VAR_10 = FUNC_0(VAR_5);
 else
  VAR_10 = FUNC_3(VAR_5);
 if ((VAR_12 = FUNC_5(VAR_9, VAR_4, VAR_11, (off_t)VAR_10 << VAR_3->BSHIFT)) == -1)
  return (-1);
 VAR_13 = (u_int16_t *)VAR_4;
 if (!VAR_12)
  VAR_13[0] = 0;
 else
  if (VAR_12 != VAR_11) {
   VAR_2 = VAR_1;
   return (-1);
  }
 if (!VAR_8 && !VAR_13[0]) {
  FUNC_4(VAR_4);
 } else
  if (VAR_3->LORDER != VAR_0) {
   int VAR_14, VAR_15;

   if (VAR_8) {
    VAR_15 = VAR_3->BSIZE >> 2;
    for (VAR_14 = 0; VAR_14 < VAR_15; VAR_14++)
     FUNC_2(((int *)VAR_4)[VAR_14]);
   } else {
    FUNC_1(VAR_13[0]);
    VAR_15 = VAR_13[0] + 2;
    for (VAR_14 = 1; VAR_14 <= VAR_15; VAR_14++)
     FUNC_1(VAR_13[VAR_14]);
   }
  }
 return (0);
}
