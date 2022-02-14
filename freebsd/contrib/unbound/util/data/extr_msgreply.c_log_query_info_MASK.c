
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct query_info {int qclass; int qtype; int qname; } ;
typedef enum verbosity_value { ____Placeholder_verbosity_value } verbosity_value ;


 int FUNC_0 (int,char const*,int ,int ,int ) ;

void
FUNC_1(enum verbosity_value VAR_0, const char* VAR_1,
 struct query_info* VAR_2)
{
 FUNC_0(VAR_0, VAR_1, VAR_2->qname, VAR_2->qtype, VAR_2->qclass);
}
