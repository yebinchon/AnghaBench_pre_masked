
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int syncmsg ;
struct pollfd {int fd; int events; } ;


 int FUNC_0 (int ,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct pollfd*,int,int) ;
 int FUNC_2 (int const,int*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int const,int*,int) ;

__attribute__((used)) static int
FUNC_5(const int VAR_3, bool VAR_4)
{
 int VAR_5 = 0;
 int VAR_6;
 struct pollfd VAR_7;

 if (VAR_4) {
  VAR_7.fd = VAR_3;
  VAR_7.events = VAR_1;


  VAR_6 = FUNC_1(&VAR_7, 1, 10000);
  if (VAR_6 == -1)
   FUNC_0(VAR_0, "poll (%s)", FUNC_3(VAR_2));
  if (VAR_6 == 0)

   return -1;

  if (FUNC_2(VAR_3, &VAR_5, sizeof(VAR_5)) == -1)
   FUNC_0(VAR_0, "read (%s)", FUNC_3(VAR_2));
 } else {
  if (FUNC_4(VAR_3, &VAR_5, sizeof(VAR_5)) == -1)
   FUNC_0(VAR_0, "write (%s)", FUNC_3(VAR_2));
 }

 return 0;
}
