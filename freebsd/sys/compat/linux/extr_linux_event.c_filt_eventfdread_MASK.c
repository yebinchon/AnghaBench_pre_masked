
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct knote {struct eventfd* kn_hook; } ;
struct eventfd {scalar_t__ efd_count; int efd_lock; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;

__attribute__((used)) static int
FUNC_1(struct knote *VAR_1, long VAR_2)
{
 struct eventfd *VAR_3 = VAR_1->kn_hook;
 int VAR_4;

 FUNC_0(&VAR_3->efd_lock, VAR_0);
 VAR_4 = (VAR_3->efd_count > 0);

 return (VAR_4);
}
