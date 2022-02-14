
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct resource {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 struct resource* FUNC_1 (int ,int ,int*,int,int ) ;
 int FUNC_2 (int ,int ,int,struct resource*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct resource*) ;
 scalar_t__ FUNC_8 (struct resource*) ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_9(device_t VAR_4)
{
 char *VAR_5 = ((void*)0);
 u_int32_t VAR_6, VAR_7;

 VAR_6 = FUNC_5(VAR_4);
 VAR_7 = FUNC_6(VAR_4);
 if (VAR_6) {
  if (VAR_6 == 0x01000000 && VAR_7 != 0x01009305)
   return VAR_0;

  return FUNC_0(FUNC_3(VAR_4), VAR_4, VAR_3);
 } else {
  int VAR_8 = 0, VAR_9;
      struct resource *VAR_10;

  VAR_10 = FUNC_1(VAR_4, VAR_2, &VAR_8,
       16, VAR_1);
  if (!VAR_10) goto bad;
      if (FUNC_8(VAR_10)) goto bad2;
  VAR_9 = FUNC_7(VAR_10);
  if (VAR_9 == 0) goto bad2;
  switch ((VAR_9 & 0x00000f00) >> 8) {
  case 1:
   FUNC_4(VAR_4, "SoundBlaster 1.0 (not supported)");
   VAR_5 = ((void*)0);
   break;

  case 2:
   VAR_5 = "SoundBlaster 2.0";
   break;

  case 3:
   VAR_5 = (VAR_9 & 0x0000f000)? "ESS 488" : "SoundBlaster Pro";
   break;

  case 4:
   VAR_5 = "SoundBlaster 16";
   break;

  case 5:
   VAR_5 = (VAR_9 & 0x00000008)? "ESS 688" : "ESS 1688";
   break;
       }
  if (VAR_5) FUNC_4(VAR_4, VAR_5);
bad2: FUNC_2(VAR_4, VAR_2, VAR_8, VAR_10);
bad: return VAR_5? 0 : VAR_0;
 }
}
