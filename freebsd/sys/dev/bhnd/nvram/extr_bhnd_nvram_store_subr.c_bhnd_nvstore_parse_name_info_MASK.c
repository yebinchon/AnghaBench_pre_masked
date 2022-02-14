
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
typedef void* u_long ;
typedef scalar_t__ bhnd_nvstore_name_type ;
struct TYPE_7__ {char const* value; size_t value_len; } ;
struct TYPE_6__ {void* value; } ;
struct TYPE_8__ {TYPE_2__ str; TYPE_1__ alias; } ;
struct TYPE_9__ {char const* name; TYPE_3__ path; void* path_type; void* type; } ;
typedef TYPE_4__ bhnd_nvstore_name_info ;


 int VAR_0 ;
 void* VAR_1 ;
 scalar_t__ VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 char const* VAR_5 ;
 size_t VAR_6 ;
 void* VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (char const) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char const*,char*,int) ;
 char* FUNC_4 (char const*,char) ;
 void* FUNC_5 (char const*,char**,int) ;

int
FUNC_6(const char *VAR_9, bhnd_nvstore_name_type VAR_10,
    uint32_t VAR_11, bhnd_nvstore_name_info *VAR_12)
{
 const char *VAR_13;
 char *VAR_14;


 if (VAR_11 & VAR_0) {

  if (FUNC_3(VAR_9, "devpath", FUNC_2("devpath")) == 0) {
   u_long VAR_15;



   if (VAR_10 != VAR_2 &&
       !FUNC_1(VAR_9))
   {
    return (VAR_8);
   }



   VAR_13 = VAR_9 + FUNC_2("devpath");
   VAR_15 = FUNC_5(VAR_13, &VAR_14, 10);
   if (VAR_14 != VAR_13 && *VAR_14 == '\0') {
    VAR_12->type = VAR_1;
    VAR_12->path_type = VAR_3;
    VAR_12->name = VAR_9;
    VAR_12->path.alias.value = VAR_15;

    return (0);
   }
  }


  if (FUNC_0(*VAR_9)) {
   u_long VAR_16;


   VAR_16 = FUNC_5(VAR_9, &VAR_14, 10);
   if (VAR_14 != VAR_9 && *VAR_14 == ':') {


    if (VAR_10 != VAR_2 &&
        !FUNC_1(VAR_9))
    {
     return (VAR_8);
    }

    VAR_12->type = VAR_7;
    VAR_12->path_type = VAR_3;


    VAR_12->name = VAR_14 + 1;
    VAR_12->path.alias.value = VAR_16;

    return (0);
   }
  }


  if ((VAR_13 = FUNC_4(VAR_9, '/')) != ((void*)0)) {
   const char *VAR_17, *VAR_18;
   size_t VAR_19;



   VAR_19 = VAR_13 - VAR_9;
   VAR_17 = VAR_9;



   VAR_18 = VAR_17 + VAR_19 + 1;



   while (VAR_19 > 0 && VAR_17[VAR_19-1] == '/')
    VAR_19--;



   if (VAR_10 != VAR_2 &&
       !FUNC_1(VAR_18))
   {
    return (VAR_8);
   }



   VAR_12->type = VAR_7;
   VAR_12->path_type = VAR_4;
   VAR_12->name = VAR_18;
   VAR_12->path.str.value = VAR_17;
   VAR_12->path.str.value_len = VAR_19;

   return (0);
  }
 }



 if (VAR_10 != VAR_2 &&
     !FUNC_1(VAR_9))
 {

  return (VAR_8);
 }

 VAR_12->type = VAR_7;
 VAR_12->path_type = VAR_4;
 VAR_12->name = VAR_9;
 VAR_12->path.str.value = VAR_5;
 VAR_12->path.str.value_len = VAR_6;

 return (0);
}
