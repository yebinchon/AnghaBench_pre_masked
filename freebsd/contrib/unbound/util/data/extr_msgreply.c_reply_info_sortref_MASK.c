
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rrset_ref {int dummy; } ;
struct reply_info {int rrset_count; int * ref; } ;


 int FUNC_0 (int *,int ,int,int ) ;
 int VAR_0 ;

void
FUNC_1(struct reply_info* VAR_1)
{
 FUNC_0(&VAR_1->ref[0], VAR_1->rrset_count, sizeof(struct rrset_ref),
  VAR_0);
}
