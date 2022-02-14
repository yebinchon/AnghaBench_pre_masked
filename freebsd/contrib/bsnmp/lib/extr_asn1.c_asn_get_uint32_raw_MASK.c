
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
struct asn_buf {int dummy; } ;
typedef enum asn_err { ____Placeholder_asn_err } asn_err ;
typedef int asn_len_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct asn_buf*,char*,int) ;
 int FUNC_1 (struct asn_buf*,int,int*) ;

enum asn_err
FUNC_2(struct asn_buf *VAR_4, asn_len_t VAR_5, uint32_t *VAR_6)
{
 uint64_t VAR_7;
 enum asn_err VAR_8;

 if ((VAR_8 = FUNC_1(VAR_4, VAR_5, &VAR_7)) == VAR_1) {
  if (VAR_5 > 5) {
   FUNC_0(VAR_4, "uint32 too long %u", VAR_5);
   VAR_8 = VAR_0;
  } else if (VAR_7 > VAR_3) {
   FUNC_0(VAR_4, "uint32 too large %llu", VAR_7);
   VAR_8 = VAR_2;
  }
  *VAR_6 = (uint32_t)VAR_7;
 }
 return (VAR_8);
}
