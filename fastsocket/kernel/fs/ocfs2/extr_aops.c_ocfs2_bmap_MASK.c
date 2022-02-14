
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct inode {int dummy; } ;
struct address_space {struct inode* host; } ;
typedef scalar_t__ sector_t ;
struct TYPE_2__ {int ip_dyn_features; int ip_alloc_sem; } ;


 int VAR_0 ;
 int FUNC_0 (struct inode*) ;
 int VAR_1 ;
 TYPE_1__* FUNC_1 (struct inode*) ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,char*,unsigned long long) ;
 int FUNC_4 (char*,unsigned long long) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct inode*,scalar_t__,scalar_t__*,int *,int *) ;
 int FUNC_8 (struct inode*,int *,int ) ;
 int FUNC_9 (struct inode*,int ) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static sector_t FUNC_11(struct address_space *VAR_3, sector_t VAR_4)
{
 sector_t VAR_5;
 u64 VAR_6 = 0;
 int VAR_7 = 0;
 struct inode *VAR_8 = VAR_3->host;

 FUNC_4("(block = %llu)\n", (unsigned long long)VAR_4);




 if (!FUNC_0(VAR_8)) {
  VAR_7 = FUNC_8(VAR_8, ((void*)0), 0);
  if (VAR_7) {
   if (VAR_7 != -VAR_0)
    FUNC_5(VAR_7);
   goto bail;
  }
  FUNC_2(&FUNC_1(VAR_8)->ip_alloc_sem);
 }

 if (!(FUNC_1(VAR_8)->ip_dyn_features & VAR_2))
  VAR_7 = FUNC_7(VAR_8, VAR_4, &VAR_6, ((void*)0),
        ((void*)0));

 if (!FUNC_0(VAR_8)) {
  FUNC_10(&FUNC_1(VAR_8)->ip_alloc_sem);
  FUNC_9(VAR_8, 0);
 }

 if (VAR_7) {
  FUNC_3(VAR_1, "get_blocks() failed, block = %llu\n",
       (unsigned long long)VAR_4);
  FUNC_5(VAR_7);
  goto bail;
 }

bail:
 VAR_5 = VAR_7 ? 0 : VAR_6;

 FUNC_6((int)VAR_5);

 return VAR_5;
}
