
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct passwd {int dummy; } ;
typedef int cap_channel_t ;
typedef int buf ;


 int VAR_0 ;
 struct passwd* FUNC_0 (int *) ;
 int FUNC_1 (int *,struct passwd*,char*,int,struct passwd**) ;
 struct passwd* FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,char*,struct passwd*,char*,int,struct passwd**) ;
 struct passwd* FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ,struct passwd*,char*,int,struct passwd**) ;
 int FUNC_6 (int *) ;
 unsigned int FUNC_7 (struct passwd*) ;

__attribute__((used)) static bool
FUNC_8(cap_channel_t *VAR_1, unsigned int VAR_2)
{
 char VAR_3[1024];
 struct passwd *VAR_4;
 struct passwd VAR_5;


 FUNC_6(VAR_1);
 VAR_4 = FUNC_0(VAR_1);
 if ((FUNC_7(VAR_4) & ~VAR_2) != 0)
  return (0);

 FUNC_6(VAR_1);
 FUNC_1(VAR_1, &VAR_5, VAR_3, sizeof(VAR_3), &VAR_4);
 if ((FUNC_7(VAR_4) & ~VAR_2) != 0)
  return (0);

 VAR_4 = FUNC_2(VAR_1, "root");
 if ((FUNC_7(VAR_4) & ~VAR_2) != 0)
  return (0);

 FUNC_3(VAR_1, "root", &VAR_5, VAR_3, sizeof(VAR_3), &VAR_4);
 if ((FUNC_7(VAR_4) & ~VAR_2) != 0)
  return (0);

 VAR_4 = FUNC_4(VAR_1, VAR_0);
 if ((FUNC_7(VAR_4) & ~VAR_2) != 0)
  return (0);

 FUNC_5(VAR_1, VAR_0, &VAR_5, VAR_3, sizeof(VAR_3), &VAR_4);
 if ((FUNC_7(VAR_4) & ~VAR_2) != 0)
  return (0);

 return (1);
}
