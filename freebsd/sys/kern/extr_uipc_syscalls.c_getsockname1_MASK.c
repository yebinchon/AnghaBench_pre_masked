
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct thread {int td_proc; } ;
typedef scalar_t__ sockaddr ;
struct osockaddr {int sa_family; } ;
struct getsockname_args {int alen; int asa; int fdes; } ;
typedef scalar_t__ socklen_t ;
typedef int len ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,scalar_t__*,int) ;
 int FUNC_2 (scalar_t__*,int ,int) ;
 int FUNC_3 (scalar_t__*,int ) ;
 int FUNC_4 (struct thread*,int ,scalar_t__**,scalar_t__*) ;

__attribute__((used)) static int
FUNC_5(struct thread *VAR_2, struct getsockname_args *VAR_3, int VAR_4)
{
 struct sockaddr *VAR_5;
 socklen_t VAR_6;
 int VAR_7;

 VAR_7 = FUNC_1(VAR_3->alen, &VAR_6, sizeof(VAR_6));
 if (VAR_7 != 0)
  return (VAR_7);

 VAR_7 = FUNC_4(VAR_2, VAR_3->fdes, &VAR_5, &VAR_6);
 if (VAR_7 != 0)
  return (VAR_7);

 if (VAR_6 != 0) {




  VAR_7 = FUNC_2(VAR_5, VAR_3->asa, (u_int)VAR_6);
 }
 FUNC_3(VAR_5, VAR_0);
 if (VAR_7 == 0)
  VAR_7 = FUNC_2(&VAR_6, VAR_3->alen, sizeof(VAR_6));
 return (VAR_7);
}
