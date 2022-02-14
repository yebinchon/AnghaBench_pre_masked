
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cxgb_ident {int index; } ;
struct adapter_info {int dummy; } ;
typedef int device_t ;


 struct cxgb_ident* FUNC_0 (int ) ;
 struct adapter_info* FUNC_1 (int ) ;

__attribute__((used)) static const struct adapter_info *
FUNC_2(device_t VAR_0)
{
 struct cxgb_ident *VAR_1;
 const struct adapter_info *VAR_2;

 VAR_1 = FUNC_0(VAR_0);
 if (VAR_1 == ((void*)0))
  return (((void*)0));

 VAR_2 = FUNC_1(VAR_1->index);

 return (VAR_2);
}
