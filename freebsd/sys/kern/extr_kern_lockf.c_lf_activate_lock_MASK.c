
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lockf_entry_list {int dummy; } ;
struct lockf_entry {scalar_t__ lf_type; int lf_end; int lf_start; } ;
struct lockf {struct lockf_entry_list ls_active; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct lockf_entry_list*) ;
 struct lockf_entry* FUNC_1 (struct lockf_entry_list*) ;
 int FUNC_2 (struct lockf_entry_list*) ;
 int FUNC_3 (struct lockf_entry_list*,struct lockf_entry*,int ) ;
 struct lockf_entry* FUNC_4 (struct lockf_entry*,int ) ;
 int FUNC_5 (struct lockf_entry*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_6 (struct lockf_entry**,struct lockf_entry*,int ) ;
 int FUNC_7 (struct lockf_entry*) ;
 int FUNC_8 (struct lockf*,struct lockf_entry*) ;
 int VAR_3 ;
 int FUNC_9 (char*,struct lockf_entry*) ;
 int FUNC_10 (char*,struct lockf_entry*) ;
 int FUNC_11 (struct lockf*,struct lockf_entry*,int ,struct lockf_entry_list*) ;
 int FUNC_12 (struct lockf*,struct lockf_entry*,int ,struct lockf_entry_list*) ;
 int FUNC_13 (struct lockf*,struct lockf_entry*,struct lockf_entry*,struct lockf_entry_list*) ;
 int FUNC_14 (struct lockf*,struct lockf_entry*,int ,struct lockf_entry_list*) ;
 int VAR_4 ;
 int FUNC_15 (char*,int) ;

__attribute__((used)) static void
FUNC_16(struct lockf *VAR_5, struct lockf_entry *VAR_6)
{
 struct lockf_entry *VAR_7, *VAR_8;
 struct lockf_entry_list VAR_9;
 int VAR_10;

 FUNC_2(&VAR_9);
 FUNC_3(&VAR_9, VAR_6, VAR_3);

 while (!FUNC_0(&VAR_9)) {
  VAR_6 = FUNC_1(&VAR_9);
  FUNC_5(VAR_6, VAR_3);





  VAR_7 = FUNC_1(&VAR_5->ls_active);
  for (;;) {
   VAR_10 = FUNC_6(&VAR_7, VAR_6, VAR_1);
   switch (VAR_10) {
   case 0:
    break;

   case 1:






    FUNC_5(VAR_7, VAR_3);
    FUNC_14(VAR_5, VAR_7, VAR_2,
     &VAR_9);
    FUNC_7(VAR_7);
    break;

   case 2:



    FUNC_13(VAR_5, VAR_7, VAR_6, &VAR_9);
    break;

   case 3:




    VAR_8 = FUNC_4(VAR_7, VAR_3);
    FUNC_5(VAR_7, VAR_3);
    FUNC_14(VAR_5, VAR_7, VAR_2,
     &VAR_9);
    FUNC_7(VAR_7);
    VAR_7 = VAR_8;
    continue;

   case 4:




    FUNC_11(VAR_5, VAR_7, VAR_6->lf_start - 1,
        &VAR_9);
    VAR_7 = FUNC_4(VAR_7, VAR_3);
    continue;

   case 5:




    FUNC_12(VAR_5, VAR_7, VAR_6->lf_end + 1,
        &VAR_9);
    break;
   }
   break;
  }
  if (VAR_6->lf_type != VAR_0)
   FUNC_8(VAR_5, VAR_6);
 }
}
