
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buffer_head {int b_size; } ;
struct block_head {int dummy; } ;


 int VAR_0 ;
 struct block_head* FUNC_0 (struct buffer_head*) ;
 int FUNC_1 (struct buffer_head*) ;
 scalar_t__ FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (struct buffer_head*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_4 (int *,char*,char*,struct buffer_head*) ;

__attribute__((used)) static void FUNC_5(struct buffer_head *VAR_6)
{
 struct block_head *VAR_7;

 VAR_7 = FUNC_0(VAR_6);
 if (!(FUNC_2(VAR_6) > VAR_2 && FUNC_2(VAR_6) <= VAR_5))
  FUNC_4(((void*)0), "vs-6025", "invalid level %z", VAR_6);

 if (FUNC_3(VAR_6) > (VAR_6->b_size - VAR_0) / VAR_3)
  FUNC_4(((void*)0), "vs-6030", "invalid item number %z", VAR_6);

 if (FUNC_1(VAR_6) !=
     VAR_6->b_size - VAR_0 - VAR_4 * FUNC_3(VAR_6) -
     VAR_1 * (FUNC_3(VAR_6) + 1))
  FUNC_4(((void*)0), "vs-6040", "invalid free space %z", VAR_6);

}
