
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct query_info {size_t qname_len; int * qname; scalar_t__ qtype; scalar_t__ qclass; } ;
struct auth_zone {int dummy; } ;
struct auth_data {int node; } ;
typedef int rbnode_type ;


 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (struct auth_data*,int ) ;
 int FUNC_1 (struct auth_zone*,struct query_info*,int*,struct auth_data**) ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static struct auth_data*
FUNC_3(struct auth_zone* VAR_2, uint8_t* VAR_3, size_t VAR_4)
{
 struct query_info VAR_5;
 struct auth_data* VAR_6;
 int VAR_7;
 VAR_5.qclass = 0;
 VAR_5.qtype = 0;
 VAR_5.qname = VAR_3;
 VAR_5.qname_len = VAR_4;


 FUNC_1(VAR_2, &VAR_5, &VAR_7, &VAR_6);



 while(VAR_6 && (rbnode_type*)VAR_6 != VAR_1 &&
  !FUNC_0(VAR_6, VAR_0)) {
  VAR_6 = (struct auth_data*)FUNC_2(&VAR_6->node);
 }
 if((rbnode_type*)VAR_6 == VAR_1)
  VAR_6 = ((void*)0);
 return VAR_6;
}
