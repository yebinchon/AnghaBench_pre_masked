
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct devreq {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ,struct devreq*) ;
 int FUNC_1 (char*,int ) ;

__attribute__((used)) static int
FUNC_2(u_long VAR_1, struct devreq *VAR_2)
{
 static int VAR_3 = -1;

 if (VAR_3 == -1) {
  VAR_3 = FUNC_1("/dev/devctl2", VAR_0);
  if (VAR_3 == -1)
   return (-1);
 }
 return (FUNC_0(VAR_3, VAR_1, VAR_2));
}
