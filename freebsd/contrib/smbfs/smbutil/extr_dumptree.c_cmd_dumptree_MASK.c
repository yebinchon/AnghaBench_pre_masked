
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smb_vc_info {int dummy; } ;
struct smb_share_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (void*) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (void*) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (char*) ;
 void* FUNC_6 () ;

int
FUNC_7(int VAR_2, char *VAR_3[])
{
 void *VAR_4, *VAR_5;
 int *VAR_6;

 FUNC_5("SMB connections:\n");




 VAR_4 = FUNC_6();
 if (VAR_4 == ((void*)0)) {
  FUNC_5("None\n");
  return 0;
 }
 VAR_5 = VAR_4;
 for (;;) {
  VAR_6 = VAR_4;
  if (*VAR_6 == VAR_1)
   break;
  switch (*VAR_6) {
      case 128:
   FUNC_4(VAR_4);
   VAR_4 = (struct smb_vc_info*)VAR_4 + 1;
   break;
      case 129:
   FUNC_3(VAR_4);
   VAR_4 = (struct smb_share_info*)VAR_4 + 1;
   break;
      default:
   FUNC_5("Out of sync\n");
   FUNC_1(VAR_5);
   return 1;

  }
 }
 FUNC_1(VAR_5);
 FUNC_5("\n");
 return 0;
}
