
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssh {struct kex* kex; } ;
struct kex {int kex_type; int we_need; int * dh; } ;







 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int) ;
 int * FUNC_2 () ;
 int * FUNC_3 () ;
 int * FUNC_4 () ;
 int * FUNC_5 () ;
 int VAR_3 ;
 int FUNC_6 (struct ssh*,int ,int *) ;

int
FUNC_7(struct ssh *VAR_4)
{
 struct kex *VAR_5 = VAR_4->kex;
 int VAR_6;


 switch (VAR_5->kex_type) {
 case 128:
  VAR_5->dh = FUNC_2();
  break;
 case 132:
 case 131:
  VAR_5->dh = FUNC_3();
  break;
 case 130:
  VAR_5->dh = FUNC_4();
  break;
 case 129:
  VAR_5->dh = FUNC_5();
  break;
 default:
  VAR_6 = VAR_2;
  goto out;
 }
 if (VAR_5->dh == ((void*)0)) {
  VAR_6 = VAR_1;
  goto out;
 }
 if ((VAR_6 = FUNC_1(VAR_5->dh, VAR_5->we_need * 8)) != 0)
  goto out;

 FUNC_0("expecting SSH2_MSG_KEXDH_INIT");
 FUNC_6(VAR_4, VAR_0, &VAR_3);
 VAR_6 = 0;
 out:
 return VAR_6;
}
