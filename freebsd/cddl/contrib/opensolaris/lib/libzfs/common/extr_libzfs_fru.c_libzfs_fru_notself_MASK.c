
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* libzfs_chassis_id; int * libzfs_fru_hash; } ;
typedef TYPE_1__ libzfs_handle_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 size_t FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char const*,char*,size_t) ;
 char* FUNC_3 (char const*,char*) ;

boolean_t
FUNC_4(libzfs_handle_t *VAR_2, const char *VAR_3)
{
 const char *VAR_4;
 size_t VAR_5;

 if (VAR_2->libzfs_fru_hash == ((void*)0))
  FUNC_0(VAR_2);

 if (VAR_2->libzfs_chassis_id[0] == '\0')
  return (VAR_0);

 if (FUNC_3(VAR_3, "/chassis=0/") == ((void*)0))
  return (VAR_0);

 if ((VAR_4 = FUNC_3(VAR_3, ":chassis-id=")) == ((void*)0))
  return (VAR_0);

 VAR_4 += 12;
 VAR_5 = FUNC_1(VAR_2->libzfs_chassis_id);
 if (FUNC_2(VAR_4, VAR_2->libzfs_chassis_id, VAR_5) == 0 &&
     (VAR_4[VAR_5] == '/' || VAR_4[VAR_5] == ':'))
  return (VAR_0);

 return (VAR_1);
}
