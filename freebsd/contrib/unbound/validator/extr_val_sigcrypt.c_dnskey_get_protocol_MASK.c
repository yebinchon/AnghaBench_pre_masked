
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct ub_packed_rrset_key {int dummy; } ;


 int FUNC_0 (struct ub_packed_rrset_key*,size_t,scalar_t__**,size_t*) ;

__attribute__((used)) static int
FUNC_1(struct ub_packed_rrset_key* VAR_0, size_t VAR_1)
{
 uint8_t* VAR_2;
 size_t VAR_3;
 FUNC_0(VAR_0, VAR_1, &VAR_2, &VAR_3);
 if(VAR_3 < 2+4)
  return 0;
 return (int)VAR_2[2+2];
}
