
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_wbuf {scalar_t__ delta; int softlimit; int timer; int jhead; scalar_t__ no_timer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,scalar_t__,int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int) ;

__attribute__((used)) static void FUNC_7(struct ubifs_wbuf *VAR_2)
{
 FUNC_6(!FUNC_3(&VAR_2->timer));

 if (VAR_2->no_timer)
  return;
 FUNC_0("set timer for jhead %s, %llu-%llu millisecs",
        FUNC_1(VAR_2->jhead),
        FUNC_2(FUNC_5(VAR_2->softlimit), VAR_1),
        FUNC_2(FUNC_5(VAR_2->softlimit) + VAR_2->delta,
         VAR_1));
 FUNC_4(&VAR_2->timer, VAR_2->softlimit, VAR_2->delta,
          VAR_0);
}
