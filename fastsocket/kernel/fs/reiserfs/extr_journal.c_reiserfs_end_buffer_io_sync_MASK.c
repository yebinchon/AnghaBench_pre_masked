
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buffer_head {int b_bdev; int b_blocknr; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (int *,char*,char*,int ,int ) ;
 int FUNC_4 (struct buffer_head*) ;
 int FUNC_5 (struct buffer_head*) ;
 int FUNC_6 (struct buffer_head*) ;

__attribute__((used)) static void FUNC_7(struct buffer_head *VAR_1, int VAR_2)
{
 char VAR_3[VAR_0];

 if (FUNC_1(VAR_1)) {
  FUNC_3(((void*)0), "clm-2084",
     "pinned buffer %lu:%s sent to disk",
     VAR_1->b_blocknr, FUNC_0(VAR_1->b_bdev, VAR_3));
 }
 if (VAR_2)
  FUNC_5(VAR_1);
 else
  FUNC_2(VAR_1);

 FUNC_6(VAR_1);
 FUNC_4(VAR_1);
}
