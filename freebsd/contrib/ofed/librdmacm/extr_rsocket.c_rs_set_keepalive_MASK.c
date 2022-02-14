
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rsocket {int opts; int keepalive_time; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,char*) ;
 int FUNC_2 (int *,char*,int*) ;
 int FUNC_3 (int *,struct rsocket*,int ) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_4(struct rsocket *VAR_4, int VAR_5)
{
 FILE *VAR_6;
 int VAR_7;

 if ((VAR_5 && (VAR_4->opts & VAR_0)) ||
     (!VAR_5 && !(VAR_4->opts & VAR_0)))
  return 0;

 if (VAR_5) {
  if (!VAR_4->keepalive_time) {
   if ((VAR_6 = FUNC_1("/proc/sys/net/ipv4/tcp_keepalive_time", "r"))) {
    if (FUNC_2(VAR_6, "%u", &VAR_4->keepalive_time) != 1)
     VAR_4->keepalive_time = 7200;
    FUNC_0(VAR_6);
   } else {
    VAR_4->keepalive_time = 7200;
   }
  }
  VAR_7 = FUNC_3(&VAR_3, VAR_4, VAR_1);
 } else {
  VAR_7 = FUNC_3(&VAR_3, VAR_4, VAR_2);
 }

 return VAR_7;
}
