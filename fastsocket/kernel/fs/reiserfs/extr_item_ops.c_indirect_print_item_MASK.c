
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct item_head {int dummy; } ;
typedef int __u32 ;
typedef int __le32 ;


 int VAR_0 ;
 int FUNC_0 (struct item_head*) ;
 int VAR_1 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (struct item_head*) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (int *,char*,char*) ;
 scalar_t__ FUNC_6 (int ,int*,int ) ;
 int FUNC_7 (int *,int*,int ) ;

__attribute__((used)) static void FUNC_8(struct item_head *VAR_2, char *VAR_3)
{
 int VAR_4;
 __le32 *VAR_5;
 __u32 VAR_6 = VAR_0;
 int VAR_7 = 0;

 VAR_5 = (__le32 *) VAR_3;

 if (FUNC_2(VAR_2) % VAR_1)
  FUNC_5(((void*)0), "reiserfs-16102", "invalid item len");

 FUNC_4("%d pointers\n[ ", (int)FUNC_0(VAR_2));
 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_2); VAR_4++) {
  if (FUNC_6(VAR_6, &VAR_7, FUNC_1(VAR_5, VAR_4))) {
   FUNC_3(VAR_6, VAR_7);
   FUNC_7(&VAR_6, &VAR_7, FUNC_1(VAR_5, VAR_4));
  }
 }
 FUNC_3(VAR_6, VAR_7);
 FUNC_4("]\n");
}
