
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pevent {int dummy; } ;
struct event_format {int dummy; } ;


 int FUNC_0 (struct event_format*,int,void*,int) ;
 struct event_format* FUNC_1 (struct pevent*,int) ;
 int FUNC_2 (struct pevent*,void*) ;
 int FUNC_3 (char*,int) ;

void FUNC_4(struct pevent *VAR_0, int VAR_1, void *VAR_2, int VAR_3)
{
 int VAR_4 = FUNC_2(VAR_0, VAR_2);
 struct event_format *VAR_5 = FUNC_1(VAR_0, VAR_4);

 if (!VAR_5) {
  FUNC_3("ug! no event found for type %d", VAR_4);
  return;
 }

 FUNC_0(VAR_5, VAR_1, VAR_2, VAR_3);
}
