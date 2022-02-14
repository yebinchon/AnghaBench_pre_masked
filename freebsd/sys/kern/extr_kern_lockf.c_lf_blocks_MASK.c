
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lockf_entry {scalar_t__ lf_owner; scalar_t__ lf_type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct lockf_entry*,struct lockf_entry*) ;

__attribute__((used)) static int
FUNC_1(struct lockf_entry *VAR_1, struct lockf_entry *VAR_2)
{

 return VAR_1->lf_owner != VAR_2->lf_owner
  && (VAR_1->lf_type == VAR_0 || VAR_2->lf_type == VAR_0)
  && FUNC_0(VAR_1, VAR_2);
}
