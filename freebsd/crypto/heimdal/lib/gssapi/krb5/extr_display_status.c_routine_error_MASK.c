
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
 "An unsupported mechanism was requested",
 "An invalid name was supplied",
 "A supplied name was of an unsupported type",
 "Incorrect channel bindings were supplied",
 "An invalid status code was supplied",
 "A token had an invalid MIC",
 "No credentials were supplied, "
 "or the credentials were unavailable or inaccessible.",
 "No context has been established",
 "A token was invalid",
 "A credential was invalid",
 "The referenced credentials have expired",
 "The context has expired",
 "Miscellaneous failure (see text)",
 "The quality-of-protection requested could not be provide",
 "The operation is forbidden by local security policy",
 "The operation or option is not available",
 "The requested credential element already exists",
 "The provided name was not a mechanism name.",
    };

    VAR_1 >>= VAR_0;

    if (VAR_1 == 0)
 return "";
    else if (VAR_1 >= sizeof(VAR_2)/sizeof(*VAR_2))
 return "unknown routine error";
    else
 return VAR_2[VAR_1];
}
