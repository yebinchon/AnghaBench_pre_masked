
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct query_info {scalar_t__ qtype; scalar_t__ qclass; int qname; } ;
typedef int hashvalue_type ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (scalar_t__*,int,int) ;

hashvalue_type
FUNC_2(struct query_info *VAR_2, uint16_t VAR_3)
{
 hashvalue_type VAR_4 = 0xab;
 VAR_4 = FUNC_1(&VAR_2->qtype, sizeof(VAR_2->qtype), VAR_4);
 if(VAR_2->qtype == VAR_1 && (VAR_3&VAR_0))
  VAR_4++;
 VAR_4 = FUNC_1(&VAR_2->qclass, sizeof(VAR_2->qclass), VAR_4);
 VAR_4 = FUNC_0(VAR_2->qname, VAR_4);
 return VAR_4;
}
