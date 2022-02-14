
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int td_ucred; } ;
struct sbuf {int dummy; } ;
struct nameidata {int ni_vp; } ;
typedef int ssize_t ;
typedef scalar_t__ off_t ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct nameidata*,int ) ;
 int VAR_4 ;
 int FUNC_1 (struct nameidata*,int ,int ,int ,char*,struct thread*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct sbuf*,char*,char*) ;
 int FUNC_4 (int ,int,int ,struct thread*) ;
 int FUNC_5 (struct nameidata*,int*,int ,int *) ;
 int FUNC_6 (int ,int ,char*,int,scalar_t__,int ,int ,int ,int ,int*,struct thread*) ;

__attribute__((used)) static int
FUNC_7(struct thread *VAR_8, struct sbuf *VAR_9)
{
 static char VAR_10[128];
 struct nameidata VAR_11;
 off_t VAR_12;
 ssize_t VAR_13;
 int VAR_14, VAR_15, VAR_16;

 FUNC_1(&VAR_11, VAR_3, VAR_0, VAR_7, "/.mount.conf", VAR_8);
 VAR_15 = VAR_1;
 VAR_14 = FUNC_5(&VAR_11, &VAR_15, 0, ((void*)0));
 if (VAR_14)
  return (VAR_14);

 FUNC_0(&VAR_11, VAR_4);
 VAR_12 = 0;
 VAR_16 = sizeof(VAR_10) - 1;
 while (1) {
  VAR_14 = FUNC_6(VAR_6, VAR_11.ni_vp, VAR_10, VAR_16, VAR_12,
      VAR_7, VAR_2, VAR_8->td_ucred,
      VAR_5, &VAR_13, VAR_8);
  if (VAR_14)
   break;
  if (VAR_13 == VAR_16)
   break;
  VAR_10[VAR_16 - VAR_13] = 0;
  FUNC_3(VAR_9, "%s", VAR_10);
  VAR_12 += VAR_16 - VAR_13;
 }

 FUNC_2(VAR_11.ni_vp, 0);
 FUNC_4(VAR_11.ni_vp, VAR_1, VAR_8->td_ucred, VAR_8);
 return (VAR_14);
}
