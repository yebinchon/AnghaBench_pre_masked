
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buffer_head {int b_size; int b_data; } ;


 int FUNC_0 (struct buffer_head*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,struct buffer_head*) ;
 int FUNC_2 (int ,int ,struct buffer_head*) ;
 int FUNC_3 (int *,char*,char*,int,int) ;

__attribute__((used)) static int FUNC_4(struct buffer_head *VAR_1, int VAR_2)
{
 if (FUNC_0(VAR_1) != VAR_2) {
  FUNC_3(((void*)0), "reiserfs-5090", "node level %d does "
     "not match to the expected one %d",
     FUNC_0(VAR_1), VAR_2);
  return 0;
 }
 if (VAR_2 == VAR_0)
  return FUNC_2(VAR_1->b_data, VAR_1->b_size, VAR_1);

 return FUNC_1(VAR_1->b_data, VAR_1->b_size, VAR_1);
}
