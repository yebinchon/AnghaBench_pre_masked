
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc_handle {int status; } ;
typedef int (* proc_child_func ) (void*) ;
typedef int pid_t ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int) ;
 int VAR_6 ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int ) ;
 char* const* VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (char const*,char* const*) ;
 int FUNC_6 () ;
 int FUNC_7 (struct proc_handle*) ;
 int FUNC_8 (int,int ,int ,struct proc_handle**) ;
 scalar_t__ FUNC_9 (int ,int ,int ,int ) ;
 int FUNC_10 (void*) ;
 int FUNC_11 (int,int*,int ) ;

int
FUNC_12(const char *VAR_9, char * const *VAR_10, char * const *VAR_11,
    proc_child_func *VAR_12, void *VAR_13, struct proc_handle **VAR_14)
{
 struct proc_handle *VAR_15;
 int VAR_16, VAR_17;
 pid_t VAR_18;

 if (FUNC_4(VAR_1) == VAR_2)
  return (VAR_0);

 VAR_16 = 0;
 VAR_15 = ((void*)0);

 if ((VAR_18 = FUNC_6()) == -1)
  VAR_16 = VAR_8;
 else if (VAR_18 == 0) {

  if (FUNC_9(VAR_5, 0, 0, 0) != 0)
   FUNC_3(1);

  if (VAR_12 != ((void*)0))
   (*VAR_12)(VAR_13);

  if (VAR_11 != ((void*)0))
   VAR_7 = VAR_11;

  FUNC_5(VAR_9, VAR_10);

  FUNC_3(2);

 } else {

  if (FUNC_11(VAR_18, &VAR_17, VAR_6) == -1) {
   VAR_16 = VAR_8;
   FUNC_0("ERROR: child process %d didn't stop as expected", VAR_18);
   goto bad;
  }


  if (!FUNC_2(VAR_17)) {
   VAR_16 = VAR_0;
   FUNC_1("ERROR: child process %d status 0x%x", VAR_18, VAR_17);
   goto bad;
  }


  VAR_16 = FUNC_8(VAR_18, 0, VAR_3, &VAR_15);
  if (VAR_16 == 0)
   VAR_15->status = VAR_4;

bad:
  if (VAR_16 != 0 && VAR_15 != ((void*)0)) {
   FUNC_7(VAR_15);
   VAR_15 = ((void*)0);
  }
 }
 *VAR_14 = VAR_15;
 return (VAR_16);
}
