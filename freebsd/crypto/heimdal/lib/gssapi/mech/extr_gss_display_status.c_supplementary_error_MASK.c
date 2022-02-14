
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
 "normal completion",
 "continuation call to routine required",
 "duplicate per-message token detected",
 "timed-out per-message token detected",
 "reordered (early) per-message token detected",
 "skipped predecessor token(s) detected"
    };

    VAR_1 >>= VAR_0;

    if (VAR_1 >= sizeof(VAR_2)/sizeof(*VAR_2))
 return "unknown routine error";
    else
 return VAR_2[VAR_1];
}
