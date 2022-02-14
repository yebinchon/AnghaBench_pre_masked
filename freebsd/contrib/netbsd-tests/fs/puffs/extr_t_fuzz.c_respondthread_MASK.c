
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct puffs_req {scalar_t__ preq_rv; } ;
struct pollfd {int fd; scalar_t__ revents; int events; } ;
typedef scalar_t__ ssize_t ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct pollfd*,int,int) ;
 scalar_t__ FUNC_4 (int,char*,int) ;
 int FUNC_5 (int,char*,scalar_t__) ;

__attribute__((used)) static void *
FUNC_6(void *VAR_5)
{
 char VAR_6[VAR_1];
 struct puffs_req *VAR_7 = (void *)VAR_6;
 struct pollfd VAR_8;
 ssize_t VAR_9;

 FUNC_1(&VAR_4);
 for (;;) {
  while (VAR_3 == -1)
   FUNC_0(&VAR_2, &VAR_4);

  while (VAR_3 != -1) {
   FUNC_2(&VAR_4);
   VAR_8.fd = VAR_3;
   VAR_8.events = VAR_0;
   VAR_8.revents = 0;
   if (FUNC_3(&VAR_8, 1, 10) == 0) {
    FUNC_1(&VAR_4);
    continue;
   }
   VAR_9 = FUNC_4(VAR_3, VAR_6, sizeof(VAR_6));
   if (VAR_9 <= 0) {
    FUNC_1(&VAR_4);
    break;
   }


   VAR_7->preq_rv = 0;
   FUNC_5(VAR_3, VAR_6, VAR_9);
   FUNC_1(&VAR_4);
  }
 }

 return ((void*)0);
}
