
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct packed_rrset_data {int* rr_len; scalar_t__* rr_data; } ;


 int FUNC_0 (int *,scalar_t__,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static uint16_t
FUNC_2(struct packed_rrset_data* VAR_0, size_t VAR_1)
{
 uint16_t VAR_2;
 if(VAR_0->rr_len[VAR_1] < 2+2)
  return 0;
 FUNC_0(&VAR_2, VAR_0->rr_data[VAR_1]+2, 2);
 VAR_2 = FUNC_1(VAR_2);
 return VAR_2;
}
