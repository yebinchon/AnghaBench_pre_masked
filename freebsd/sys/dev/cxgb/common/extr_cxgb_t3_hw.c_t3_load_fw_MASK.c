
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int csum ;
typedef int adapter_t ;


 int FUNC_0 (int *,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int) ;
 unsigned int FUNC_2 (unsigned int,unsigned int) ;
 int FUNC_3 (int const) ;
 int FUNC_4 (int *,int,int) ;
 int FUNC_5 (int *,int,int,int const*,int) ;

int FUNC_6(adapter_t *VAR_8, const u8 *VAR_9, unsigned int VAR_10)
{
 u32 VAR_11, VAR_12, VAR_13;
 unsigned int VAR_14;
 const u32 *VAR_15 = (const u32 *)VAR_9;
 int VAR_16, VAR_17, VAR_18 = VAR_2 >> 16;

 if ((VAR_10 & 3) || VAR_10 < VAR_5)
  return -VAR_1;
 if (VAR_10 - 8 > VAR_3)
  return -VAR_0;

 VAR_11 = FUNC_3(*(const u32 *)(VAR_9 + VAR_10 - 8));
 if (FUNC_1(VAR_11) < 8) {

  VAR_13 = VAR_7;

  if (VAR_10 - 8 > VAR_4)
   return -VAR_0;
 } else
  VAR_13 = VAR_6;

 for (VAR_12 = 0, VAR_14 = 0; VAR_14 < VAR_10 / sizeof(VAR_12); VAR_14++)
  VAR_12 += FUNC_3(VAR_15[VAR_14]);
 if (VAR_12 != 0xffffffff) {
  FUNC_0(VAR_8, "corrupted firmware image, checksum %u\n",
         VAR_12);
  return -VAR_1;
 }

 VAR_16 = FUNC_4(VAR_8, VAR_18, VAR_18);
 if (VAR_16)
  goto out;

 VAR_10 -= 8;
 for (VAR_17 = VAR_2; VAR_10; ) {
  unsigned int VAR_19 = FUNC_2(VAR_10, 256U);

  VAR_16 = FUNC_5(VAR_8, VAR_17, VAR_19, VAR_9, 1);
  if (VAR_16)
   goto out;

  VAR_17 += VAR_19;
  VAR_9 += VAR_19;
  VAR_10 -= VAR_19;
 }

 VAR_16 = FUNC_5(VAR_8, VAR_13, 4, VAR_9, 1);
out:
 if (VAR_16)
  FUNC_0(VAR_8, "firmware download failed, error %d\n", VAR_16);
 return VAR_16;
}
