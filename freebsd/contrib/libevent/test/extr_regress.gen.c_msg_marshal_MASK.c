
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msg {int run_length; int * run_data; scalar_t__ run_set; int attack_data; scalar_t__ attack_set; int to_name_data; int from_name_data; } ;
struct evbuffer {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct evbuffer*,int ,int ) ;
 int FUNC_1 (struct evbuffer*,int ,int ) ;
 int FUNC_2 (struct evbuffer*,int ,int ) ;

void
FUNC_3(struct evbuffer *VAR_4, const struct msg *VAR_5){
  FUNC_2(VAR_4, VAR_1, VAR_5->from_name_data);
  FUNC_2(VAR_4, VAR_3, VAR_5->to_name_data);
  if (VAR_5->attack_set) {
    FUNC_0(VAR_4, VAR_0, VAR_5->attack_data);
  }
  if (VAR_5->run_set) {
    {
      int VAR_6;
      for (VAR_6 = 0; VAR_6 < VAR_5->run_length; ++VAR_6) {
    FUNC_1(VAR_4, VAR_2, VAR_5->run_data[VAR_6]);
      }
    }
  }
}
