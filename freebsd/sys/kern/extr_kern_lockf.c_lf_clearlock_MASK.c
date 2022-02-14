
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lockf_entry {scalar_t__ lf_type; } ;
struct lockf {int ls_active; } ;


 scalar_t__ VAR_0 ;
 struct lockf_entry* FUNC_0 (int *) ;
 struct lockf_entry* VAR_1 ;
 int FUNC_1 (struct lockf*,struct lockf_entry*) ;
 int FUNC_2 (char*,struct lockf_entry*) ;
 int VAR_2 ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int
FUNC_4(struct lockf *VAR_3, struct lockf_entry *VAR_4)
{
 struct lockf_entry *VAR_5;

 VAR_5 = FUNC_0(&VAR_3->ls_active);

 if (VAR_5 == VAR_1)
  return (0);







 FUNC_1(VAR_3, VAR_4);

 return (0);
}
