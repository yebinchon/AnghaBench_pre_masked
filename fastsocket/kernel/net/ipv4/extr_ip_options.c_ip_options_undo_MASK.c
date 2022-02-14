
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iphdr {int dummy; } ;
struct ip_options {int srr; unsigned char* __data; int rr; int ts; scalar_t__ ts_needaddr; scalar_t__ ts_needtime; scalar_t__ rr_needaddr; int faddr; } ;


 unsigned char VAR_0 ;
 int FUNC_0 (unsigned char*,int *,int) ;
 int FUNC_1 (unsigned char*,unsigned char*,unsigned char) ;
 int FUNC_2 (unsigned char*,int ,int) ;

void FUNC_3(struct ip_options * VAR_1)
{
 if (VAR_1->srr) {
  unsigned char * VAR_2 = VAR_1->__data+VAR_1->srr-sizeof(struct iphdr);
  FUNC_1(VAR_2+7, VAR_2+3, VAR_2[1]-7);
  FUNC_0(VAR_2+3, &VAR_1->faddr, 4);
 }
 if (VAR_1->rr_needaddr) {
  unsigned char * VAR_3 = VAR_1->__data+VAR_1->rr-sizeof(struct iphdr);
  VAR_3[2] -= 4;
  FUNC_2(&VAR_3[VAR_3[2]-1], 0, 4);
 }
 if (VAR_1->ts) {
  unsigned char * VAR_4 = VAR_1->__data+VAR_1->ts-sizeof(struct iphdr);
  if (VAR_1->ts_needtime) {
   VAR_4[2] -= 4;
   FUNC_2(&VAR_4[VAR_4[2]-1], 0, 4);
   if ((VAR_4[3]&0xF) == VAR_0)
    VAR_4[2] -= 4;
  }
  if (VAR_1->ts_needaddr) {
   VAR_4[2] -= 4;
   FUNC_2(&VAR_4[VAR_4[2]-1], 0, 4);
  }
 }
}
