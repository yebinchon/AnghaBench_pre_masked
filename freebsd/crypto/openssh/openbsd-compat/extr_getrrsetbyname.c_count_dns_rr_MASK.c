
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int16_t ;
struct dns_rr {scalar_t__ class; scalar_t__ type; struct dns_rr* next; } ;



__attribute__((used)) static int
FUNC_0(struct dns_rr *VAR_0, u_int16_t VAR_1, u_int16_t VAR_2)
{
 int VAR_3 = 0;

 while(VAR_0) {
  if (VAR_0->class == VAR_1 && VAR_0->type == VAR_2)
   VAR_3++;
  VAR_0 = VAR_0->next;
 }

 return (VAR_3);
}
