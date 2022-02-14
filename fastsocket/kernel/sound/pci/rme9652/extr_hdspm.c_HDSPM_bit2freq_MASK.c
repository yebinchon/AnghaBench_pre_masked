
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static inline int FUNC_0(int VAR_0)
{
 static const int VAR_1[] = {
  0, 32000, 44100, 48000, 64000, 88200,
  96000, 128000, 176400, 192000 };
 if (VAR_0 < 1 || VAR_0 > 9)
  return 0;
 return VAR_1[VAR_0];
}
