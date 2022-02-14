
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct kv_name {int key; char const* name; } ;
typedef int bad ;


 int FUNC_0 (char*,int,char*,int) ;

const char *
FUNC_1(const struct kv_name *VAR_0, size_t VAR_1, uint32_t VAR_2)
{
 static char VAR_3[32];
 size_t VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++, VAR_0++)
  if (VAR_0->key == VAR_2)
   return VAR_0->name;
 FUNC_0(VAR_3, sizeof(VAR_3), "Attribute %#x", VAR_2);
 return VAR_3;
}
