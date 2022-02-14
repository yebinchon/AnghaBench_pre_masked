
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int msgs ;
typedef int OM_uint32 ;


 int VAR_0 ;

__attribute__((used)) static const char *
FUNC_0(OM_uint32 VAR_1)
{
    static const char *VAR_2[] = {
 ((void*)0),
 "A required input parameter could not be read.",
 "A required output parameter could not be written.",
 "A parameter was malformed"
    };

    VAR_1 >>= VAR_0;

    if (VAR_1 == 0)
 return "";
    else if (VAR_1 >= sizeof(VAR_2)/sizeof(*VAR_2))
 return "unknown calling error";
    else
 return VAR_2[VAR_1];
}
