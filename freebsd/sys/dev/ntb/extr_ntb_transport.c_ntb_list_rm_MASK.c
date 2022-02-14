
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ntb_queue_list {int dummy; } ;
struct ntb_queue_entry {int dummy; } ;
struct mtx {int dummy; } ;


 scalar_t__ FUNC_0 (struct ntb_queue_list*) ;
 struct ntb_queue_entry* FUNC_1 (struct ntb_queue_list*) ;
 int FUNC_2 (struct ntb_queue_list*,struct ntb_queue_entry*) ;
 int FUNC_3 (struct mtx*) ;
 int FUNC_4 (struct mtx*) ;

__attribute__((used)) static struct ntb_queue_entry *
FUNC_5(struct mtx *VAR_0, struct ntb_queue_list *VAR_1)
{
 struct ntb_queue_entry *VAR_2;

 FUNC_3(VAR_0);
 if (FUNC_0(VAR_1)) {
  VAR_2 = ((void*)0);
  goto out;
 }
 VAR_2 = FUNC_1(VAR_1);
 FUNC_2(VAR_1, VAR_2);
out:
 FUNC_4(VAR_0);

 return (VAR_2);
}
