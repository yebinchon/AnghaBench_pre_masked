
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource_list_entry {int * res; } ;
struct resource {int dummy; } ;
typedef scalar_t__ device_t ;


 int FUNC_0 (scalar_t__,scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__,int,int,struct resource*) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 struct resource_list_entry* FUNC_3 (int ,int,int) ;
 int FUNC_4 (struct resource*) ;
 int FUNC_5 (struct resource*) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_1, device_t VAR_2, int VAR_3,
    int VAR_4, struct resource *VAR_5)
{
 struct resource_list_entry *VAR_6;
 int VAR_7;
 int VAR_8;

 VAR_7 = (FUNC_2(VAR_2) != VAR_1);
 if (!VAR_7) {

  VAR_6 = FUNC_3(FUNC_0(VAR_1, VAR_2),
      VAR_3, VAR_4);
  if (VAR_6 != ((void*)0))
   VAR_6->res = ((void*)0);
 }

 if ((FUNC_4(VAR_5) & VAR_0) != 0) {
  VAR_8 = FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5);
  if (VAR_8)
   return (VAR_8);
 }
 return (FUNC_5(VAR_5));
}
