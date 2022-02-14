
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ipmac_elem {scalar_t__ match; } ;
struct ipmac {int id; } ;
struct ip_set {struct bitmap_ipmac* data; } ;
struct bitmap_ipmac {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct ipmac_elem* FUNC_0 (struct bitmap_ipmac*,int ) ;

__attribute__((used)) static int
FUNC_1(struct ip_set *VAR_2, void *VAR_3, u32 VAR_4, u32 VAR_5)
{
 struct bitmap_ipmac *VAR_6 = VAR_2->data;
 const struct ipmac *VAR_7 = VAR_3;
 struct ipmac_elem *VAR_8 = FUNC_0(VAR_6, VAR_7->id);

 if (VAR_8->match == VAR_1)
  return -VAR_0;

 VAR_8->match = VAR_1;

 return 0;
}
