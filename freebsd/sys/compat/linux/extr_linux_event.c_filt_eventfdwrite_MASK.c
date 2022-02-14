
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct knote {struct eventfd* kn_hook; } ;
struct eventfd {int efd_count; int efd_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;

__attribute__((used)) static int
FUNC_1(struct knote *VAR_2, long VAR_3)
{
 struct eventfd *VAR_4 = VAR_2->kn_hook;
 int VAR_5;

 FUNC_0(&VAR_4->efd_lock, VAR_0);
 VAR_5 = (VAR_1 - 1 > VAR_4->efd_count);

 return (VAR_5);
}
