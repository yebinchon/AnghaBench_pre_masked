
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct servent {int s_port; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct servent* FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;

int
FUNC_2(void)
{
 static int VAR_2;
 struct servent *VAR_3;

 if (VAR_2 == 0) {
  VAR_3 = FUNC_0(VAR_1, "tcp");
  VAR_2 = VAR_3 ? FUNC_1(VAR_3->s_port) : VAR_0;
 }
 return VAR_2;
}
