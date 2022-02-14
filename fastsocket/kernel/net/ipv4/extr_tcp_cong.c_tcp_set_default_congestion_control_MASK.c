
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcp_congestion_ops {int list; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (char*,char const*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct tcp_congestion_ops* FUNC_5 (char const*) ;
 int VAR_3 ;
 int VAR_4 ;

int FUNC_6(const char *VAR_5)
{
 struct tcp_congestion_ops *VAR_6;
 int VAR_7 = -VAR_1;

 FUNC_3(&VAR_4);
 VAR_6 = FUNC_5(VAR_5);
 if (VAR_6) {
  VAR_6->flags |= VAR_2;
  FUNC_1(&VAR_6->list, &VAR_3);
  VAR_7 = 0;
 }
 FUNC_4(&VAR_4);

 return VAR_7;
}
