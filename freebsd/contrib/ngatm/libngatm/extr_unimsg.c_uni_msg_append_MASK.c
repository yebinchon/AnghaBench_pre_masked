
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uni_msg {size_t b_wptr; } ;


 int FUNC_0 (size_t,void*,size_t) ;
 int FUNC_1 (struct uni_msg*,size_t) ;

int
FUNC_2(struct uni_msg *VAR_0, void *VAR_1, size_t VAR_2)
{
 int VAR_3;

 if ((VAR_3 = FUNC_1(VAR_0, VAR_2)))
  return (VAR_3);
 FUNC_0(VAR_0->b_wptr, VAR_1, VAR_2);
 VAR_0->b_wptr += VAR_2;

 return (0);
}
