
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* bootfs; } ;
typedef TYPE_1__ libbe_handle_t ;


 char const* FUNC_0 (char*,char) ;

const char *
FUNC_1(libbe_handle_t *VAR_0)
{

 if (*VAR_0->bootfs != '\0')
  return (FUNC_0(VAR_0->bootfs, '/') + sizeof(char));
 else
  return (VAR_0->bootfs);
}
