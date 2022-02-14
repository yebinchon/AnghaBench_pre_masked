
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;
typedef int pid_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int) ;
 size_t VAR_1 ;
 size_t* FUNC_2 (int,size_t) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 size_t* VAR_2 ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 (int ,char*) ;
 size_t VAR_3 ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (int) ;
 int FUNC_9 () ;
 int FUNC_10 (int) ;
 scalar_t__ VAR_4 ;
 int FUNC_11 (int ,int*,int ) ;
 int FUNC_12 (int,size_t*,size_t) ;

__attribute__((used)) static
void FUNC_13(void)
{
 size_t VAR_5;
 int VAR_6;
 int VAR_7;
 pid_t VAR_8;
 if ((VAR_2 = FUNC_2(1, VAR_1)) == ((void*)0))
  FUNC_5(VAR_0, "malloc(%zu)", VAR_1);

 if (VAR_4)
  (void)FUNC_7(
      "parent: started; opening PTY and spawning child\n");
 VAR_6 = FUNC_9();
 VAR_8 = FUNC_3(FUNC_8(VAR_6));
 if (VAR_4)
  (void)FUNC_7("parent: sleeping to make sure child is ready\n");
 (void)FUNC_10(1);

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++)
  VAR_2[VAR_5] = VAR_5 & 0xff;

 if (VAR_4)
  (void)FUNC_7("parent: writing\n");

 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
  ssize_t VAR_9;

  if (VAR_4)
   (void)FUNC_7(
       "parent: attempting to write %zu bytes to PTY\n",
       VAR_1);
  if ((VAR_9 = FUNC_12(VAR_6, VAR_2, VAR_1)) == -1) {
   FUNC_5(VAR_0, "parent: write()");
   break;
  }
  if (VAR_4)
   (void)FUNC_7("parent: wrote %zd bytes to PTY\n", VAR_9);
 }

 if (VAR_4)
  (void)FUNC_7("parent: waiting for child to exit\n");
 if (FUNC_11(VAR_8, &VAR_7, 0) == -1)
  FUNC_5(VAR_0, "waitpid");
 if (!FUNC_1(VAR_7) || FUNC_0(VAR_7) != 0)
  FUNC_6(VAR_0, "child failed");

 if (VAR_4)
  (void)FUNC_7("parent: closing PTY\n");
 (void)FUNC_4(VAR_6);
 if (VAR_4)
  (void)FUNC_7("parent: exiting\n");
}
