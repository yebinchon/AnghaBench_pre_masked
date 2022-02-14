
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct thread {int dummy; } ;
struct gctl_req {int nerror; int lerror; scalar_t__ version; int serror; int error; int * arg; } ;
struct cdev {int dummy; } ;
typedef scalar_t__ caddr_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,struct gctl_req*,int ,int *) ;
 int FUNC_2 (struct gctl_req*) ;
 int FUNC_3 (struct gctl_req*) ;
 int FUNC_4 (struct gctl_req*) ;
 int FUNC_5 (struct gctl_req*,char*) ;
 int FUNC_6 (struct gctl_req*) ;
 int FUNC_7 (int,scalar_t__) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 () ;
 int FUNC_12 (int ,int,int ) ;

__attribute__((used)) static int
FUNC_13(struct cdev *VAR_7, u_long VAR_8, caddr_t VAR_9, int VAR_10, struct thread *VAR_11)
{
 struct gctl_req *VAR_12;
 int VAR_13;

 VAR_12 = (void *)VAR_9;
 VAR_12->nerror = 0;

 if (VAR_12->lerror < 2)
  return (VAR_0);
 if (!FUNC_12(VAR_12->error, VAR_12->lerror, VAR_4))
  return (VAR_0);

 VAR_12->serror = FUNC_11();

 if (VAR_12->version != VAR_1) {
  FUNC_5(VAR_12, "kernel and libgeom version mismatch.");
  VAR_12->arg = ((void*)0);
 } else {

  FUNC_2(VAR_12);

  if (VAR_6 & VAR_2)
   FUNC_4(VAR_12);

  if (!VAR_12->nerror) {
   FUNC_1(VAR_5, VAR_12, VAR_3, ((void*)0));
   FUNC_3(VAR_12);
  }
 }
 if (FUNC_9(VAR_12->serror)) {
  FUNC_0(FUNC_8(VAR_12->serror), VAR_12->error,
      FUNC_7(VAR_12->lerror, FUNC_10(VAR_12->serror) + 1));
 }

 VAR_13 = VAR_12->nerror;
 FUNC_6(VAR_12);
 return (VAR_13);
}
