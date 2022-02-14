
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pollfd {int fd; int events; int revents; } ;
typedef int ssize_t ;
typedef int pid_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int FUNC_0 (int) ;
 int VAR_6 ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (int ,char*,size_t,size_t) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 () ;
 size_t VAR_8 ;
 int FUNC_6 (struct pollfd*,int,int) ;
 int FUNC_7 (char*,...) ;
 int VAR_9 ;
 int FUNC_8 (int,int ,size_t) ;
 int FUNC_9 () ;
 int FUNC_10 (char const*) ;
 scalar_t__ VAR_10 ;

__attribute__((used)) static pid_t
FUNC_11(const char *VAR_11)
{
 pid_t VAR_12;
 int VAR_13;
 struct pollfd VAR_14;
 size_t VAR_15 = 0;

 if ((VAR_12 = FUNC_5()) == -1)
  FUNC_1(VAR_1, "fork()");
 (void)FUNC_9();
 if (VAR_12 != 0)
  return VAR_12;

 if (VAR_10)
  (void)FUNC_7("child: started; open \"%s\"\n", VAR_11);
 VAR_13 = FUNC_10(VAR_11);
 FUNC_4(VAR_13);

 if (VAR_10)
  (void)FUNC_7("child: TTY open, starting read loop\n");
 VAR_14.fd = VAR_13;
 VAR_14.events = VAR_4;
 VAR_14.revents = 0;
 for (;;) {
  int VAR_16;
  ssize_t VAR_17;

  if (VAR_10)
   (void)FUNC_7("child: polling\n");
  if ((VAR_16 = FUNC_6(&VAR_14, 1, 2000)) == -1)
   FUNC_1(VAR_1, "child: poll()");
  if (VAR_16 == 0)
   break;
  if ((VAR_14.revents & VAR_3) != 0)
   break;
  if ((VAR_14.revents & VAR_4) != 0) {
   for (;;) {
    if (VAR_10)
     (void)FUNC_7(
         "child: attempting to read %zu"
         " bytes\n", VAR_5);
    if ((VAR_17 = FUNC_8(VAR_13, VAR_6, VAR_5))
        == -1) {
     if (VAR_7 == VAR_0)
      break;
     FUNC_1(VAR_1, "child: read()");
    }
    if (VAR_9 && VAR_17 < VAR_9 &&
        (size_t)VAR_17 < VAR_5)
     FUNC_2(VAR_1, "read returned %zd "
         "less than the queue size %d",
         VAR_17, VAR_9);
    if (VAR_10)
     (void)FUNC_7(
         "child: read %zd bytes from TTY\n",
         VAR_17);
    if (VAR_17 == 0)
     goto end;
    VAR_15 += VAR_17;
   }
  }
 }
end:
 if (VAR_10)
  (void)FUNC_7("child: closing TTY %zu\n", VAR_15);
 (void)FUNC_0(VAR_13);
 if (VAR_10)
  (void)FUNC_7("child: exiting\n");
 if (VAR_15 != VAR_5 * VAR_8)
  FUNC_2(VAR_1,
      "Lost data %zu != %zu\n", VAR_15, VAR_5 * VAR_8);

 FUNC_3(VAR_2);
}
