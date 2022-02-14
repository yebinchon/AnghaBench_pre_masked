
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct statvfs {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char const*,struct statvfs*,int ) ;

__attribute__((used)) static void
FUNC_2(const char *VAR_1)
{
 struct statvfs VAR_2;

 if (FUNC_1(VAR_1, &VAR_2, VAR_0) == -1)
  FUNC_0("statvfs");
}
