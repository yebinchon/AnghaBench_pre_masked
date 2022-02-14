
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int oldvalue ;
typedef int newvalue ;
typedef int cap_channel_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 int FUNC_2 (int *,int*,size_t,int*,size_t*,int*,int) ;
 scalar_t__ FUNC_3 (int *,int ,int*,size_t*,int*,int) ;
 size_t FUNC_4 (int*) ;
 scalar_t__ FUNC_5 (int ,int*,size_t*) ;

__attribute__((used)) static unsigned int
FUNC_6(cap_channel_t *VAR_13)
{
 unsigned int VAR_14;
 size_t VAR_15, VAR_16, VAR_17;
 int VAR_18, VAR_19[2], VAR_20[2], VAR_21, VAR_22;

 VAR_14 = 0;

 VAR_15 = FUNC_4(VAR_19);
 FUNC_0(FUNC_5(VAR_1, VAR_19, &VAR_15) == 0);
 VAR_16 = FUNC_4(VAR_20);
 FUNC_0(FUNC_5(VAR_7, VAR_20, &VAR_16) == 0);

 VAR_17 = sizeof(VAR_21);
 if (FUNC_3(VAR_13, VAR_1, &VAR_21, &VAR_17,
     ((void*)0), 0) == 0) {
  if (VAR_17 == sizeof(VAR_21))
   VAR_14 |= VAR_2;
 }
 VAR_18 = FUNC_2(VAR_13, VAR_19, VAR_15, &VAR_21, &VAR_17, ((void*)0), 0);
 if ((VAR_14 & VAR_2) != 0)
  FUNC_0(VAR_18 == 0);
 else
  FUNC_1(VAR_0, VAR_18 != 0);

 VAR_22 = 123;
 if (FUNC_3(VAR_13, VAR_1, ((void*)0), ((void*)0), &VAR_22,
     sizeof(VAR_22)) == 0) {
  VAR_14 |= VAR_6;
 }

 if ((VAR_14 & VAR_6) != 0) {
  VAR_17 = sizeof(VAR_21);
  if (FUNC_3(VAR_13, VAR_1, &VAR_21,
      &VAR_17, ((void*)0), 0) == 0) {
   if (VAR_17 == sizeof(VAR_21) && VAR_21 == 123)
    VAR_14 |= VAR_3;
  }
 }
 VAR_22 = 123;
 VAR_18 = FUNC_2(VAR_13, VAR_19, VAR_15, ((void*)0), ((void*)0),
     &VAR_22, sizeof(VAR_22));
 if ((VAR_14 & VAR_6) != 0)
  FUNC_0(VAR_18 == 0);
 else
  FUNC_1(VAR_0, VAR_18 != 0);

 VAR_17 = sizeof(VAR_21);
 VAR_22 = 4567;
 if (FUNC_3(VAR_13, VAR_1, &VAR_21, &VAR_17,
     &VAR_22, sizeof(VAR_22)) == 0) {
  if (VAR_17 == sizeof(VAR_21) && VAR_21 == 123)
   VAR_14 |= VAR_5;
 }

 if ((VAR_14 & VAR_5) != 0) {
  VAR_17 = sizeof(VAR_21);
  if (FUNC_3(VAR_13, VAR_1, &VAR_21,
      &VAR_17, ((void*)0), 0) == 0) {
   if (VAR_17 == sizeof(VAR_21) && VAR_21 == 4567)
    VAR_14 |= VAR_4;
  }
 }

 VAR_17 = sizeof(VAR_21);
 if (FUNC_3(VAR_13, VAR_7, &VAR_21, &VAR_17,
     ((void*)0), 0) == 0) {
  if (VAR_17 == sizeof(VAR_21))
   VAR_14 |= VAR_8;
 }
 VAR_18 = FUNC_2(VAR_13, VAR_20, VAR_16, &VAR_21, &VAR_17, ((void*)0), 0);
 if ((VAR_14 & VAR_8) != 0)
  FUNC_0(VAR_18 == 0);
 else
  FUNC_1(VAR_0, VAR_18 != 0);

 VAR_22 = 506;
 if (FUNC_3(VAR_13, VAR_7, ((void*)0), ((void*)0), &VAR_22,
     sizeof(VAR_22)) == 0) {
  VAR_14 |= VAR_12;
 }

 if ((VAR_14 & VAR_12) != 0) {
  VAR_22 = 506;
  FUNC_0(FUNC_2(VAR_13, VAR_20, VAR_16, ((void*)0), ((void*)0),
      &VAR_22, sizeof(VAR_22)) == 0);

  VAR_17 = sizeof(VAR_21);
  if (FUNC_3(VAR_13, VAR_7, &VAR_21,
      &VAR_17, ((void*)0), 0) == 0) {
   if (VAR_17 == sizeof(VAR_21) && VAR_21 == 506)
    VAR_14 |= VAR_9;
  }
 }
 VAR_22 = 506;
 VAR_18 = FUNC_2(VAR_13, VAR_20, VAR_16, ((void*)0), ((void*)0),
     &VAR_22, sizeof(VAR_22));
 if ((VAR_14 & VAR_12) != 0)
  FUNC_0(VAR_18 == 0);
 else
  FUNC_1(VAR_0, VAR_18 != 0);

 VAR_17 = sizeof(VAR_21);
 VAR_22 = 7008;
 if (FUNC_3(VAR_13, VAR_7, &VAR_21, &VAR_17,
     &VAR_22, sizeof(VAR_22)) == 0) {
  if (VAR_17 == sizeof(VAR_21) && VAR_21 == 506)
   VAR_14 |= VAR_11;
 }

 if ((VAR_14 & VAR_11) != 0) {
  VAR_17 = sizeof(VAR_21);
  if (FUNC_3(VAR_13, VAR_7, &VAR_21,
      &VAR_17, ((void*)0), 0) == 0) {
   if (VAR_17 == sizeof(VAR_21) && VAR_21 == 7008)
    VAR_14 |= VAR_10;
  }
 }

 return (VAR_14);
}
