
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* gss_buffer_t ;
typedef int * gss_OID ;
struct TYPE_4__ {int length; scalar_t__ value; } ;
typedef scalar_t__ OM_uint32 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char const*,char*,int) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (TYPE_1__* const,int *) ;
 int VAR_3 ;

__attribute__((used)) static OM_uint32
FUNC_2(const gss_buffer_t VAR_4, gss_OID VAR_5)
{
 OM_uint32 VAR_6;






 VAR_6 = FUNC_1(VAR_4, VAR_5);
 if (VAR_6 == VAR_0)
     return VAR_0;





 if (VAR_4->length > 8 &&
     FUNC_0((const char *)VAR_4->value, "NTLMSSP\x00", 8) == 0)
 {
  *VAR_5 = VAR_2;
  return VAR_0;
 } else if (VAR_4->length != 0 &&
     ((const char *)VAR_4->value)[0] == 0x6E)
 {

  *VAR_5 = VAR_1;
  return VAR_0;
 } else if (VAR_4->length == 0) {
  *VAR_5 = VAR_3;
  return VAR_0;
 }
 return VAR_6;
}
