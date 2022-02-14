
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uni_msg {int * b_buf; int * b_lim; int * b_wptr; int * b_rptr; } ;
struct ngatm_msg {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct ngatm_msg* FUNC_0 (int *) ;
 int FUNC_1 (int *,struct ngatm_msg*,int ) ;
 int FUNC_2 (struct ngatm_msg*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_3 (size_t,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_6 ;
 int VAR_7 ;

struct uni_msg *
FUNC_6(size_t VAR_8)
{
 struct ngatm_msg *VAR_9;
 struct uni_msg *VAR_10;

 FUNC_4(&VAR_7);
 if ((VAR_9 = FUNC_0(&VAR_6)) != ((void*)0))
  FUNC_2(VAR_9, VAR_5);
 FUNC_5(&VAR_7);

 if (VAR_9 == ((void*)0)) {
  if ((VAR_10 = FUNC_3(sizeof(*VAR_10), VAR_3, VAR_1)) == ((void*)0))
   return (((void*)0));
  VAR_9 = (struct ngatm_msg *)VAR_10;
 } else
  VAR_10 = (struct uni_msg *)VAR_9;

 VAR_8 += VAR_0;
 if((VAR_10->b_buf = FUNC_3(VAR_8, VAR_2, VAR_1 | VAR_4)) == ((void*)0)) {
  FUNC_4(&VAR_7);
  FUNC_1(&VAR_6, VAR_9, VAR_5);
  FUNC_5(&VAR_7);
  return (((void*)0));
 }
 VAR_10->b_rptr = VAR_10->b_wptr = VAR_10->b_buf;
 VAR_10->b_lim = VAR_10->b_buf + VAR_8;

 return (VAR_10);
}
