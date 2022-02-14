
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct segment_descriptor {int dummy; } ;
struct linux_get_thread_area_args {int desc; } ;
struct l_user_desc {int entry_number; int read_exec_only; int seg_not_present; int useable; int limit_in_pages; int contents; int seg_32bit; int limit; int base_addr; } ;
struct l_desc_struct {int dummy; } ;
typedef int info ;
typedef int desc ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct l_desc_struct*) ;
 int FUNC_1 (struct l_desc_struct*) ;
 int FUNC_2 (struct l_desc_struct*) ;
 int FUNC_3 (struct l_desc_struct*) ;
 int FUNC_4 (struct l_desc_struct*) ;
 int FUNC_5 (struct l_desc_struct*) ;
 int FUNC_6 (struct l_desc_struct*) ;
 int FUNC_7 (struct l_desc_struct*) ;
 struct segment_descriptor* FUNC_8 (int ) ;
 int FUNC_9 (int ,struct l_user_desc*,int) ;
 int FUNC_10 (struct l_user_desc*,int ,int) ;
 int VAR_2 ;
 int FUNC_11 (struct l_desc_struct*,struct segment_descriptor*,int) ;
 int FUNC_12 (struct l_user_desc*,int ,int) ;

int
FUNC_13(struct thread *VAR_3, struct linux_get_thread_area_args *VAR_4)
{

 struct l_user_desc VAR_5;
 int VAR_6;
 int VAR_7;
 struct l_desc_struct VAR_8;
 struct segment_descriptor VAR_9;

 VAR_6 = FUNC_9(VAR_4->desc, &VAR_5, sizeof(struct l_user_desc));
 if (VAR_6)
  return (VAR_6);

 VAR_7 = VAR_5.entry_number;

 if (VAR_7 != 6 && VAR_7 != 3)
  return (VAR_1);

 VAR_7 = 3;

 FUNC_12(&VAR_5, 0, sizeof(VAR_5));

 VAR_9 = FUNC_8(VAR_2)[1];

 FUNC_11(&VAR_8, &VAR_9, sizeof(VAR_8));

 VAR_5.entry_number = VAR_7;
 VAR_5.base_addr = FUNC_1(&VAR_8);
 VAR_5.limit = FUNC_3(&VAR_8);
 VAR_5.seg_32bit = FUNC_0(&VAR_8);
 VAR_5.contents = FUNC_2(&VAR_8);
 VAR_5.read_exec_only = !FUNC_7(&VAR_8);
 VAR_5.limit_in_pages = FUNC_4(&VAR_8);
 VAR_5.seg_not_present = !FUNC_5(&VAR_8);
 VAR_5.useable = FUNC_6(&VAR_8);

 VAR_6 = FUNC_10(&VAR_5, VAR_4->desc, sizeof(struct l_user_desc));
 if (VAR_6)
  return (VAR_0);

 return (0);
}
