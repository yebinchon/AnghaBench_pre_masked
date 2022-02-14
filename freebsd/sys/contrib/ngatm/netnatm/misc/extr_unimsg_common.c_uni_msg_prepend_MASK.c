
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uni_msg {size_t b_rptr; size_t b_wptr; } ;


 int FUNC_0 (int ,size_t,int ) ;
 scalar_t__ FUNC_1 (struct uni_msg*,size_t) ;
 size_t FUNC_2 (struct uni_msg*) ;
 int FUNC_3 (struct uni_msg*) ;

int
FUNC_4(struct uni_msg *VAR_0, size_t VAR_1)
{
 size_t VAR_2;

 if (FUNC_2(VAR_0) >= VAR_1) {
  VAR_0->b_rptr -= VAR_1;
  return (0);
 }
 VAR_2 = VAR_1 - FUNC_2(VAR_0);
 if (FUNC_1(VAR_0, VAR_2))
  return (-1);
 FUNC_0(VAR_0->b_rptr + VAR_2, VAR_0->b_rptr, FUNC_3(VAR_0));
 VAR_0->b_rptr += VAR_2 - VAR_1;
 VAR_0->b_wptr += VAR_2;
 return (0);
}
