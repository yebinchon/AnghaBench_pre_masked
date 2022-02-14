
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct socket {struct sock* sk; } ;
struct sock {int sk_family; } ;
struct sk_buff {int dummy; } ;
struct netlbl_lsm_secattr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct netlbl_lsm_secattr*) ;
 int FUNC_1 (struct netlbl_lsm_secattr*) ;
 int FUNC_2 (struct sk_buff*,int,struct netlbl_lsm_secattr*) ;
 int FUNC_3 (struct netlbl_lsm_secattr*,char*) ;
 scalar_t__ FUNC_4 (char*) ;

__attribute__((used)) static int FUNC_5(struct socket *VAR_4,
      struct sk_buff *VAR_5, u32 *VAR_6)

{
 struct netlbl_lsm_secattr VAR_7;
 struct sock *VAR_8;
 char VAR_9[VAR_3];
 int VAR_10 = VAR_1;
 u32 VAR_11;
 int VAR_12;




 if (VAR_4 != ((void*)0)) {
  VAR_8 = VAR_4->sk;
  if (VAR_8->sk_family != VAR_1 && VAR_8->sk_family != VAR_2)
   return 0;
  VAR_10 = VAR_8->sk_family;
 }



 FUNC_1(&VAR_7);
 VAR_12 = FUNC_2(VAR_5, VAR_10, &VAR_7);
 if (VAR_12 == 0)
  FUNC_3(&VAR_7, VAR_9);
 FUNC_0(&VAR_7);




 if (VAR_12 != 0)
  return VAR_12;

 VAR_11 = FUNC_4(VAR_9);
 if (VAR_11 == 0)
  return -VAR_0;

 *VAR_6 = VAR_11;
 return 0;
}
