
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct group {int dummy; } ;
typedef int cap_channel_t ;
typedef int bufs ;
typedef int bufc ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 unsigned int VAR_12 ;
 struct group* FUNC_0 (int *) ;
 int FUNC_1 (int *,struct group*,char*,int,struct group**) ;
 struct group* FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ,struct group*,char*,int,struct group**) ;
 struct group* FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,char*,struct group*,char*,int,struct group**) ;
 int FUNC_6 (int *) ;
 struct group* FUNC_7 () ;
 int FUNC_8 (struct group*,char*,int,struct group**) ;
 struct group* FUNC_9 (int ) ;
 int FUNC_10 (int ,struct group*,char*,int,struct group**) ;
 struct group* FUNC_11 (char*) ;
 int FUNC_12 (char*,struct group*,char*,int,struct group**) ;
 scalar_t__ FUNC_13 (struct group*,struct group*) ;
 int FUNC_14 () ;

__attribute__((used)) static unsigned int
FUNC_15(cap_channel_t *VAR_13)
{
 char VAR_14[1024], VAR_15[1024];
 unsigned int VAR_16;
 struct group *VAR_17, *VAR_18;
 struct group VAR_19, VAR_20;

 VAR_16 = 0;

 (void)FUNC_14();
 if (FUNC_6(VAR_13) == 1)
  VAR_16 |= VAR_12;

 VAR_17 = FUNC_7();
 VAR_18 = FUNC_0(VAR_13);
 if (FUNC_13(VAR_17, VAR_18)) {
  VAR_16 |= VAR_0;
  VAR_17 = FUNC_7();
  VAR_18 = FUNC_0(VAR_13);
  if (FUNC_13(VAR_17, VAR_18))
   VAR_16 |= VAR_1;
 }

 FUNC_8(&VAR_19, VAR_14, sizeof(VAR_14), &VAR_17);
 FUNC_1(VAR_13, &VAR_20, VAR_15, sizeof(VAR_15), &VAR_18);
 if (FUNC_13(VAR_17, VAR_18)) {
  VAR_16 |= VAR_3;
  FUNC_8(&VAR_19, VAR_14, sizeof(VAR_14), &VAR_17);
  FUNC_1(VAR_13, &VAR_20, VAR_15, sizeof(VAR_15), &VAR_18);
  if (FUNC_13(VAR_17, VAR_18))
   VAR_16 |= VAR_4;
 }

 (void)FUNC_14();
 if (FUNC_6(VAR_13) == 1)
  VAR_16 |= VAR_12;

 FUNC_8(&VAR_19, VAR_14, sizeof(VAR_14), &VAR_17);
 FUNC_1(VAR_13, &VAR_20, VAR_15, sizeof(VAR_15), &VAR_18);
 if (FUNC_13(VAR_17, VAR_18))
  VAR_16 |= VAR_5;

 VAR_17 = FUNC_7();
 VAR_18 = FUNC_0(VAR_13);
 if (FUNC_13(VAR_17, VAR_18))
  VAR_16 |= VAR_2;

 VAR_17 = FUNC_11("wheel");
 VAR_18 = FUNC_4(VAR_13, "wheel");
 if (FUNC_13(VAR_17, VAR_18)) {
  VAR_17 = FUNC_11("operator");
  VAR_18 = FUNC_4(VAR_13, "operator");
  if (FUNC_13(VAR_17, VAR_18))
   VAR_16 |= VAR_8;
 }

 FUNC_12("wheel", &VAR_19, VAR_14, sizeof(VAR_14), &VAR_17);
 FUNC_5(VAR_13, "wheel", &VAR_20, VAR_15, sizeof(VAR_15), &VAR_18);
 if (FUNC_13(VAR_17, VAR_18)) {
  FUNC_12("operator", &VAR_19, VAR_14, sizeof(VAR_14), &VAR_17);
  FUNC_5(VAR_13, "operator", &VAR_20, VAR_15, sizeof(VAR_15),
      &VAR_18);
  if (FUNC_13(VAR_17, VAR_18))
   VAR_16 |= VAR_9;
 }

 VAR_17 = FUNC_9(VAR_11);
 VAR_18 = FUNC_2(VAR_13, VAR_11);
 if (FUNC_13(VAR_17, VAR_18)) {
  VAR_17 = FUNC_9(VAR_10);
  VAR_18 = FUNC_2(VAR_13, VAR_10);
  if (FUNC_13(VAR_17, VAR_18))
   VAR_16 |= VAR_6;
 }

 FUNC_10(VAR_11, &VAR_19, VAR_14, sizeof(VAR_14), &VAR_17);
 FUNC_3(VAR_13, VAR_11, &VAR_20, VAR_15, sizeof(VAR_15), &VAR_18);
 if (FUNC_13(VAR_17, VAR_18)) {
  FUNC_10(VAR_10, &VAR_19, VAR_14, sizeof(VAR_14), &VAR_17);
  FUNC_3(VAR_13, VAR_10, &VAR_20, VAR_15, sizeof(VAR_15),
      &VAR_18);
  if (FUNC_13(VAR_17, VAR_18))
   VAR_16 |= VAR_7;
 }

 return (VAR_16);
}
