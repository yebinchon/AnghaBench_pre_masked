
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
typedef int u_char ;
struct asn_buf {scalar_t__ asn_len; int asn_ptr; } ;
typedef enum asn_err { ____Placeholder_asn_err } asn_err ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct asn_buf*,int ,scalar_t__) ;
 int FUNC_1 (int ,int const*,scalar_t__) ;

enum asn_err
FUNC_2(struct asn_buf *VAR_3, const u_char *VAR_4, u_int VAR_5)
{
 enum asn_err VAR_6;

 if ((VAR_6 = FUNC_0(VAR_3, VAR_2, VAR_5)) != VAR_1)
  return (VAR_6);
 if (VAR_3->asn_len < VAR_5)
  return (VAR_0);

 FUNC_1(VAR_3->asn_ptr, VAR_4, VAR_5);
 VAR_3->asn_ptr += VAR_5;
 VAR_3->asn_len -= VAR_5;
 return (VAR_1);
}
