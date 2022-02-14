
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct ssh {int dummy; } ;
typedef int Session ;


 scalar_t__ FUNC_0 (struct ssh*,int *,char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 () ;
 char* FUNC_3 (int*) ;

__attribute__((used)) static int
FUNC_4(struct ssh *VAR_0, Session *VAR_1)
{
 u_int VAR_2, VAR_3;

 char *VAR_4 = FUNC_3(&VAR_2);
 FUNC_2();
 VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_4) == 0;
 FUNC_1(VAR_4);
 return VAR_3;
}
