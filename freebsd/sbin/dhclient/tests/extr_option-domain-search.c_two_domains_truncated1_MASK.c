
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct packet {struct option_data* options; } ;
struct option_data {int len; int data; } ;


 size_t VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int FUNC_1 (struct packet*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (int ) ;

void
FUNC_6()
{
 int VAR_2;
 struct option_data *VAR_3;
 struct packet VAR_4;

 char *VAR_5 = "\007example\003org\0\007example\003com";

 VAR_3 = &VAR_4.options[VAR_0];
 VAR_3->len = 25;
 VAR_3->data = FUNC_3(VAR_3->len);
 FUNC_4(VAR_3->data, VAR_5, VAR_3->len);

 VAR_2 = FUNC_5(VAR_1);
 if (VAR_2 == 0)
  FUNC_1(&VAR_4);

 if (VAR_2 != 1)
  FUNC_0();

 FUNC_2(VAR_3->data);
}
