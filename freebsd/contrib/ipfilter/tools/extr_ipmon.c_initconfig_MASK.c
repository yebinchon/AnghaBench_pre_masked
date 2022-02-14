
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int maxfd; TYPE_1__* logsrc; int log; } ;
typedef TYPE_2__ config_t ;
struct TYPE_5__ {int fd; int logtype; int regular; int file; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_2__*,int ,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static void FUNC_2(config_t *VAR_10)
{
 int VAR_11;

 FUNC_1(VAR_10, 0, sizeof(*VAR_10));

 VAR_10->log = VAR_8;
 VAR_10->maxfd = -1;

 for (VAR_11 = 0; VAR_11 < 3; VAR_11++) {
  VAR_10->logsrc[VAR_11].fd = -1;
  VAR_10->logsrc[VAR_11].logtype = -1;
  VAR_10->logsrc[VAR_11].regular = -1;
 }

 VAR_10->logsrc[0].file = VAR_0;
 VAR_10->logsrc[1].file = VAR_1;
 VAR_10->logsrc[2].file = VAR_2;

 FUNC_0(&VAR_3);
 FUNC_0(&VAR_6);
 FUNC_0(&VAR_7);
 FUNC_0(&VAR_9);
 FUNC_0(&VAR_4);
 FUNC_0(&VAR_5);
}
