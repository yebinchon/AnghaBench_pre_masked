
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int const*,int ,char*,int *,int,int *,size_t,int *,int ) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (size_t) ;
 int FUNC_3 (int *,int const*,size_t) ;
 int FUNC_4 (int *,int ,int ) ;

int FUNC_5(const u8 *VAR_3,
    const u8 *VAR_4, const u8 *VAR_5,
    const u8 *VAR_6, size_t VAR_7,
    const u8 *VAR_8, size_t VAR_9,
    int VAR_10, const u8 *VAR_11, size_t VAR_12,
    const u8 *VAR_13, u8 *VAR_14)
{
 u8 VAR_15[2 * VAR_1];
 u8 *VAR_16, *VAR_17;
 size_t VAR_18;
 int VAR_19;

 VAR_18 = VAR_7 + 1 + VAR_9 + 1 + VAR_12;
 VAR_16 = FUNC_2(VAR_18);
 if (VAR_16 == ((void*)0))
  return -1;
 VAR_17 = VAR_16;
 if (VAR_10) {
  if (VAR_8) {
   FUNC_3(VAR_17, VAR_8, VAR_9);
   VAR_17 += VAR_9;
  }
  *VAR_17++ = 0x00;
  if (VAR_6) {
   FUNC_3(VAR_17, VAR_6, VAR_7);
   VAR_17 += VAR_7;
  }
  *VAR_17++ = 0x00;

  FUNC_3(VAR_15, VAR_4, VAR_1);
  FUNC_3(VAR_15 + VAR_1, VAR_5,
     VAR_1);
 } else {
  if (VAR_6) {
   FUNC_3(VAR_17, VAR_6, VAR_7);
   VAR_17 += VAR_7;
  }
  *VAR_17++ = 0x00;
  if (VAR_8) {
   FUNC_3(VAR_17, VAR_8, VAR_9);
   VAR_17 += VAR_9;
  }
  *VAR_17++ = 0x00;

  FUNC_3(VAR_15, VAR_5, VAR_1);
  FUNC_3(VAR_15 + VAR_1, VAR_4,
     VAR_1);
 }

 FUNC_3(VAR_17, VAR_11, VAR_12);
 FUNC_4(VAR_17 + (VAR_13 - VAR_11), 0, VAR_0);

 VAR_19 = FUNC_0(VAR_3, VAR_2,
      VAR_10 ? "Peer MIC" : "Server MIC",
      VAR_15, 2 * VAR_1, VAR_16, VAR_18,
      VAR_14, VAR_0);

 FUNC_1(VAR_16);

 return VAR_19;
}
