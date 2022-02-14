
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_sec; long tv_usec; } ;
struct com_s {int unit; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct com_s*,int ) ;
 int FUNC_1 (int ,char*,int ,long) ;
 int FUNC_2 (struct timeval*) ;

__attribute__((used)) static void
FUNC_3(struct com_s *VAR_2)
{
 struct timeval VAR_3;
 struct timeval VAR_4;
 long VAR_5;

 if (FUNC_0(VAR_2, VAR_0) == 0)
  return;
 FUNC_2(&VAR_3);
 for (;;) {
  if (FUNC_0(VAR_2, VAR_0) == 0)
   return;
  FUNC_2(&VAR_4);
  VAR_5 = 1000000 * (VAR_4.tv_sec - VAR_3.tv_sec) +
      VAR_4.tv_usec - VAR_3.tv_usec;
  if (VAR_5 >= 5000) {
   FUNC_1(VAR_1,
       "cy%d: channel command timeout (%ld usec)\n",
       VAR_2->unit, VAR_5);
   return;
  }
 }
}
