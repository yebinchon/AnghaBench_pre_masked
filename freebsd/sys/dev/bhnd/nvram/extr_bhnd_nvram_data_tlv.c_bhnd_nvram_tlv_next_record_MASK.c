
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef size_t uint16_t ;
struct bhnd_nvram_io {int dummy; } ;
typedef int len_hdr ;


 int FUNC_0 (char*,size_t,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t FUNC_1 (struct bhnd_nvram_io*) ;
 int FUNC_2 (struct bhnd_nvram_io*,size_t,...) ;

__attribute__((used)) static int
FUNC_3(struct bhnd_nvram_io *VAR_3, size_t *VAR_4, size_t
    *VAR_5, uint8_t *VAR_6)
{
 size_t VAR_7, VAR_8;
 uint16_t VAR_9;
 uint8_t VAR_10[2];
 int VAR_11;

 VAR_7 = *VAR_4;
 VAR_8 = FUNC_1(VAR_3);


 if (VAR_5 != ((void*)0))
  *VAR_5 = VAR_7;


 VAR_11 = FUNC_2(VAR_3, VAR_7, VAR_6, sizeof(*VAR_6));
 if (VAR_11)
  return (VAR_11);
 VAR_7++;


 if (*VAR_6 == VAR_2) {
  *VAR_4 = VAR_7;
  return (0);
 }


 if (*VAR_6 & VAR_1) {
  VAR_11 = FUNC_2(VAR_3, VAR_7, &VAR_10,
      sizeof(VAR_10[0]));
  if (VAR_11) {
   FUNC_0("error reading TLV record size: %d\n",
       VAR_11);
   return (VAR_11);
  }

  VAR_9 = VAR_10[0];
  VAR_7++;
 } else {
  VAR_11 = FUNC_2(VAR_3, VAR_7, &VAR_10,
      sizeof(VAR_10));
  if (VAR_11) {
   FUNC_0("error reading 16-bit TLV record "
       "size: %d\n", VAR_11);
   return (VAR_11);
  }

  VAR_9 = (VAR_10[0] << 8) | VAR_10[1];
  VAR_7 += 2;
 }


 if (VAR_9 > VAR_8 || VAR_8 - VAR_9 < VAR_7) {

  FUNC_0("TLV record length %hu truncated by input "
      "size of %zu\n", VAR_9, VAR_8);
  return (VAR_0);
 }

 *VAR_4 = VAR_7 + VAR_9;


 return (0);
}
