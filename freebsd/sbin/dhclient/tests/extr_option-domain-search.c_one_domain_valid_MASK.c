
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
 scalar_t__ FUNC_6 (int ,char*) ;
 int FUNC_7 (char*) ;

void
FUNC_8()
{
 int VAR_2;
 struct packet VAR_3;
 struct option_data *VAR_4;

 char *VAR_5 = "\007example\003org\0";
 char *VAR_6 = "example.org.";

 VAR_4 = &VAR_3.options[VAR_0];
 VAR_4->len = 13;
 VAR_4->data = FUNC_3(VAR_4->len);
 FUNC_4(VAR_4->data, VAR_5, VAR_4->len);

 VAR_2 = FUNC_5(VAR_1);
 if (VAR_2 == 0)
  FUNC_1(&VAR_3);

 if (VAR_4->len != FUNC_7(VAR_6) ||
     FUNC_6(VAR_4->data, VAR_6) != 0)
  FUNC_0();

 FUNC_2(VAR_4->data);
}
