
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct uni_msg {int * b_buf; int * b_lim; int * b_rptr; int * b_wptr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int *,size_t) ;
 int FUNC_1 (int *,int ) ;
 int * FUNC_2 (size_t,int ,int ) ;
 int FUNC_3 (struct uni_msg*) ;
 size_t FUNC_4 (struct uni_msg*) ;
 size_t FUNC_5 (struct uni_msg*) ;

int
FUNC_6(struct uni_msg *VAR_4, size_t VAR_5)
{
 u_char *VAR_6;
 size_t VAR_7, VAR_8;

 VAR_8 = FUNC_4(VAR_4);
 VAR_7 = FUNC_5(VAR_4);
 VAR_5 += VAR_8 + VAR_7 + VAR_1;
 if ((VAR_6 = FUNC_2(VAR_5, VAR_3, VAR_2)) == ((void*)0)) {
  FUNC_3(VAR_4);
  return (VAR_0);
 }

 FUNC_0(VAR_4->b_rptr, VAR_6 + VAR_8, VAR_7);
 FUNC_1(VAR_4->b_buf, VAR_3);

 VAR_4->b_buf = VAR_6;
 VAR_4->b_rptr = VAR_4->b_buf + VAR_8;
 VAR_4->b_wptr = VAR_4->b_rptr + VAR_7;
 VAR_4->b_lim = VAR_4->b_buf + VAR_5;

 return (0);
}
