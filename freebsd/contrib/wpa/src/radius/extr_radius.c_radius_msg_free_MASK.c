
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radius_msg {struct radius_msg* attr_pos; int buf; } ;


 int FUNC_0 (struct radius_msg*) ;
 int FUNC_1 (int ) ;

void FUNC_2(struct radius_msg *VAR_0)
{
 if (VAR_0 == ((void*)0))
  return;

 FUNC_1(VAR_0->buf);
 FUNC_0(VAR_0->attr_pos);
 FUNC_0(VAR_0);
}
