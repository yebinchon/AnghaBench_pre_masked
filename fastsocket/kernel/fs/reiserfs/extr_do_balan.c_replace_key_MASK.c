
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tree_balance {int dummy; } ;
struct buffer_head {int dummy; } ;


 scalar_t__ FUNC_0 (struct buffer_head*) ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (struct buffer_head*,int) ;
 int FUNC_4 (struct buffer_head*,int) ;
 int VAR_0 ;
 int FUNC_5 (int,char*,int,...) ;
 int FUNC_6 (struct tree_balance*,struct buffer_head*,int ) ;
 int FUNC_7 (int ,int ,int ) ;

void FUNC_8(struct tree_balance *VAR_1, struct buffer_head *VAR_2, int VAR_3,
   struct buffer_head *VAR_4, int VAR_5)
{

 FUNC_5(VAR_2 == ((void*)0) || VAR_4 == ((void*)0),
        "vs-12305: source or destination buffer is 0 (src=%p, dest=%p)",
        VAR_4, VAR_2);
 FUNC_5(!FUNC_1(VAR_2),
        "vs-12310: invalid level (%z) for destination buffer. dest must be leaf",
        VAR_2);
 FUNC_5(VAR_3 < 0 || VAR_5 < 0,
        "vs-12315: src(%d) or dest(%d) key number < 0", VAR_5, VAR_3);
 FUNC_5(VAR_3 >= FUNC_2(VAR_2) || VAR_5 >= FUNC_2(VAR_4),
        "vs-12320: src(%d(%d)) or dest(%d(%d)) key number is too big",
        VAR_5, FUNC_2(VAR_4), VAR_3, FUNC_2(VAR_2));

 if (FUNC_0(VAR_4))

  FUNC_7(FUNC_3(VAR_2, VAR_3), FUNC_4(VAR_4, VAR_5),
         VAR_0);
 else
  FUNC_7(FUNC_3(VAR_2, VAR_3), FUNC_3(VAR_4, VAR_5),
         VAR_0);

 FUNC_6(VAR_1, VAR_2, 0);
}
