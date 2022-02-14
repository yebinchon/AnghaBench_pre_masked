
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct imsgbuf {int w; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct imsgbuf*) ;
 int FUNC_2 (int *) ;

void
FUNC_3(struct imsgbuf *VAR_0)
{
 int VAR_1;

 FUNC_2(&VAR_0->w);
 while ((VAR_1 = FUNC_1(VAR_0)) != -1)
  FUNC_0(VAR_1);
}
