
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char** VAR_0 ;

__attribute__((used)) static const char *
FUNC_0(int VAR_1)
{
 const char *VAR_2;

 VAR_2 = (VAR_1 >= 0 && VAR_1 <= 255) ? VAR_0[VAR_1] : ((void*)0);
 return VAR_2 ? VAR_2 : "unknown";
}
