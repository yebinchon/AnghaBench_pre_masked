
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct sndcard_func {int func; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;



 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,struct sndcard_func*) ;
 int VAR_8 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 struct sndcard_func* FUNC_7 (int,int ,int) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_9)
{
 device_t VAR_10;
 u_int32_t VAR_11;
 char *VAR_12;
 struct sndcard_func *VAR_13;
 int VAR_14;

 VAR_11 = FUNC_6(VAR_9);
 VAR_12 = ((void*)0);


 if (VAR_11 != 0 && (VAR_14 = FUNC_0(FUNC_2(VAR_9), VAR_9, VAR_8)) != 0)
  return (VAR_14);
 else {
  if (VAR_11 == 0)
   return FUNC_5(VAR_9);
 }

 switch (VAR_11) {
 case 128:
  VAR_12 = "Gravis UltraSound Plug & Play PCM";
  VAR_13 = FUNC_7(sizeof(struct sndcard_func), VAR_2, VAR_3 | VAR_4);
  if (VAR_13 == ((void*)0))
   return (VAR_0);
  VAR_13->func = VAR_6;
  VAR_10 = FUNC_1(VAR_9, "pcm", -1);
  FUNC_4(VAR_10, VAR_13);
  break;
 case 129:
  VAR_12 = "Gravis UltraSound Plug & Play OPL";
  VAR_13 = FUNC_7(sizeof(struct sndcard_func), VAR_2, VAR_3 | VAR_4);
  if (VAR_13 == ((void*)0))
   return (VAR_0);
  VAR_13->func = VAR_7;
  VAR_10 = FUNC_1(VAR_9, "midi", -1);
  FUNC_4(VAR_10, VAR_13);
  break;
 case 130:
  VAR_12 = "Gravis UltraSound Plug & Play MIDI";
  VAR_13 = FUNC_7(sizeof(struct sndcard_func), VAR_2, VAR_3 | VAR_4);
  if (VAR_13 == ((void*)0))
   return (VAR_0);
  VAR_13->func = VAR_5;
  VAR_10 = FUNC_1(VAR_9, "midi", -1);
  FUNC_4(VAR_10, VAR_13);
  break;
 }

 if (VAR_12 != ((void*)0)) {
  FUNC_3(VAR_9, VAR_12);
  return (0);
 }

 return (VAR_1);
}
