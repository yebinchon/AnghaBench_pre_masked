
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int mode_t ;
struct TYPE_3__ {int a_type; int a_perm; } ;
typedef TYPE_1__ aclent_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_0(aclent_t *VAR_5, int VAR_6,
    int *VAR_7, mode_t *VAR_8,
    int *VAR_9, int *VAR_10, int *VAR_11)
{
 int VAR_12 = 0;
 int VAR_13;
 int VAR_14 = 0;

 *VAR_7 = 0;
 *VAR_8 = 07;
 *VAR_11 = 0;
 *VAR_9 = 0;
 *VAR_10 = 0;

 for (VAR_13 = 0; VAR_13 < VAR_6; VAR_13++) {
  if (VAR_5[VAR_13].a_type < VAR_14)
   *VAR_11 = 1;
  else if (VAR_5[VAR_13].a_type > VAR_14)
   VAR_14 = VAR_5[VAR_13].a_type;
  if (VAR_5[VAR_13].a_type & VAR_4)
   (*VAR_9)++;
  if (VAR_5[VAR_13].a_type & (VAR_2 | VAR_3))
   (*VAR_10)++;
  if (VAR_5[VAR_13].a_type & VAR_0) {
   if (*VAR_7) {
    VAR_12 = VAR_1;
    goto out;
   } else {
    *VAR_7 = 1;
    *VAR_8 = VAR_5[VAR_13].a_perm;
   }
  }
 }

 if ((! *VAR_7) && (*VAR_9 + *VAR_10 > 1)) {
  VAR_12 = VAR_1;
  goto out;
 }

out:
 return (VAR_12);
}
