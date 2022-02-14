
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct asn_buf {int asn_len; int asn_ptr; } ;
typedef enum asn_err { ____Placeholder_asn_err } asn_err ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct asn_buf*,int,int) ;
 int FUNC_1 (int,int const*,int) ;

enum asn_err
FUNC_2(struct asn_buf *VAR_4, const u_char *VAR_5)
{
 enum asn_err VAR_6;

 if ((VAR_6 = FUNC_0(VAR_4, VAR_1|VAR_0,
     4)) != VAR_3)
  return (VAR_6);
 if (VAR_4->asn_len < 4)
  return (VAR_2);

 FUNC_1(VAR_4->asn_ptr, VAR_5, 4);
 VAR_4->asn_ptr += 4;
 VAR_4->asn_len -= 4;
 return (VAR_3);
}
