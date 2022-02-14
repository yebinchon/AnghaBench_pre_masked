
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int intmax_t ;
typedef int intbuf ;
typedef scalar_t__ int64_t ;


 int FUNC_0 (char*,int,char*,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int,char*,int ) ;

__attribute__((used)) static int
FUNC_3 (int64_t VAR_0, void *VAR_1)
{
 int VAR_2 = *(int *)VAR_1;
 char VAR_3[64];

 FUNC_0 (VAR_3, sizeof (VAR_3), "%jd", (intmax_t)VAR_0);
 return FUNC_2 (VAR_2, VAR_3, FUNC_1 (VAR_3));
}
