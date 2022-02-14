
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_2__ {int msg_cache; int rrset_cache; } ;
struct worker {TYPE_1__ env; } ;
struct query_info {size_t qname_len; int * local_alias; scalar_t__ qclass; scalar_t__ qtype; int * qname; } ;
typedef int hashvalue_type ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct query_info*,int ) ;
 int FUNC_1 (int ,int *,size_t,scalar_t__,scalar_t__,int ) ;
 int FUNC_2 (int ,int ,struct query_info*) ;

__attribute__((used)) static void
FUNC_3(struct worker* VAR_4, uint8_t* VAR_5, size_t VAR_6,
 uint16_t VAR_7, uint16_t VAR_8)
{
 hashvalue_type VAR_9;
 struct query_info VAR_10;
 FUNC_1(VAR_4->env.rrset_cache, VAR_5, VAR_6, VAR_7, VAR_8, 0);
 if(VAR_7 == VAR_2)
  FUNC_1(VAR_4->env.rrset_cache, VAR_5, VAR_6, VAR_7, VAR_8,
   VAR_3);
 VAR_10.qname = VAR_5;
 VAR_10.qname_len = VAR_6;
 VAR_10.qtype = VAR_7;
 VAR_10.qclass = VAR_8;
 VAR_10.local_alias = ((void*)0);
 VAR_9 = FUNC_0(&VAR_10, 0);
 FUNC_2(VAR_4->env.msg_cache, VAR_9, &VAR_10);
 if(VAR_7 == VAR_1) {

  VAR_9 = FUNC_0(&VAR_10, VAR_0);
  FUNC_2(VAR_4->env.msg_cache, VAR_9, &VAR_10);
 }
}
