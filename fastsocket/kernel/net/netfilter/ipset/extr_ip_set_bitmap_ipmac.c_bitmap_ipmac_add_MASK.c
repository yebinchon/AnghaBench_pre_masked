
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ipmac_elem {int match; int ether; } ;
struct ipmac {int ether; int id; } ;
struct ip_set {struct bitmap_ipmac* data; } ;
struct bitmap_ipmac {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;



 struct ipmac_elem* FUNC_0 (struct bitmap_ipmac*,int ) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static int
FUNC_2(struct ip_set *VAR_2, void *VAR_3, u32 VAR_4, u32 VAR_5)
{
 struct bitmap_ipmac *VAR_6 = VAR_2->data;
 const struct ipmac *VAR_7 = VAR_3;
 struct ipmac_elem *VAR_8 = FUNC_0(VAR_6, VAR_7->id);

 switch (VAR_8->match) {
 case 128:
  if (!VAR_7->ether)

   return -VAR_1;

  FUNC_1(VAR_8->ether, VAR_7->ether, VAR_0);
  VAR_8->match = 129;
  break;
 case 129:
  return -VAR_1;
 case 130:
  if (VAR_7->ether) {
   FUNC_1(VAR_8->ether, VAR_7->ether, VAR_0);
   VAR_8->match = 129;
  } else
   VAR_8->match = 128;
 }

 return 0;
}
