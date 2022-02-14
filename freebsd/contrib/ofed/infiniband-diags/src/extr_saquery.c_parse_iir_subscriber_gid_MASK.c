
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int raw; } ;
struct TYPE_5__ {TYPE_1__ subscriber_gid; } ;
typedef TYPE_2__ ib_inform_info_record_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,char*) ;
 int FUNC_2 (int ,char*,int *) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_3(char *VAR_3, ib_inform_info_record_t *VAR_4)
{
       int VAR_5 = FUNC_2(VAR_0,VAR_3,&(VAR_4->subscriber_gid.raw));
       if(VAR_5 < 1){
          FUNC_1(VAR_2, "Invalid SubscriberGID specified: \"%s\"\n",VAR_3);
          FUNC_0(VAR_1);
       }
       return VAR_5;
}
