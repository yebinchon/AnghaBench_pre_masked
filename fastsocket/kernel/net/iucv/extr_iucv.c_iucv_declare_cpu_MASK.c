
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ipbfadr1; } ;
union iucv_param {TYPE_1__ db; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int ) ;
 int FUNC_1 (int,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_1 ;
 int FUNC_5 (int ,union iucv_param*) ;
 int VAR_2 ;
 int * VAR_3 ;
 scalar_t__ VAR_4 ;
 union iucv_param** VAR_5 ;
 int FUNC_6 (union iucv_param*,int ,int) ;
 int FUNC_7 (char*,int,int,char*) ;
 int FUNC_8 () ;
 int FUNC_9 (int ) ;

__attribute__((used)) static void FUNC_10(void *VAR_6)
{
 int VAR_7 = FUNC_8();
 union iucv_param *VAR_8;
 int VAR_9;

 if (FUNC_0(VAR_7, VAR_1))
  return;


 VAR_8 = VAR_5[VAR_7];
 FUNC_6(VAR_8, 0, sizeof(union iucv_param));
 VAR_8->db.ipbfadr1 = FUNC_9(VAR_3[VAR_7]);
 VAR_9 = FUNC_5(VAR_0, VAR_8);
 if (VAR_9) {
  char *VAR_10 = "Unknown";
  switch (VAR_9) {
  case 0x03:
   VAR_10 = "Directory error";
   break;
  case 0x0a:
   VAR_10 = "Invalid length";
   break;
  case 0x13:
   VAR_10 = "Buffer already exists";
   break;
  case 0x3e:
   VAR_10 = "Buffer overlap";
   break;
  case 0x5c:
   VAR_10 = "Paging or storage error";
   break;
  }
  FUNC_7("Defining an interrupt buffer on CPU %i"
      " failed with 0x%02x (%s)\n", VAR_7, VAR_9, VAR_10);
  return;
 }


 FUNC_1(VAR_7, VAR_1);

 if (VAR_4 == 0 || FUNC_2(VAR_2))

  FUNC_3(((void*)0));
 else

  FUNC_4(((void*)0));
}
