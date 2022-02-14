
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct asn_buf {int dummy; } ;
typedef enum asn_err { ____Placeholder_asn_err } asn_err ;
typedef int asn_len_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct asn_buf*,char*,int) ;
 int FUNC_1 (struct asn_buf*,int*,int *) ;
 int FUNC_2 (struct asn_buf*,int ,int*) ;

enum asn_err
FUNC_3(struct asn_buf *VAR_4, u_char *VAR_5)
{
 u_char VAR_6;
 asn_len_t VAR_7;
 enum asn_err VAR_8;

 if ((VAR_8 = FUNC_1(VAR_4, &VAR_6, &VAR_7)) != VAR_2)
  return (VAR_8);
 if (VAR_6 != (VAR_1|VAR_0)) {
  FUNC_0(VAR_4, "bad type for ip-address %u", VAR_6);
  return (VAR_3);
 }
 return (FUNC_2(VAR_4, VAR_7, VAR_5));
}
