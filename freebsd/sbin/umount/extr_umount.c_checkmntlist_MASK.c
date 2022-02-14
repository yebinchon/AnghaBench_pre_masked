
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct statfs {int dummy; } ;
typedef int fsid_t ;


 int VAR_0 ;
 struct statfs* FUNC_0 (char*,char*,int *,int ) ;
 scalar_t__ FUNC_1 (char*,int *) ;

struct statfs *
FUNC_2(char *VAR_1)
{
 struct statfs *VAR_2;
 fsid_t VAR_3;

 VAR_2 = ((void*)0);
 if (FUNC_1(VAR_1, &VAR_3) == 0)
  VAR_2 = FUNC_0(((void*)0), ((void*)0), &VAR_3, VAR_0);
 if (VAR_2 == ((void*)0))
  VAR_2 = FUNC_0(((void*)0), VAR_1, ((void*)0), VAR_0);
 if (VAR_2 == ((void*)0))
  VAR_2 = FUNC_0(VAR_1, ((void*)0), ((void*)0), VAR_0);
 return (VAR_2);
}
