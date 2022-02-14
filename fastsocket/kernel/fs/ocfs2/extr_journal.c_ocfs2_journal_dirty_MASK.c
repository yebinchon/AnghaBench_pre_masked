
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buffer_head {scalar_t__ b_blocknr; } ;
typedef int handle_t ;


 int VAR_0 ;
 int FUNC_0 (int *,struct buffer_head*) ;
 int FUNC_1 (int ,char*,unsigned long long) ;
 int FUNC_2 (char*,unsigned long long) ;
 int FUNC_3 (int) ;

int FUNC_4(handle_t *VAR_1,
   struct buffer_head *VAR_2)
{
 int VAR_3;

 FUNC_2("(bh->b_blocknr=%llu)\n",
     (unsigned long long)VAR_2->b_blocknr);

 VAR_3 = FUNC_0(VAR_1, VAR_2);
 if (VAR_3 < 0)
  FUNC_1(VAR_0, "Could not dirty metadata buffer. "
       "(bh->b_blocknr=%llu)\n",
       (unsigned long long)VAR_2->b_blocknr);

 FUNC_3(VAR_3);
 return VAR_3;
}
