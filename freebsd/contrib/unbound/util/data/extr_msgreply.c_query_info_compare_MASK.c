
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct query_info {scalar_t__ qname_len; int qclass; int qname; int qtype; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ) ;

int
FUNC_3(void* VAR_0, void* VAR_1)
{
 struct query_info* VAR_2 = (struct query_info*)VAR_0;
 struct query_info* VAR_3 = (struct query_info*)VAR_1;
 int VAR_4;

 FUNC_0(VAR_2->qtype, VAR_3->qtype);
 if((VAR_4 = FUNC_2(VAR_2->qname, VAR_3->qname)) != 0)
  return VAR_4;
 FUNC_1(VAR_2->qname_len == VAR_3->qname_len);
 FUNC_0(VAR_2->qclass, VAR_3->qclass);
 return 0;

}
