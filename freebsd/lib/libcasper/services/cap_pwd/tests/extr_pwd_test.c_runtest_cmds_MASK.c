
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct passwd {int dummy; } ;
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
 struct passwd* FUNC_0 (int *) ;
 int FUNC_1 (int *,struct passwd*,char*,int,struct passwd**) ;
 struct passwd* FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,char*,struct passwd*,char*,int,struct passwd**) ;
 struct passwd* FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ,struct passwd*,char*,int,struct passwd**) ;
 int FUNC_6 (int *) ;
 struct passwd* FUNC_7 () ;
 int FUNC_8 (struct passwd*,char*,int,struct passwd**) ;
 struct passwd* FUNC_9 (char*) ;
 int FUNC_10 (char*,struct passwd*,char*,int,struct passwd**) ;
 struct passwd* FUNC_11 (int ) ;
 int FUNC_12 (int ,struct passwd*,char*,int,struct passwd**) ;
 scalar_t__ FUNC_13 (struct passwd*,struct passwd*) ;
 int FUNC_14 () ;

__attribute__((used)) static unsigned int
FUNC_15(cap_channel_t *VAR_12)
{
 char VAR_13[1024], VAR_14[1024];
 unsigned int VAR_15;
 struct passwd *VAR_16, *VAR_17;
 struct passwd VAR_18, VAR_19;

 VAR_15 = 0;

 FUNC_14();
 FUNC_6(VAR_12);

 VAR_16 = FUNC_7();
 VAR_17 = FUNC_0(VAR_12);
 if (FUNC_13(VAR_16, VAR_17)) {
  VAR_15 |= VAR_0;
  VAR_16 = FUNC_7();
  VAR_17 = FUNC_0(VAR_12);
  if (FUNC_13(VAR_16, VAR_17))
   VAR_15 |= VAR_1;
 }

 FUNC_8(&VAR_18, VAR_13, sizeof(VAR_13), &VAR_16);
 FUNC_1(VAR_12, &VAR_19, VAR_14, sizeof(VAR_14), &VAR_17);
 if (FUNC_13(VAR_16, VAR_17)) {
  VAR_15 |= VAR_3;
  FUNC_8(&VAR_18, VAR_13, sizeof(VAR_13), &VAR_16);
  FUNC_1(VAR_12, &VAR_19, VAR_14, sizeof(VAR_14), &VAR_17);
  if (FUNC_13(VAR_16, VAR_17))
   VAR_15 |= VAR_4;
 }

 FUNC_14();
 FUNC_6(VAR_12);

 FUNC_8(&VAR_18, VAR_13, sizeof(VAR_13), &VAR_16);
 FUNC_1(VAR_12, &VAR_19, VAR_14, sizeof(VAR_14), &VAR_17);
 if (FUNC_13(VAR_16, VAR_17))
  VAR_15 |= VAR_5;

 VAR_16 = FUNC_7();
 VAR_17 = FUNC_0(VAR_12);
 if (FUNC_13(VAR_16, VAR_17))
  VAR_15 |= VAR_2;

 VAR_16 = FUNC_9("root");
 VAR_17 = FUNC_2(VAR_12, "root");
 if (FUNC_13(VAR_16, VAR_17)) {
  VAR_16 = FUNC_9("operator");
  VAR_17 = FUNC_2(VAR_12, "operator");
  if (FUNC_13(VAR_16, VAR_17))
   VAR_15 |= VAR_6;
 }

 FUNC_10("root", &VAR_18, VAR_13, sizeof(VAR_13), &VAR_16);
 FUNC_3(VAR_12, "root", &VAR_19, VAR_14, sizeof(VAR_14), &VAR_17);
 if (FUNC_13(VAR_16, VAR_17)) {
  FUNC_10("operator", &VAR_18, VAR_13, sizeof(VAR_13), &VAR_16);
  FUNC_3(VAR_12, "operator", &VAR_19, VAR_14, sizeof(VAR_14),
      &VAR_17);
  if (FUNC_13(VAR_16, VAR_17))
   VAR_15 |= VAR_7;
 }

 VAR_16 = FUNC_11(VAR_11);
 VAR_17 = FUNC_4(VAR_12, VAR_11);
 if (FUNC_13(VAR_16, VAR_17)) {
  VAR_16 = FUNC_11(VAR_10);
  VAR_17 = FUNC_4(VAR_12, VAR_10);
  if (FUNC_13(VAR_16, VAR_17))
   VAR_15 |= VAR_8;
 }

 FUNC_12(VAR_11, &VAR_18, VAR_13, sizeof(VAR_13), &VAR_16);
 FUNC_5(VAR_12, VAR_11, &VAR_19, VAR_14, sizeof(VAR_14), &VAR_17);
 if (FUNC_13(VAR_16, VAR_17)) {
  FUNC_12(VAR_10, &VAR_18, VAR_13, sizeof(VAR_13), &VAR_16);
  FUNC_5(VAR_12, VAR_10, &VAR_19, VAR_14, sizeof(VAR_14),
      &VAR_17);
  if (FUNC_13(VAR_16, VAR_17))
   VAR_15 |= VAR_9;
 }

 return (VAR_15);
}
