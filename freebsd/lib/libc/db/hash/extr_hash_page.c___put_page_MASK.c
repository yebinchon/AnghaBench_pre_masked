
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint16_t ;
typedef int u_int32_t ;
typedef int ssize_t ;
typedef int off_t ;
struct TYPE_4__ {int BSIZE; int fp; scalar_t__ LORDER; int BSHIFT; } ;
typedef TYPE_1__ HTAB ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int VAR_3 ;
 int FUNC_4 (char*,char*,int) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int,char*,int,int) ;

int
FUNC_7(HTAB *VAR_4, char *VAR_5, u_int32_t VAR_6, int VAR_7, int VAR_8)
{
 int VAR_9, VAR_10, VAR_11;
 ssize_t VAR_12;
 char VAR_13[VAR_2];

 VAR_11 = VAR_4->BSIZE;
 if ((VAR_4->fp == -1) && FUNC_5(VAR_4))
  return (-1);
 VAR_9 = VAR_4->fp;

 if (VAR_4->LORDER != VAR_0) {
  int VAR_14, VAR_15;

  FUNC_4(VAR_13, VAR_5, VAR_11);
  if (VAR_8) {
   VAR_15 = VAR_4->BSIZE >> 2;
   for (VAR_14 = 0; VAR_14 < VAR_15; VAR_14++)
    FUNC_2(((int *)VAR_13)[VAR_14]);
  } else {
   uint16_t *VAR_16 = (uint16_t *)(void *)VAR_13;
   VAR_15 = VAR_16[0] + 2;
   for (VAR_14 = 0; VAR_14 <= VAR_15; VAR_14++)
    FUNC_1(VAR_16[VAR_14]);
  }
  VAR_5 = VAR_13;
 }
 if (VAR_7)
  VAR_10 = FUNC_0(VAR_6);
 else
  VAR_10 = FUNC_3(VAR_6);
 if ((VAR_12 = FUNC_6(VAR_9, VAR_5, VAR_11, (off_t)VAR_10 << VAR_4->BSHIFT)) == -1)

  return (-1);
 if (VAR_12 != VAR_11) {
  VAR_3 = VAR_1;
  return (-1);
 }
 return (0);
}
