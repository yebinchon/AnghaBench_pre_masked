
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (int *,int ) ;
 int VAR_4 ;
 int * VAR_5 ;
 int VAR_6 ;
 int * VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (void*,int *,int) ;
 int FUNC_3 (int *,int ,int) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int * VAR_16 ;
 int VAR_17 ;
 int FUNC_4 (void*,int *,int) ;
 int * VAR_18 ;

int
FUNC_5(int VAR_19, void *VAR_20, int VAR_21)
{
 int VAR_22;

 FUNC_0();
 if (VAR_3 == ((void*)0))
  return (VAR_2);
 FUNC_1(&VAR_4, VAR_12);

 switch (VAR_19) {
 case 136:
  if (VAR_5 != ((void*)0) && VAR_6 >= VAR_21) {
   FUNC_2(VAR_20, VAR_5, VAR_21);
   FUNC_3(VAR_5, 0, VAR_6);
   VAR_5 = ((void*)0);
   VAR_22 = 0;
  } else
   VAR_22 = VAR_1;
  break;
 case 135:
  if (VAR_7 == ((void*)0))
   VAR_22 = VAR_1;
  else if (VAR_20 == ((void*)0))
   VAR_22 = VAR_0;
  else {
   if (FUNC_4(VAR_20, VAR_7, VAR_21) >= VAR_21)
    VAR_22 = VAR_0;
   else
    VAR_22 = 0;
  }
  break;
 case 134:
  if (VAR_11 && VAR_21 == sizeof(u_long)) {
   *(u_long *)VAR_20 = VAR_8;
   VAR_22 = 0;
  } else
   VAR_22 = VAR_1;
  break;
 case 133:
  if (VAR_10 && VAR_21 == sizeof(u_long)) {
   *(u_long *)VAR_20 = VAR_9;
   VAR_22 = 0;
  } else
   VAR_22 = VAR_1;
  break;
 case 130:
  if (VAR_16 != ((void*)0) && VAR_17 >= VAR_21) {
   FUNC_2(VAR_20, VAR_16, VAR_21);
   VAR_22 = 0;
  } else
   VAR_22 = VAR_1;
  break;
 case 129:
  if (VAR_21 == sizeof(int)) {
   if (VAR_15 != 0) {
    *(int *)VAR_20 = VAR_15;
    VAR_22 = 0;
   } else
    VAR_22 = VAR_1;
  } else
   VAR_22 = VAR_0;
  break;
 case 131:
  if (VAR_21 == sizeof(int)) {
   if (VAR_14 != 0) {
    *(int *)VAR_20 = VAR_14;
    VAR_22 = 0;
   } else
    VAR_22 = VAR_1;
  } else
   VAR_22 = VAR_0;
  break;
 case 132:
  if (VAR_21 == sizeof(int)) {
   if (VAR_13 != 0) {
    *(int *)VAR_20 = VAR_13;
    VAR_22 = 0;
   } else
    VAR_22 = VAR_1;
  } else
   VAR_22 = VAR_0;
  break;
 case 128:
  if (VAR_21 == sizeof(void *)) {
   if (VAR_18 != ((void*)0)) {
    *(void **)VAR_20 = VAR_18;
    VAR_22 = 0;
   } else
    VAR_22 = VAR_1;
  } else
   VAR_22 = VAR_0;
  break;
 default:
  VAR_22 = VAR_1;
  break;
 }
 return (VAR_22);
}
