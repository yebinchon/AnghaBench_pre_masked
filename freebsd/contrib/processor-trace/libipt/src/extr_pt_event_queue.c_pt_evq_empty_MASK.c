
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct pt_event_queue {scalar_t__* begin; scalar_t__* end; } ;
typedef enum pt_event_binding { ____Placeholder_pt_event_binding } pt_event_binding ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

int FUNC_0(const struct pt_event_queue *VAR_3, enum pt_event_binding VAR_4)
{
 uint8_t VAR_5, VAR_6;

 if (!VAR_3)
  return -VAR_2;

 if (VAR_0 <= VAR_4)
  return -VAR_2;

 VAR_5 = VAR_3->begin[VAR_4];
 VAR_6 = VAR_3->end[VAR_4];

 if (VAR_1 <= VAR_5)
  return -VAR_2;

 if (VAR_1 <= VAR_6)
  return -VAR_2;

 return VAR_5 == VAR_6;
}
