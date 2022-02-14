
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lockf_entry_list {int dummy; } ;
struct lockf_entry {int dummy; } ;
struct lockf {int dummy; } ;


 int FUNC_0 (struct lockf_entry_list*) ;
 struct lockf_entry* FUNC_1 (struct lockf_entry_list*) ;
 int FUNC_2 (struct lockf_entry_list*) ;
 int FUNC_3 (struct lockf_entry*,int ) ;
 int VAR_0 ;
 int FUNC_4 (struct lockf*,struct lockf_entry*) ;
 int FUNC_5 (struct lockf_entry*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_6 (struct lockf_entry*) ;
 int FUNC_7 (struct lockf*,struct lockf_entry*,int ,struct lockf_entry_list*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void
FUNC_10(struct lockf *VAR_3, struct lockf_entry *VAR_4)
{
 struct lockf_entry_list VAR_5;
 FUNC_3(VAR_4, VAR_1);




 FUNC_8(&VAR_2);
 FUNC_6(VAR_4);
 FUNC_9(&VAR_2);






 FUNC_2(&VAR_5);
 FUNC_7(VAR_3, VAR_4, VAR_0, &VAR_5);
 FUNC_5(VAR_4);




 while (!FUNC_0(&VAR_5)) {
  VAR_4 = FUNC_1(&VAR_5);
  FUNC_3(VAR_4, VAR_1);
  FUNC_4(VAR_3, VAR_4);
 }
}
