
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gimplify_ctx {int temp_htab; struct gimplify_ctx* prev_context; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct gimplify_ctx* VAR_3 ;
 int FUNC_0 (int,int ,int ,int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (int,int) ;

void
FUNC_2 (void)
{
  struct gimplify_ctx *VAR_5;

  VAR_5 = (struct gimplify_ctx *) FUNC_1 (1, sizeof (struct gimplify_ctx));
  VAR_5->prev_context = VAR_3;
  if (VAR_4)
    VAR_5->temp_htab = FUNC_0 (1000, VAR_2, VAR_1, VAR_0);

  VAR_3 = VAR_5;
}
