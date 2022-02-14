
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct so_list {char* so_original_name; char* so_name; struct so_list* next; TYPE_1__* lm_info; } ;
struct TYPE_2__ {scalar_t__ base_address; } ;
typedef scalar_t__ CORE_ADDR ;


 scalar_t__ FUNC_0 (char*,char*,int) ;
 int FUNC_1 (struct so_list*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (struct so_list*,int ,int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 char* FUNC_4 (int) ;
 int FUNC_5 (char*,char*,int) ;
 int FUNC_6 (scalar_t__,char**,int,int*) ;
 int FUNC_7 (char*,char*,...) ;
 int FUNC_8 (char*) ;
 void* FUNC_9 (int) ;

__attribute__((used)) static struct so_list *
FUNC_10 (void)
{
 struct so_list *VAR_6, **VAR_7, *VAR_8;
 CORE_ADDR VAR_9, VAR_10;
 char *VAR_11;
 int VAR_12;

 if (VAR_1 == 0 || VAR_0 == 0 ||
     VAR_2 == 0 || VAR_3 == 0 || VAR_4 == 0)
  return (((void*)0));

 VAR_6 = ((void*)0);
 VAR_7 = &VAR_6;





 VAR_10 = FUNC_3(VAR_0);
 for (VAR_9 = FUNC_3(VAR_1); VAR_9 != 0;
      VAR_9 = FUNC_3(VAR_9 + VAR_4)) {

  if (VAR_9 == VAR_10)
   continue;

  VAR_8 = FUNC_9(sizeof(*VAR_8));
  FUNC_2(VAR_8, 0, sizeof(*VAR_8));

  VAR_8->lm_info = FUNC_9(sizeof(*VAR_8->lm_info));
  VAR_8->lm_info->base_address = 0;


  FUNC_6(FUNC_3(VAR_9 + VAR_3),
      &VAR_11, sizeof(VAR_8->so_original_name), &VAR_12);
  if (VAR_12 != 0) {
   FUNC_7("kld_current_sos: Can't read filename: %s\n",
       FUNC_4(VAR_12));
   FUNC_1(VAR_8);
   continue;
  }
  FUNC_5(VAR_8->so_original_name, VAR_11,
      sizeof(VAR_8->so_original_name));
  FUNC_8(VAR_11);





  if (FUNC_0(VAR_8->so_original_name, VAR_8->so_name,
      sizeof(VAR_8->so_name))) {
                         ;
  } else if (VAR_5 != 0) {
   FUNC_6(FUNC_3(VAR_9 + VAR_5),
       &VAR_11, sizeof(VAR_8->so_name), &VAR_12);
   if (VAR_12 != 0) {
    FUNC_7(
      "kld_current_sos: Can't read pathname for \"%s\": %s\n",
        VAR_8->so_original_name,
        FUNC_4(VAR_12));
    FUNC_5(VAR_8->so_name, VAR_8->so_original_name,
        sizeof(VAR_8->so_name));
   } else {
    FUNC_5(VAR_8->so_name, VAR_11,
        sizeof(VAR_8->so_name));
    FUNC_8(VAR_11);
   }
  } else
   FUNC_5(VAR_8->so_name, VAR_8->so_original_name,
       sizeof(VAR_8->so_name));


  VAR_8->lm_info->base_address = FUNC_3(VAR_9 + VAR_2);
  if (VAR_8->lm_info->base_address == 0) {
   FUNC_7(
       "kld_current_sos: Invalid address for kld \"%s\"",
       VAR_8->so_original_name);
   FUNC_1(VAR_8);
   continue;
  }


  *VAR_7 = VAR_8;
  VAR_7 = &VAR_8->next;
 }

 return (VAR_6);
}
