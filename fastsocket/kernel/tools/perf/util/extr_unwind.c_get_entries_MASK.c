
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int unwind_entry_cb_t ;
typedef int unw_word_t ;
typedef int unw_cursor_t ;
typedef int unw_addr_space_t ;
struct unwind_info {int machine; int thread; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int ,int ,void*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int ,int *) ;
 int FUNC_6 (int *,int ,struct unwind_info*) ;
 scalar_t__ FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct unwind_info *VAR_3, unwind_entry_cb_t VAR_4,
         void *VAR_5)
{
 unw_addr_space_t VAR_6;
 unw_cursor_t VAR_7;
 int VAR_8;

 VAR_6 = FUNC_3(&VAR_2, 0);
 if (!VAR_6) {
  FUNC_2("unwind: Can't create unwind address space.\n");
  return -VAR_0;
 }

 VAR_8 = FUNC_6(&VAR_7, VAR_6, VAR_3);
 if (VAR_8)
  FUNC_0(VAR_8);

 while (!VAR_8 && (FUNC_7(&VAR_7) > 0)) {
  unw_word_t VAR_9;

  FUNC_5(&VAR_7, VAR_1, &VAR_9);
  VAR_8 = FUNC_1(VAR_9, VAR_3->thread, VAR_3->machine, VAR_4, VAR_5);
 }

 FUNC_4(VAR_6);
 return VAR_8;
}
