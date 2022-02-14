
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct asn_buf {int dummy; } ;
typedef scalar_t__ int64_t ;
typedef scalar_t__ int32_t ;
typedef enum asn_err { ____Placeholder_asn_err } asn_err ;
typedef int asn_len_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct asn_buf*,int,scalar_t__*) ;

enum asn_err
FUNC_1(struct asn_buf *VAR_5, asn_len_t VAR_6, int32_t *VAR_7)
{
 int64_t VAR_8;
 enum asn_err VAR_9;

 if ((VAR_9 = FUNC_0(VAR_5, VAR_6, &VAR_8)) == VAR_1) {
  if (VAR_6 > 4)
   VAR_9 = VAR_0;
  else if (VAR_8 > VAR_3 || VAR_8 < VAR_4)

   VAR_9 = VAR_2;
  *VAR_7 = (int32_t)VAR_8;
 }
 return (VAR_9);
}
