
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uni_msg {int * b_buf; int * b_lim; int * b_wptr; int * b_rptr; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct uni_msg*) ;
 void* FUNC_1 (size_t) ;

struct uni_msg *
FUNC_2(size_t VAR_1)
{
 struct uni_msg *VAR_2;

 VAR_1 += VAR_0;

 if ((VAR_2 = FUNC_1(sizeof(struct uni_msg))) == ((void*)0))
  return ((void*)0);
 if ((VAR_2->b_buf = FUNC_1(VAR_1)) == ((void*)0)) {
  FUNC_0(VAR_2);
  return (((void*)0));
 }
 VAR_2->b_rptr = VAR_2->b_wptr = VAR_2->b_buf;
 VAR_2->b_lim = VAR_2->b_buf + VAR_1;
 return (VAR_2);
}
