
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ipmac_elem {int match; int ether; } ;
struct ipmac {int id; int * ether; } ;
struct ip_set {struct bitmap_ipmac* data; } ;
struct bitmap_ipmac {int dummy; } ;


 int VAR_0 ;


 int FUNC_0 (struct bitmap_ipmac const*,int ) ;
 struct ipmac_elem* FUNC_1 (struct bitmap_ipmac const*,int ) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static int
FUNC_3(struct ip_set *VAR_1, void *VAR_2, u32 VAR_3, u32 VAR_4)
{
 const struct bitmap_ipmac *VAR_5 = VAR_1->data;
 const struct ipmac *VAR_6 = VAR_2;
 const struct ipmac_elem *VAR_7 = FUNC_1(VAR_5, VAR_6->id);

 switch (VAR_7->match) {
 case 128:

  return -VAR_0;
 case 129:
  return (VAR_6->ether == ((void*)0) ||
   FUNC_2(VAR_6->ether, VAR_7->ether) == 0) &&
         !FUNC_0(VAR_5, VAR_6->id);
 }
 return 0;
}
