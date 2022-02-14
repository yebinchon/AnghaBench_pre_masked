
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct asn_buf {scalar_t__ asn_len; int * asn_ptr; } ;
typedef enum asn_err { ____Placeholder_asn_err } asn_err ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct asn_buf*,int ,int ) ;
 int FUNC_1 (int) ;

enum asn_err
FUNC_2(struct asn_buf *VAR_4, u_char VAR_5, u_char **VAR_6)
{
 int VAR_7;

 if (VAR_4->asn_len < VAR_3)
  return (VAR_0);
 *VAR_6 = VAR_4->asn_ptr;
 if ((VAR_7 = FUNC_0(VAR_4, VAR_5, VAR_2)) == VAR_1)
  FUNC_1(VAR_4->asn_ptr == *VAR_6 + VAR_3);
 return (VAR_7);
}
