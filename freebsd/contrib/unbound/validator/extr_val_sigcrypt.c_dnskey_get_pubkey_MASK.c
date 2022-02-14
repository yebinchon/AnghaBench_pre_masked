
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ub_packed_rrset_key {int dummy; } ;


 int FUNC_0 (struct ub_packed_rrset_key*,size_t,int **,size_t*) ;

__attribute__((used)) static void
FUNC_1(struct ub_packed_rrset_key* VAR_0, size_t VAR_1,
 unsigned char** VAR_2, unsigned int* VAR_3)
{
 uint8_t* VAR_4;
 size_t VAR_5;
 FUNC_0(VAR_0, VAR_1, &VAR_4, &VAR_5);
 if(VAR_5 < 2+5) {
  *VAR_2 = ((void*)0);
  *VAR_3 = 0;
  return;
 }
 *VAR_2 = (unsigned char*)VAR_4+2+4;
 *VAR_3 = (unsigned)VAR_5-2-4;
}
