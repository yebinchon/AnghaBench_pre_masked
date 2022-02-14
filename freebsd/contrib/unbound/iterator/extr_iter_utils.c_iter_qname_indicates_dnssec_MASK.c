
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trust_anchor {scalar_t__ numDS; scalar_t__ numDNSKEY; int lock; } ;
struct query_info {int qclass; int qname_len; int qname; } ;
struct module_env {int anchors; } ;


 struct trust_anchor* FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int *) ;

int
FUNC_2(struct module_env* VAR_0, struct query_info *VAR_1)
{
 struct trust_anchor* VAR_2;
 if(!VAR_0 || !VAR_0->anchors || !VAR_1 || !VAR_1->qname)
  return 0;

 if((VAR_2=FUNC_0(VAR_0->anchors, VAR_1->qname, VAR_1->qname_len,
  VAR_1->qclass))) {
  if(VAR_2->numDS == 0 && VAR_2->numDNSKEY == 0) {

   FUNC_1(&VAR_2->lock);
   return 0;
  }
  FUNC_1(&VAR_2->lock);
  return 1;
 }

 return 0;
}
