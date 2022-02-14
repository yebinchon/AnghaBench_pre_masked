
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_id {int bustype; int vendor; int product; int version; } ;


 int FUNC_0 (char*,int,int,int,int) ;
 int FUNC_1 (char*,size_t,int) ;

__attribute__((used)) static int
FUNC_2(size_t VAR_0, void *VAR_1)
{
 struct input_id *VAR_2 = VAR_1;

 if (VAR_0 != sizeof(*VAR_2)) {
  FUNC_1("S_input_id %zu != %zu", VAR_0, sizeof(*VAR_2));
  return (1);
 }

 FUNC_0("{ bustype = 0x%04x, vendor = 0x%04x, "
     "product = 0x%04x, version = 0x%04x }",
     VAR_2->bustype, VAR_2->vendor, VAR_2->product, VAR_2->version);
 return (0);
}
