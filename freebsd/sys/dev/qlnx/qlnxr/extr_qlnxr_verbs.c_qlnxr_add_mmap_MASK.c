
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct qlnxr_ucontext {int mm_list_lock; int mm_head; TYPE_1__* dev; } ;
struct TYPE_4__ {scalar_t__ len; scalar_t__ phy_addr; } ;
struct qlnxr_mm {TYPE_2__ key; int entry; } ;
typedef int qlnx_host_t ;
struct TYPE_3__ {int * ha; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*,...) ;
 struct qlnxr_mm* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (unsigned long,int ) ;

__attribute__((used)) static int
FUNC_8(struct qlnxr_ucontext *VAR_3, u64 VAR_4, unsigned long VAR_5)
{
 struct qlnxr_mm *VAR_6;
 qlnx_host_t *VAR_7;

 VAR_7 = VAR_3->dev->ha;

 FUNC_2(VAR_7, "enter\n");

 VAR_6 = FUNC_3(sizeof(*VAR_6), VAR_1);
 if (VAR_6 == ((void*)0)) {
  FUNC_1(VAR_7, "mm = NULL\n");
  return -VAR_0;
 }

 VAR_6->key.phy_addr = VAR_4;
 VAR_6->key.len = FUNC_7(VAR_5, VAR_2);
 FUNC_0(&VAR_6->entry);

 FUNC_5(&VAR_3->mm_list_lock);
 FUNC_4(&VAR_6->entry, &VAR_3->mm_head);
 FUNC_6(&VAR_3->mm_list_lock);

 FUNC_2(VAR_7, "added (addr=0x%llx,len=0x%lx) for ctx=%p\n",
  (unsigned long long)VAR_6->key.phy_addr,
  (unsigned long)VAR_6->key.len, VAR_3);

 return 0;
}
