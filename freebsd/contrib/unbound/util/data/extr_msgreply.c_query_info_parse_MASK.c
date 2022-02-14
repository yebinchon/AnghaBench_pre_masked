
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct query_info {int * local_alias; void* qclass; void* qtype; int qname_len; int qname; } ;
typedef int sldns_buffer ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 void* FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,scalar_t__) ;

int
FUNC_10(struct query_info* VAR_3, sldns_buffer* VAR_4)
{
 uint8_t* VAR_5 = FUNC_3(VAR_4);

 if(FUNC_5(VAR_4) < VAR_0 + 5)
  return 0;
 if((FUNC_0(VAR_5) != VAR_2 && FUNC_0(VAR_5) !=
  VAR_1) || FUNC_1(VAR_5) != 1 ||
  FUNC_6(VAR_4) != 0)
  return 0;
 FUNC_9(VAR_4, VAR_0);
 VAR_3->qname = FUNC_4(VAR_4);
 if((VAR_3->qname_len = FUNC_2(VAR_4)) == 0)
  return 0;
 if(FUNC_8(VAR_4) < 4)
  return 0;
 VAR_3->qtype = FUNC_7(VAR_4);
 VAR_3->qclass = FUNC_7(VAR_4);
 VAR_3->local_alias = ((void*)0);
 return 1;
}
