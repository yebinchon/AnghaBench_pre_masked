
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct subscription {int filter; int (* event_cb ) (struct subscription*,int ,int ,int ,int ,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct subscription*,int ,int ,int ,int ,int ) ;
 int FUNC_1 (struct subscription*,int ,int ) ;

void FUNC_2(struct subscription *VAR_1,
    u32 VAR_2,
    u32 VAR_3,
    u32 VAR_4,
    u32 VAR_5,
    u32 VAR_6,
    int VAR_7)
{
 if (!FUNC_1(VAR_1, VAR_2, VAR_3))
  return;
 if (!VAR_7 && !(VAR_1->filter & VAR_0))
  return;

 VAR_1->event_cb(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
}
