
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cred {int cap_permitted; int cap_effective; int fsuid; } ;


 int VAR_0 ;




 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct cred*,struct cred const*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;

int FUNC_4(struct cred *VAR_2, const struct cred *VAR_3, int VAR_4)
{
 switch (VAR_4) {
 case 129:
 case 130:
 case 128:


  if (!FUNC_3(VAR_1))
   FUNC_1(VAR_2, VAR_3);
  break;

 case 131:






  if (!FUNC_3(VAR_1)) {
   if (VAR_3->fsuid == 0 && VAR_2->fsuid != 0)
    VAR_2->cap_effective =
     FUNC_0(VAR_2->cap_effective);

   if (VAR_3->fsuid != 0 && VAR_2->fsuid == 0)
    VAR_2->cap_effective =
     FUNC_2(VAR_2->cap_effective,
        VAR_2->cap_permitted);
  }
  break;

 default:
  return -VAR_0;
 }

 return 0;
}
