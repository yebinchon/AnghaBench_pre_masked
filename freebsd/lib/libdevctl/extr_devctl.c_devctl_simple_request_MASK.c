
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct devreq {int dr_flags; int dr_name; } ;
typedef int req ;


 int VAR_0 ;
 int FUNC_0 (int ,struct devreq*) ;
 int VAR_1 ;
 int FUNC_1 (struct devreq*,int ,int) ;
 int FUNC_2 (int ,char const*,int) ;

__attribute__((used)) static int
FUNC_3(u_long VAR_2, const char *VAR_3, int VAR_4)
{
 struct devreq VAR_5;

 FUNC_1(&VAR_5, 0, sizeof(VAR_5));
 if (FUNC_2(VAR_5.dr_name, VAR_3, sizeof(VAR_5.dr_name)) >=
     sizeof(VAR_5.dr_name)) {
  VAR_1 = VAR_0;
  return (-1);
 }
 VAR_5.dr_flags = VAR_4;
 return (FUNC_0(VAR_2, &VAR_5));
}
