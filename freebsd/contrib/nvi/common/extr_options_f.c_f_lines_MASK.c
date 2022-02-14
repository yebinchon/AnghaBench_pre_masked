
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int u_long ;
struct TYPE_7__ {int defscroll; } ;
typedef TYPE_1__ SCR ;
typedef int OPTION ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int VAR_4 ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int VAR_5 ;
 int FUNC_2 (TYPE_1__*,int ,char*,int) ;
 int FUNC_3 (TYPE_1__*,int ,int ,int *,int) ;

int
FUNC_4(
 SCR *VAR_6,
 OPTION *VAR_7,
 char *VAR_8,
 u_long *VAR_9)
{

 if (*VAR_9 < VAR_1) {
  FUNC_2(VAR_6, VAR_2, "042|Screen lines too small, less than %d",
      VAR_1);
  return (1);
 }
 if (*VAR_9 > 500) {
  FUNC_2(VAR_6, VAR_2, "043|Screen lines too large, greater than %d",
      500);
  return (1);
 }





 FUNC_3(VAR_6, VAR_4, 0, ((void*)0), *VAR_9);
 if (*VAR_9 == 1) {
  VAR_6->defscroll = 1;

  if (FUNC_1(VAR_6, VAR_5) == FUNC_0(VAR_6, VAR_5) ||
      FUNC_1(VAR_6, VAR_5) > *VAR_9) {
   FUNC_3(VAR_6, VAR_5, 0, ((void*)0), 1);
   FUNC_3(VAR_6, VAR_5, VAR_3, ((void*)0), 1);
  }
 } else {
  VAR_6->defscroll = (*VAR_9 - 1) / 2;

  if (FUNC_1(VAR_6, VAR_5) == FUNC_0(VAR_6, VAR_5) ||
      FUNC_1(VAR_6, VAR_5) > *VAR_9) {
   FUNC_3(VAR_6, VAR_5, 0, ((void*)0), *VAR_9 - 1);
   FUNC_3(VAR_6, VAR_5, VAR_3, ((void*)0), *VAR_9 - 1);
  }
 }
 return (0);
}
