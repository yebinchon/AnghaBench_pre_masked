
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct thread {int dummy; } ;
struct setgroups_args {int gidsetsize; int gidset; } ;
typedef int gid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int *,int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct thread*,int,int *) ;
 int * FUNC_3 (int,int ,int ) ;
 int VAR_4 ;

int
FUNC_4(struct thread *VAR_5, struct setgroups_args *VAR_6)
{
 gid_t VAR_7[VAR_3];
 gid_t *VAR_8;
 u_int VAR_9;
 int VAR_10;

 VAR_9 = VAR_6->gidsetsize;
 if (VAR_9 > VAR_4 + 1)
  return (VAR_0);

 if (VAR_9 > VAR_3)
  VAR_8 = FUNC_3(VAR_9 * sizeof(gid_t), VAR_1, VAR_2);
 else
  VAR_8 = VAR_7;

 VAR_10 = FUNC_0(VAR_6->gidset, VAR_8, VAR_9 * sizeof(gid_t));
 if (VAR_10 == 0)
  VAR_10 = FUNC_2(VAR_5, VAR_9, VAR_8);

 if (VAR_9 > VAR_3)
  FUNC_1(VAR_8, VAR_1);
 return (VAR_10);
}
