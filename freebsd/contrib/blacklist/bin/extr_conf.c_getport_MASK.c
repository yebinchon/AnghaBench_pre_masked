
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct servent {int s_port; } ;


 int FUNC_0 (char const*,size_t,int,void*,char*,char const*) ;
 struct servent* FUNC_1 (char const*,char*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(const char *VAR_0, size_t VAR_1, bool VAR_2, void *VAR_3, const char *VAR_4)
{
 struct servent *VAR_5;


 if ((VAR_5 = FUNC_1(VAR_4, "tcp")) != ((void*)0)) {
  *(int *)VAR_3 = FUNC_2(VAR_5->s_port);
  return 0;
 }
 if ((VAR_5 = FUNC_1(VAR_4, "udp")) != ((void*)0)) {
  *(int *)VAR_3 = FUNC_2(VAR_5->s_port);
  return 0;
 }

 return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, "service", VAR_4);
}
