
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*,char*,void**) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (void*) ;

__attribute__((used)) static int
FUNC_3(const char *VAR_0,
   void **VAR_1)
{
    int VAR_2;

    VAR_2 = FUNC_0(VAR_0, "socket", VAR_1);
    if (VAR_2)
 return VAR_2;
    VAR_2 = FUNC_2(*VAR_1);
    if (VAR_2)
 FUNC_1(*VAR_1);

    return VAR_2;
}
