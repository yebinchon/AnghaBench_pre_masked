
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct t4_filter_tuple {int dport; int sport; int * dip; int * sip; } ;
struct t4_filter_specification {scalar_t__ type; struct t4_filter_tuple val; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int,int ) ;

__attribute__((used)) static inline uint32_t
FUNC_1(struct t4_filter_specification *VAR_1)
{
 struct t4_filter_tuple *VAR_2 = &VAR_1->val;
 uint32_t VAR_3;

 if (VAR_1->type) {

  VAR_3 = FUNC_0(&VAR_2->sip[0], 16, VAR_0);
  VAR_3 = FUNC_0(&VAR_2->dip[0], 16, VAR_3);
 } else {
  VAR_3 = FUNC_0(&VAR_2->sip[0], 4, VAR_0);
  VAR_3 = FUNC_0(&VAR_2->dip[0], 4, VAR_3);
 }
 VAR_3 = FUNC_0(&VAR_2->sport, sizeof(VAR_2->sport), VAR_3);
 VAR_3 = FUNC_0(&VAR_2->dport, sizeof(VAR_2->dport), VAR_3);

 return (VAR_3);
}
