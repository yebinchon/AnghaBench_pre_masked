
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kill {int how_often_length; int * how_often_data; scalar_t__ how_often_set; int action_data; int weapon_data; } ;
struct evbuffer {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct evbuffer*,int ,int ) ;
 int FUNC_1 (struct evbuffer*,int ,int ) ;

void
FUNC_2(struct evbuffer *VAR_3, const struct kill *VAR_4){
  FUNC_1(VAR_3, VAR_2, VAR_4->weapon_data);
  FUNC_1(VAR_3, VAR_0, VAR_4->action_data);
  if (VAR_4->how_often_set) {
    {
      int VAR_5;
      for (VAR_5 = 0; VAR_5 < VAR_4->how_often_length; ++VAR_5) {
    FUNC_0(VAR_3, VAR_1, VAR_4->how_often_data[VAR_5]);
      }
    }
  }
}
