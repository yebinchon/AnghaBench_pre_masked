
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct thread {int dummy; } ;
struct nfsrv_descript {scalar_t__ nd_repstat; int nd_flag; int * nd_nam2; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct thread* VAR_4 ;
 int FUNC_0 (struct nfsrv_descript*,struct thread*) ;

__attribute__((used)) static int
FUNC_1(struct nfsrv_descript *VAR_5, u_int32_t VAR_6)
{
 struct thread *VAR_7 = VAR_4;
 int VAR_8;

 if (VAR_5->nd_nam2 == ((void*)0))
  VAR_5->nd_flag |= VAR_0;

 FUNC_0(VAR_5, VAR_7);
 if (VAR_5->nd_repstat == VAR_1)
  VAR_8 = VAR_2;
 else
  VAR_8 = VAR_3;
 return (VAR_8);
}
