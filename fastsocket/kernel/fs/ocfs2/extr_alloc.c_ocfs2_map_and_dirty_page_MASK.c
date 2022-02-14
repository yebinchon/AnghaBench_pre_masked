
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct page {int dummy; } ;
struct inode {int dummy; } ;
typedef int handle_t ;


 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,struct inode*) ;
 int FUNC_4 (struct page*,int *,struct inode*,unsigned int,unsigned int,int ) ;
 scalar_t__ FUNC_5 (struct inode*) ;
 int VAR_0 ;
 int FUNC_6 (struct page*) ;
 int FUNC_7 (int *,int ,unsigned int,unsigned int,int*,int ) ;
 int FUNC_8 (struct page*,unsigned int,unsigned int) ;

void FUNC_9(struct inode *VAR_1, handle_t *VAR_2,
         unsigned int VAR_3, unsigned int VAR_4,
         struct page *VAR_5, int VAR_6, u64 *VAR_7)
{
 int VAR_8, VAR_9 = 0;

 VAR_8 = FUNC_4(VAR_5, VAR_7, VAR_1, VAR_3, VAR_4, 0);
 if (VAR_8)
  FUNC_2(VAR_8);

 if (VAR_6)
  FUNC_8(VAR_5, VAR_3, VAR_4);






 VAR_8 = FUNC_7(VAR_2, FUNC_6(VAR_5),
    VAR_3, VAR_4, &VAR_9,
    VAR_0);
 if (VAR_8 < 0)
  FUNC_2(VAR_8);
 else if (FUNC_5(VAR_1)) {
  VAR_8 = FUNC_3(VAR_2, VAR_1);
  if (VAR_8 < 0)
   FUNC_2(VAR_8);
 }

 if (!VAR_9)
  FUNC_0(VAR_5);

 FUNC_1(VAR_5);
}
