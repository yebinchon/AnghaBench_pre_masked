
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbuf {struct sbuf* s_buf; } ;


 int FUNC_0 (struct sbuf*) ;
 scalar_t__ FUNC_1 (struct sbuf*) ;
 int FUNC_2 (struct sbuf*) ;
 int FUNC_3 (struct sbuf*) ;
 int FUNC_4 (struct sbuf*,int ,int) ;

void
FUNC_5(struct sbuf *VAR_0)
{
 int VAR_1;

 FUNC_3(VAR_0);


 if (FUNC_1(VAR_0))
  FUNC_0(VAR_0->s_buf);
 VAR_1 = FUNC_2(VAR_0);
 FUNC_4(VAR_0, 0, sizeof(*VAR_0));
 if (VAR_1)
  FUNC_0(VAR_0);
}
