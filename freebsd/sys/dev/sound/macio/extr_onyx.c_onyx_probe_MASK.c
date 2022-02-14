
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (int ) ;
 char* FUNC_2 (int ) ;
 char* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (char const*,char*) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_2)
{
 const char *VAR_3, *VAR_4;

 VAR_3 = FUNC_3(VAR_2);
 if (VAR_3 == ((void*)0))
  return (VAR_0);

 if (FUNC_4(VAR_3, "codec") == 0) {
  if (FUNC_1(VAR_2) != VAR_1)
   return (VAR_0);
 } else if (FUNC_4(VAR_3, "codec") == 0) {
  VAR_4 = FUNC_2(VAR_2);
  if (VAR_4 == ((void*)0) || FUNC_4(VAR_4, "pcm3052") != 0)
   return (VAR_0);
 } else
  return (VAR_0);

 FUNC_0(VAR_2, "Texas Instruments PCM3052 Audio Codec");
 return (0);
}
