
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sec; } ;
struct sta_info {TYPE_1__ connected_time; } ;
struct os_reltime {scalar_t__ sec; } ;


 int FUNC_0 (TYPE_1__*,struct os_reltime*) ;
 int FUNC_1 (char*,size_t,char*,unsigned int) ;
 scalar_t__ FUNC_2 (size_t,int) ;

__attribute__((used)) static int FUNC_3(struct sta_info *VAR_0,
         char *VAR_1, size_t VAR_2)
{
 struct os_reltime VAR_3;
 int VAR_4;

 if (!VAR_0->connected_time.sec)
  return 0;

 FUNC_0(&VAR_0->connected_time, &VAR_3);

 VAR_4 = FUNC_1(VAR_1, VAR_2, "connected_time=%u\n",
     (unsigned int) VAR_3.sec);
 if (FUNC_2(VAR_2, VAR_4))
  return 0;
 return VAR_4;
}
