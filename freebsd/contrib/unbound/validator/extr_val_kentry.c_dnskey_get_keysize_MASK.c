
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct packed_rrset_data {int* rr_len; scalar_t__** rr_data; } ;


 size_t FUNC_0 (unsigned char*,unsigned int,int) ;

__attribute__((used)) static size_t
FUNC_1(struct packed_rrset_data* VAR_0, size_t VAR_1)
{
 unsigned char* VAR_2;
 unsigned int VAR_3 = 0;
 int VAR_4;
 if(VAR_0->rr_len[VAR_1] < 2+5)
  return 0;
 VAR_4 = (int)VAR_0->rr_data[VAR_1][2+3];
 VAR_2 = (unsigned char*)VAR_0->rr_data[VAR_1]+2+4;
 VAR_3 = (unsigned)VAR_0->rr_len[VAR_1]-2-4;
 return FUNC_0(VAR_2, VAR_3, VAR_4);
}
