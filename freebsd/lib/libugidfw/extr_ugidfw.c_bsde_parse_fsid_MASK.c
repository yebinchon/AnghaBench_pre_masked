
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsid {int dummy; } ;
struct statfs {struct fsid f_fsid; } ;


 int VAR_0 ;
 int FUNC_0 (char*,size_t,char*,char*,char*) ;
 scalar_t__ FUNC_1 (char*,struct statfs*) ;
 char* FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(char *VAR_1, struct fsid *VAR_2, size_t VAR_3, char *VAR_4)
{
 struct statfs VAR_5;

 if (FUNC_1(VAR_1, &VAR_5) < 0) {
  FUNC_0(VAR_4, VAR_3, "Unable to get id for %s: %s",
      VAR_1, FUNC_2(VAR_0));
  return (-1);
 }

 *VAR_2 = VAR_5.f_fsid;

 return (0);
}
