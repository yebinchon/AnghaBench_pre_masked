
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ip_set {int family; struct bitmap_ipmac* data; } ;
struct bitmap_ipmac {int dsize; int first_ip; int last_ip; int timeout; int members; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;

__attribute__((used)) static bool
FUNC_1(struct ip_set *VAR_2, struct bitmap_ipmac *VAR_3,
        u32 VAR_4, u32 VAR_5)
{
 VAR_3->members = FUNC_0((VAR_5 - VAR_4 + 1) * VAR_3->dsize);
 if (!VAR_3->members)
  return 0;
 VAR_3->first_ip = VAR_4;
 VAR_3->last_ip = VAR_5;
 VAR_3->timeout = VAR_1;

 VAR_2->data = VAR_3;
 VAR_2->family = VAR_0;

 return 1;
}
