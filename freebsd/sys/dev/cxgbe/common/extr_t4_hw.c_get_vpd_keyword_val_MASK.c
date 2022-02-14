
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u16 ;
struct t4_vpdr_hdr {int vpdr_tag; scalar_t__* vpdr_len; } ;
struct t4_vpd_hdr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__ const*,char const*,int) ;

__attribute__((used)) static int FUNC_1(const u8 *VAR_3, const char *VAR_4, int VAR_5)
{
 int VAR_6, VAR_7;
 unsigned int VAR_8, VAR_9;
 const struct t4_vpdr_hdr *VAR_10;

 VAR_8 = sizeof(struct t4_vpd_hdr);
 VAR_10 = (const void *)(VAR_3 + VAR_8);
 VAR_7 = VAR_10->vpdr_tag;
 VAR_9 = (u16)VAR_10->vpdr_len[0] + ((u16)VAR_10->vpdr_len[1] << 8);
 while (VAR_5--) {
  VAR_8 += sizeof(struct t4_vpdr_hdr) + VAR_9;
  VAR_10 = (const void *)(VAR_3 + VAR_8);
  if (++VAR_7 != VAR_10->vpdr_tag)
   return -VAR_0;
  VAR_9 = (u16)VAR_10->vpdr_len[0] + ((u16)VAR_10->vpdr_len[1] << 8);
 }
 VAR_8 += sizeof(struct t4_vpdr_hdr);

 if (VAR_8 + VAR_9 > VAR_2) {
  return -VAR_0;
 }

 for (VAR_6 = VAR_8; VAR_6 + VAR_1 <= VAR_8 + VAR_9;) {
  if (FUNC_0(VAR_3 + VAR_6 , VAR_4 , 2) == 0){
   VAR_6 += VAR_1;
   return VAR_6;
  }

  VAR_6 += VAR_1 + VAR_3[VAR_6+2];
 }

 return -VAR_0;
}
