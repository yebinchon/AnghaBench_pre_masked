
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pevent_record {int data; } ;
struct format_field {int flags; int size; } ;
struct event_format {int dummy; } ;


 int VAR_0 ;
 struct format_field VAR_1 ;
 char* FUNC_0 (struct event_format*,struct pevent_record*) ;
 int FUNC_1 (struct format_field*,int ,unsigned long long*) ;

__attribute__((used)) static unsigned long long
FUNC_2(struct event_format *VAR_2,
   struct format_field *VAR_3, struct pevent_record *VAR_4)
{
 unsigned long long VAR_5;


 if (VAR_3 == &VAR_1) {
  const char *VAR_6;

  VAR_6 = FUNC_0(VAR_2, VAR_4);
  return (unsigned long)VAR_6;
 }

 FUNC_1(VAR_3, VAR_4->data, &VAR_5);

 if (!(VAR_3->flags & VAR_0))
  return VAR_5;

 switch (VAR_3->size) {
 case 1:
  return (char)VAR_5;
 case 2:
  return (short)VAR_5;
 case 4:
  return (int)VAR_5;
 case 8:
  return (long long)VAR_5;
 }
 return VAR_5;
}
