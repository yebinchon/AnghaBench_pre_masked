
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serviced_query {int qbuflen; int qbuf; scalar_t__ dnssec; int addrlen; int addr; int opt_list; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int,int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int *,int ,int *,int ) ;

int
FUNC_5(const void* VAR_0, const void* VAR_1)
{
 struct serviced_query* VAR_2 = (struct serviced_query*)VAR_0;
 struct serviced_query* VAR_3 = (struct serviced_query*)VAR_1;
 int VAR_4;
 if(VAR_2->qbuflen < VAR_3->qbuflen)
  return -1;
 if(VAR_2->qbuflen > VAR_3->qbuflen)
  return 1;
 FUNC_1(VAR_2->qbuflen == VAR_3->qbuflen);
 FUNC_1(VAR_2->qbuflen >= 15 );

 if((VAR_4 = FUNC_2(VAR_2->qbuf, VAR_3->qbuf, 10)) != 0)
  return VAR_4;
 if((VAR_4 = FUNC_2(VAR_2->qbuf+VAR_2->qbuflen-4, VAR_3->qbuf+VAR_3->qbuflen-4, 4)) != 0)
  return VAR_4;
 if(VAR_2->dnssec != VAR_3->dnssec) {
  if(VAR_2->dnssec < VAR_3->dnssec)
   return -1;
  return 1;
 }
 if((VAR_4 = FUNC_3(VAR_2->qbuf+10, VAR_3->qbuf+10)) != 0)
  return VAR_4;
 if((VAR_4 = FUNC_0(VAR_2->opt_list, VAR_3->opt_list)) != 0)
  return VAR_4;
 return FUNC_4(&VAR_2->addr, VAR_2->addrlen, &VAR_3->addr, VAR_3->addrlen);
}
