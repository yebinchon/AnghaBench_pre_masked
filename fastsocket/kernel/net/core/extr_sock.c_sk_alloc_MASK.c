
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_family; int sk_wmem_alloc; struct proto* sk_prot_creator; struct proto* sk_prot; } ;
struct proto {int dummy; } ;
struct net {int dummy; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (struct net*) ;
 struct sock* FUNC_2 (struct proto*,int,int) ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sock*,int ) ;
 int FUNC_5 (struct sock*) ;
 int FUNC_6 (struct sock*) ;

struct sock *FUNC_7(struct net *VAR_1, int VAR_2, gfp_t VAR_3,
        struct proto *VAR_4)
{
 struct sock *VAR_5;

 VAR_5 = FUNC_2(VAR_4, VAR_3 | VAR_0, VAR_2);
 if (VAR_5) {
  VAR_5->sk_family = VAR_2;




  VAR_5->sk_prot = VAR_5->sk_prot_creator = VAR_4;
  FUNC_3(VAR_5);
  FUNC_4(VAR_5, FUNC_1(VAR_1));
  FUNC_0(&VAR_5->sk_wmem_alloc, 1);

  FUNC_5(VAR_5);
  FUNC_6(VAR_5);
 }

 return VAR_5;
}
