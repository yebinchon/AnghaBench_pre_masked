
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ssh {TYPE_1__* kex; } ;
struct TYPE_2__ {scalar_t__ ext_info_c; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int FUNC_1 (struct ssh*) ;
 int FUNC_2 (struct ssh*) ;
 int FUNC_3 (struct ssh*,int ,int *) ;
 int FUNC_4 (struct ssh*) ;
 int FUNC_5 (struct ssh*,int ) ;

int
FUNC_6(struct ssh *VAR_2)
{
 int VAR_3;

 FUNC_1(VAR_2);
 if ((VAR_3 = FUNC_5(VAR_2, VAR_0)) != 0 ||
     (VAR_3 = FUNC_4(VAR_2)) != 0)
  return VAR_3;
 FUNC_0("SSH2_MSG_NEWKEYS sent");
 FUNC_0("expecting SSH2_MSG_NEWKEYS");
 FUNC_3(VAR_2, VAR_0, &VAR_1);
 if (VAR_2->kex->ext_info_c)
  if ((VAR_3 = FUNC_2(VAR_2)) != 0)
   return VAR_3;
 return 0;
}
