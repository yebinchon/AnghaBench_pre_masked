
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pkt {int dummy; } ;
typedef struct pkt sockaddr_u ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (struct pkt) ;
 int FUNC_2 (int,struct pkt*,struct pkt*,char*) ;

void
FUNC_3(void)
{
 struct pkt VAR_1;
 sockaddr_u VAR_2;
 int VAR_3;

 FUNC_1(VAR_1);
 FUNC_1(VAR_2);
 VAR_3 = VAR_0;
 FUNC_0(1, FUNC_2(VAR_3, &VAR_1, &VAR_2, ""));
}
