
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cred {int jit_keyring; } ;


 int VAR_0 ;
 int VAR_1 ;
 long VAR_2 ;
 int FUNC_0 (struct cred*) ;
 int FUNC_1 (struct cred*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct cred*) ;
 int FUNC_4 (struct cred*) ;
 int VAR_3 ;
 struct cred* FUNC_5 () ;

long FUNC_6(int VAR_4)
{
 struct cred *VAR_5;
 int VAR_6, VAR_7;

 VAR_7 = FUNC_2(VAR_3);

 if (VAR_4 == 134)
  return VAR_7;

 VAR_5 = FUNC_5();
 if (!VAR_5)
  return -VAR_2;

 switch (VAR_4) {
 case 130:
  VAR_6 = FUNC_4(VAR_5);
  if (VAR_6 < 0)
   goto error;
  goto set;

 case 133:
  VAR_6 = FUNC_3(VAR_5);
  if (VAR_6 < 0) {
   if (VAR_6 != -VAR_0)
    goto error;
   VAR_6 = 0;
  }
  goto set;

 case 136:
 case 131:
 case 129:
 case 128:
 case 132:
  goto set;

 case 134:
 case 135:
 default:
  VAR_6 = -VAR_1;
  goto error;
 }

set:
 VAR_5->jit_keyring = VAR_4;
 FUNC_1(VAR_5);
 return VAR_7;
error:
 FUNC_0(VAR_5);
 return VAR_6;
}
