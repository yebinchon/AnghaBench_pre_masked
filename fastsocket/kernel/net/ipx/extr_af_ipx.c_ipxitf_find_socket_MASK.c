
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct ipx_interface {int if_sklist_lock; } ;
typedef int __be16 ;


 struct sock* FUNC_0 (struct ipx_interface*,int ) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static struct sock *FUNC_4(struct ipx_interface *VAR_0,
     __be16 VAR_1)
{
 struct sock *VAR_2;

 FUNC_2(&VAR_0->if_sklist_lock);
 VAR_2 = FUNC_0(VAR_0, VAR_1);
 if (VAR_2)
  FUNC_1(VAR_2);
 FUNC_3(&VAR_0->if_sklist_lock);

 return VAR_2;
}
