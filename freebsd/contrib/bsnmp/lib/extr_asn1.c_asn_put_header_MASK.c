
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
typedef int u_char ;
struct asn_buf {scalar_t__ asn_len; int * asn_ptr; } ;
typedef enum asn_err { ____Placeholder_asn_err } asn_err ;
typedef int asn_len_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,int) ;
 scalar_t__ FUNC_1 (int *,int ) ;

enum asn_err
FUNC_2(struct asn_buf *VAR_4, u_char VAR_5, asn_len_t VAR_6)
{
 u_int VAR_7;


 if ((VAR_5 & VAR_3) > 0x30) {
  FUNC_0(((void*)0), "types > 0x30 not supported (%u)",
      VAR_5 & VAR_3);
  return (VAR_1);
 }
 if (VAR_4->asn_len == 0)
  return (VAR_0);

 *VAR_4->asn_ptr++ = VAR_5;
 VAR_4->asn_len--;


 if ((VAR_7 = FUNC_1(((void*)0), VAR_6)) == 0)
  return (VAR_1);
 if (VAR_4->asn_len < VAR_7)
  return (VAR_0);

 (void)FUNC_1(VAR_4->asn_ptr, VAR_6);
 VAR_4->asn_ptr += VAR_7;
 VAR_4->asn_len -= VAR_7;
 return (VAR_2);
}
