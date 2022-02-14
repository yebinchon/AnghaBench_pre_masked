
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_char ;
struct asn_buf {int dummy; } ;
typedef enum asn_err { ____Placeholder_asn_err } asn_err ;
typedef int asn_len_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct asn_buf*,char*,scalar_t__) ;
 int FUNC_1 (struct asn_buf*,scalar_t__*,int *) ;
 int FUNC_2 (struct asn_buf*,int ) ;

enum asn_err
FUNC_3(struct asn_buf *VAR_3)
{
 u_char VAR_4;
 asn_len_t VAR_5;
 enum asn_err VAR_6;

 if ((VAR_6 = FUNC_1(VAR_3, &VAR_4, &VAR_5)) != VAR_0)
  return (VAR_6);
 if (VAR_4 != VAR_2) {
  FUNC_0(VAR_3, "bad type for NULL (%u)", VAR_4);
  return (VAR_1);
 }
 return (FUNC_2(VAR_3, VAR_5));
}
