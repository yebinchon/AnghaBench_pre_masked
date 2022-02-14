
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssh {struct kex* kex; } ;
struct kex {int kex_type; int we_need; int * dh; } ;
typedef int BIGNUM ;


 int FUNC_0 (int ,int const*) ;
 int FUNC_1 (int *,int const**,int *) ;
 int FUNC_2 (int ,int *) ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *,int) ;
 int * FUNC_5 () ;
 int * FUNC_6 () ;
 int * FUNC_7 () ;
 int * FUNC_8 () ;
 int FUNC_9 (int ,char*) ;
 int VAR_4 ;
 int FUNC_10 (struct ssh*,int ,int *) ;
 int FUNC_11 (struct ssh*,int const*) ;
 int FUNC_12 (struct ssh*) ;
 int FUNC_13 (struct ssh*,int ) ;
 int VAR_5 ;

int
FUNC_14(struct ssh *VAR_6)
{
 struct kex *VAR_7 = VAR_6->kex;
 int VAR_8;
 const BIGNUM *VAR_9;


 switch (VAR_7->kex_type) {
 case 128:
  VAR_7->dh = FUNC_5();
  break;
 case 132:
 case 131:
  VAR_7->dh = FUNC_6();
  break;
 case 130:
  VAR_7->dh = FUNC_7();
  break;
 case 129:
  VAR_7->dh = FUNC_8();
  break;
 default:
  VAR_8 = VAR_3;
  goto out;
 }
 if (VAR_7->dh == ((void*)0)) {
  VAR_8 = VAR_2;
  goto out;
 }
 FUNC_3("sending SSH2_MSG_KEXDH_INIT");
 if ((VAR_8 = FUNC_4(VAR_7->dh, VAR_7->we_need * 8)) != 0)
  goto out;
 FUNC_1(VAR_7->dh, &VAR_9, ((void*)0));
 if ((VAR_8 = FUNC_13(VAR_6, VAR_0)) != 0 ||
     (VAR_8 = FUNC_11(VAR_6, VAR_9)) != 0 ||
     (VAR_8 = FUNC_12(VAR_6)) != 0)
  goto out;






 FUNC_3("expecting SSH2_MSG_KEXDH_REPLY");
 FUNC_10(VAR_6, VAR_1, &VAR_4);
 VAR_8 = 0;
 out:
 return VAR_8;
}
