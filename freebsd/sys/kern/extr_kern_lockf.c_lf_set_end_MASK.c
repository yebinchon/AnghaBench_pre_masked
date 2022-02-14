
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lockf_entry_list {int dummy; } ;
struct lockf_entry {scalar_t__ lf_end; } ;
struct lockf {int dummy; } ;
typedef scalar_t__ off_t ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct lockf*,struct lockf_entry*,int ,struct lockf_entry_list*) ;

__attribute__((used)) static void
FUNC_2(struct lockf *VAR_1, struct lockf_entry *VAR_2, off_t VAR_3,
 struct lockf_entry_list *VAR_4)
{

 FUNC_0(VAR_3 <= VAR_2->lf_end, ("can't increase lock"));
 VAR_2->lf_end = VAR_3;
 FUNC_1(VAR_1, VAR_2, VAR_0, VAR_4);
}
