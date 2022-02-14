
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pam_repository {int dummy; } ;
struct pam_conv {int dummy; } ;
struct TYPE_3__ {void** item; } ;
typedef TYPE_1__ pam_handle_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (void*) ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int FUNC_2 (int ) ;
 void* FUNC_3 (size_t) ;
 int FUNC_4 (void*,void const*,size_t) ;
 int FUNC_5 (void*,int,size_t) ;
 int FUNC_6 (void const*) ;

int
FUNC_7(pam_handle_t *VAR_3,
 int VAR_4,
 const void *VAR_5)
{
 void **VAR_6;
 size_t VAR_7, VAR_8;

 FUNC_0(VAR_4);
 VAR_6 = &VAR_3->item[VAR_4];
 VAR_8 = VAR_7 = 0;
 switch (VAR_4) {
 case 131:

  if (*VAR_6 != ((void*)0) && VAR_5 != ((void*)0))
   FUNC_2(VAR_0);

 case 129:
 case 140:
 case 136:
 case 130:
 case 133:
 case 132:
 case 128:
 case 139:
 case 135:
 case 137:
  if (*VAR_6 != ((void*)0))
   VAR_8 = FUNC_6(*VAR_6) + 1;
  if (VAR_5 != ((void*)0))
   VAR_7 = FUNC_6(VAR_5) + 1;
  break;
 case 134:
  VAR_8 = VAR_7 = sizeof(struct pam_repository);
  break;
 case 138:
  VAR_8 = VAR_7 = sizeof(struct pam_conv);
  break;
 default:
  FUNC_2(VAR_0);
 }
 if (*VAR_6 != ((void*)0)) {
  FUNC_5(*VAR_6, 0xd0, VAR_8);
  FUNC_1(*VAR_6);
 }
 if (VAR_5 != ((void*)0)) {
  if ((*VAR_6 = FUNC_3(VAR_7)) == ((void*)0))
   FUNC_2(VAR_1);
  FUNC_4(*VAR_6, VAR_5, VAR_7);
 } else {
  *VAR_6 = ((void*)0);
 }
 FUNC_2(VAR_2);
}
