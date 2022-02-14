
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lockf_entry_list {int dummy; } ;
struct lockf_entry {scalar_t__ lf_start; } ;
struct lockf {int dummy; } ;
typedef scalar_t__ off_t ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct lockf_entry*,int ) ;
 int FUNC_2 (struct lockf*,struct lockf_entry*) ;
 int VAR_1 ;
 int FUNC_3 (struct lockf*,struct lockf_entry*,int ,struct lockf_entry_list*) ;

__attribute__((used)) static void
FUNC_4(struct lockf *VAR_2, struct lockf_entry *VAR_3, off_t VAR_4,
 struct lockf_entry_list *VAR_5)
{

 FUNC_0(VAR_4 >= VAR_3->lf_start, ("can't increase lock"));
 VAR_3->lf_start = VAR_4;
 FUNC_1(VAR_3, VAR_1);
 FUNC_2(VAR_2, VAR_3);
 FUNC_3(VAR_2, VAR_3, VAR_0, VAR_5);
}
