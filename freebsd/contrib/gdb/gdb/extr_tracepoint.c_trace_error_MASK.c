
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,...) ;
 char* FUNC_1 (char*,int *,int) ;

__attribute__((used)) static void
FUNC_2 (char *VAR_0)
{
  if (*VAR_0++ != 'E')
    return;
  switch (*VAR_0)
    {
    case '1':
      if (*++VAR_0 == '0')
 FUNC_0 ("tracepoint.c: error in outgoing packet.");
      else
 FUNC_0 ("tracepoint.c: error in outgoing packet at field #%ld.",
        FUNC_1 (VAR_0, ((void*)0), 16));
    case '2':
      FUNC_0 ("trace API error 0x%s.", ++VAR_0);
    default:
      FUNC_0 ("Target returns error code '%s'.", VAR_0);
    }
}
