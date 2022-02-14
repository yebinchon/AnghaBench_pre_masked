
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sy_call_t ;
struct sysent {scalar_t__ sy_thrcnt; int * sy_call; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (scalar_t__*,int) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;

int
FUNC_2(struct sysent *VAR_9, int *VAR_10,
    struct sysent *VAR_11, struct sysent *VAR_12, int VAR_13)
{
 int VAR_14;

 if ((VAR_13 & ~VAR_6) != 0)
  return (VAR_1);

 if (*VAR_10 == VAR_3) {
  for (VAR_14 = 1; VAR_14 < VAR_4; ++VAR_14)
   if (VAR_9[VAR_14].sy_call == (sy_call_t *)VAR_7)
    break;
  if (VAR_14 == VAR_4)
   return (VAR_2);
  *VAR_10 = VAR_14;
 } else if (*VAR_10 < 0 || *VAR_10 >= VAR_4)
  return (VAR_1);
 else if (VAR_9[*VAR_10].sy_call != (sy_call_t *)VAR_7 &&
     VAR_9[*VAR_10].sy_call != (sy_call_t *)VAR_8)
  return (VAR_0);

 FUNC_0(VAR_9[*VAR_10].sy_thrcnt == VAR_5,
     ("dynamic syscall is not protected"));
 *VAR_12 = VAR_9[*VAR_10];
 VAR_11->sy_thrcnt = VAR_5;
 VAR_9[*VAR_10] = *VAR_11;
 FUNC_1(&VAR_9[*VAR_10].sy_thrcnt, VAR_13);
 return (0);
}
