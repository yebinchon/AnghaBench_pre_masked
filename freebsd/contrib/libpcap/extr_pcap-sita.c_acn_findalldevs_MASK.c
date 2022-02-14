
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ find_fd; scalar_t__ len; scalar_t__ ip; } ;
typedef TYPE_1__ unit_t ;


 int FUNC_0 (scalar_t__,int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int,int,int ) ;
 scalar_t__ FUNC_3 (scalar_t__,char*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_4 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_5 (char*) ;
 int VAR_4 ;
 int FUNC_6 (scalar_t__,int,unsigned char*) ;
 int FUNC_7 () ;
 TYPE_1__** VAR_5 ;
 int FUNC_8 () ;

int FUNC_9(char *VAR_6) {
 int VAR_7, VAR_8;
 unit_t *VAR_9;

 FUNC_1(&VAR_4);
 VAR_3 = 0;
 for (VAR_7 = 0; VAR_7 <= VAR_1; VAR_7++) {
  for (VAR_8 = 0; VAR_8 <= VAR_2; VAR_8++) {
   VAR_9 = &VAR_5[VAR_7][VAR_8];
   if (VAR_9->ip && (FUNC_4(VAR_9, VAR_0))) {
    FUNC_6(VAR_9->find_fd, 1, (unsigned char *)"\0");
    if (FUNC_3(VAR_9->find_fd, VAR_6))
     FUNC_2(VAR_7, VAR_8, VAR_0);
    else {
     if (VAR_9->find_fd > VAR_3)
      VAR_3 = VAR_9->find_fd;
     FUNC_0(VAR_9->find_fd, &VAR_4);
     VAR_9->len = 0;
     FUNC_6(VAR_9->find_fd, 1, (unsigned char *)"Q");
    }
   }
  }
 }
 FUNC_8();
 if (FUNC_5(VAR_6))
  return -1;
 FUNC_7();
 return 0;
}
