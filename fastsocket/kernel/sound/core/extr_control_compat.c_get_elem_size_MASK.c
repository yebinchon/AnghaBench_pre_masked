
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_aes_iec958 {int dummy; } ;
typedef int s64 ;







__attribute__((used)) static int FUNC_0(int VAR_0, int VAR_1)
{
 switch (VAR_0) {
 case 128:
  return sizeof(s64) * VAR_1;
 case 130:
  return sizeof(int) * VAR_1;
 case 131:
  return 512;
 case 129:
  return sizeof(struct snd_aes_iec958);
 default:
  return -1;
 }
}
