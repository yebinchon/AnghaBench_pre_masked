
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stat {int dummy; } ;
struct TYPE_2__ {int conn; } ;
typedef int Attrib ;


 int FUNC_0 (int *,struct stat*) ;
 TYPE_1__ VAR_0 ;
 int * FUNC_1 (int ,char*,int) ;

__attribute__((used)) static int
FUNC_2(const char *VAR_1, struct stat *VAR_2)
{
 Attrib *VAR_3;

 if (!(VAR_3 = FUNC_1(VAR_0.conn, (char *)VAR_1, 1)))
  return(-1);

 FUNC_0(VAR_3, VAR_2);

 return(0);
}
