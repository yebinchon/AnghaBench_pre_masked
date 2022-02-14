
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct sco_conn {int dummy; } ;
struct hci_conn {struct sco_conn* sco_data; } ;


 int FUNC_0 (char*,struct hci_conn*,struct sco_conn*,int) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sco_conn*) ;
 int FUNC_4 (struct sock*,int) ;
 struct sock* FUNC_5 (struct sco_conn*) ;
 int FUNC_6 (struct sock*) ;
 int FUNC_7 (struct sock*) ;

__attribute__((used)) static int FUNC_8(struct hci_conn *VAR_0, int VAR_1)
{
 struct sco_conn *VAR_2;
 struct sock *VAR_3;

 if (!(VAR_2 = VAR_0->sco_data))
  return 0;

 FUNC_0("hcon %p conn %p, err %d", VAR_0, VAR_2, VAR_1);


 if ((VAR_3 = FUNC_5(VAR_2))) {
  FUNC_1(VAR_3);
  FUNC_6(VAR_3);
  FUNC_4(VAR_3, VAR_1);
  FUNC_2(VAR_3);
  FUNC_7(VAR_3);
 }

 VAR_0->sco_data = ((void*)0);
 FUNC_3(VAR_2);
 return 0;
}
