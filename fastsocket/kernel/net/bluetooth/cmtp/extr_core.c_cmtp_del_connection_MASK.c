
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmtp_session {int terminate; int transmit; } ;
struct cmtp_conndel_req {int bdaddr; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 struct cmtp_session* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct cmtp_session*) ;
 int VAR_1 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

int FUNC_7(struct cmtp_conndel_req *VAR_2)
{
 struct cmtp_session *VAR_3;
 int VAR_4 = 0;

 FUNC_0("");

 FUNC_4(&VAR_1);

 VAR_3 = FUNC_1(&VAR_2->bdaddr);
 if (VAR_3) {

  FUNC_5(&VAR_3->transmit);


  FUNC_2(&VAR_3->terminate);
  FUNC_3(VAR_3);
 } else
  VAR_4 = -VAR_0;

 FUNC_6(&VAR_1);
 return VAR_4;
}
