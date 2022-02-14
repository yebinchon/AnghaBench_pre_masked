
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct vendor_attribute {void* attrib_data; int attrib_len; int attrib_type; int vendor_value; } ;


 int FUNC_0 (int ) ;

int
FUNC_1(u_int32_t *VAR_0, const void **VAR_1, size_t *VAR_2)
{
 struct vendor_attribute *VAR_3;

 VAR_3 = (struct vendor_attribute *)*VAR_1;
 *VAR_0 = FUNC_0(VAR_3->vendor_value);
 *VAR_1 = VAR_3->attrib_data;
 *VAR_2 = VAR_3->attrib_len - 2;

 return (VAR_3->attrib_type);
}
