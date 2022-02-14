
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kinfo_proc {int ki_structsize; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct kinfo_proc*) ;
 int FUNC_1 (struct kinfo_proc*,size_t) ;
 struct kinfo_proc* FUNC_2 (size_t) ;
 int FUNC_3 (int*) ;
 scalar_t__ FUNC_4 (int*,int ,struct kinfo_proc*,size_t*,int *,int ) ;

struct kinfo_proc *
FUNC_5(int *VAR_3)
{
 struct kinfo_proc *VAR_4;
 size_t VAR_5;
 int VAR_6[3];

 VAR_6[0] = VAR_0;
 VAR_6[1] = VAR_1;
 VAR_6[2] = VAR_2;

 VAR_5 = 0;
 if (FUNC_4(VAR_6, FUNC_3(VAR_6), ((void*)0), &VAR_5, ((void*)0), 0) < 0)
  return (((void*)0));

 VAR_4 = FUNC_2(VAR_5);
 if (VAR_4 == ((void*)0))
  return (((void*)0));

 if (FUNC_4(VAR_6, FUNC_3(VAR_6), VAR_4, &VAR_5, ((void*)0), 0) < 0)
  goto bad;
 if (VAR_5 % sizeof(*VAR_4) != 0)
  goto bad;
 if (VAR_4->ki_structsize != sizeof(*VAR_4))
  goto bad;
 *VAR_3 = VAR_5 / sizeof(*VAR_4);
 FUNC_1(VAR_4, VAR_5 / sizeof(*VAR_4));
 return (VAR_4);
bad:
 *VAR_3 = 0;
 FUNC_0(VAR_4);
 return (((void*)0));
}
