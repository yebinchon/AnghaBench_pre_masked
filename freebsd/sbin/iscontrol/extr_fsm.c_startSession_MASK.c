
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int trans_t ;
struct TYPE_4__ {int flags; int fd; int soc; scalar_t__ isid; } ;
typedef TYPE_1__ isess_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char**,char*,char*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int,int ,int*) ;
 char* VAR_6 ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_8 (char*,void*,size_t*,int ,int ) ;

__attribute__((used)) static trans_t
FUNC_9(isess_t *VAR_7)
{

     int VAR_8, VAR_9, VAR_10;
     char *VAR_11;

     FUNC_2(3);

     if((VAR_7->flags & VAR_3) == 0) {
   return VAR_4;
     }
     if(VAR_7->fd == -1) {
   VAR_9 = FUNC_5(VAR_6, VAR_2);
   if(VAR_9 < 0) {
        FUNC_6(VAR_6);
        return 0;
   }
   {

        size_t VAR_12;
        VAR_12 = sizeof(VAR_7->isid);
        if(FUNC_8("net.iscsi_initiator.isid", (void *)VAR_7->isid, (size_t *)&VAR_12, 0, 0) != 0)
      FUNC_6("sysctlbyname");
   }
   if(FUNC_4(VAR_9, VAR_0, &VAR_8)) {
        FUNC_6("ISCSISETSES");
        return 0;
   }
   FUNC_0(&VAR_11, "%s%d", VAR_6, VAR_8);
   VAR_10 = FUNC_5(VAR_11, VAR_2);
   if(VAR_10 < 0) {
        FUNC_6(VAR_11);
        FUNC_3(VAR_11);
        return 0;
   }
   FUNC_3(VAR_11);
   FUNC_1(VAR_9);
   VAR_7->fd = VAR_10;

   if(FUNC_7(VAR_7, 0) != 0)
        return -1;
     }

     if(FUNC_4(VAR_7->fd, VAR_1, &VAR_7->soc)) {
   FUNC_6("ISCSISETSOC");
   return 0;
     }

     return VAR_5;
}
