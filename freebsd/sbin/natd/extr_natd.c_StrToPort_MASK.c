
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_short ;
struct servent {int s_port; } ;


 int FUNC_0 (int,char*,char const*,char const*) ;
 struct servent* FUNC_1 (char const*,char const*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char const*,char**,int) ;

u_short FUNC_4 (const char* VAR_0, const char* VAR_1)
{
 u_short VAR_2;
 struct servent* VAR_3;
 char* VAR_4;

 VAR_2 = FUNC_3 (VAR_0, &VAR_4, 10);
 if (VAR_4 != VAR_0)
  return FUNC_2 (VAR_2);

 VAR_3 = FUNC_1 (VAR_0, VAR_1);
 if (!VAR_3)
  FUNC_0 (1, "%s/%s: unknown service", VAR_0, VAR_1);

 return VAR_3->s_port;
}
