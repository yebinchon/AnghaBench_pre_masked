
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_seq {int dummy; } ;
struct pevent_record {int data; } ;
struct format_field {int dummy; } ;
struct event_format {int dummy; } ;


 struct format_field* FUNC_0 (struct event_format*,char const*) ;
 scalar_t__ FUNC_1 (struct format_field*,int ,unsigned long long*) ;
 int FUNC_2 (struct trace_seq*,char const*,...) ;

int FUNC_3(struct trace_seq *VAR_0, const char *VAR_1,
      struct event_format *VAR_2, const char *VAR_3,
      struct pevent_record *VAR_4, int VAR_5)
{
 struct format_field *VAR_6 = FUNC_0(VAR_2, VAR_3);
 unsigned long long VAR_7;

 if (!VAR_6)
  goto failed;

 if (FUNC_1(VAR_6, VAR_4->data, &VAR_7))
  goto failed;

 return FUNC_2(VAR_0, VAR_1, VAR_7);

 failed:
 if (VAR_5)
  FUNC_2(VAR_0, "CAN'T FIND FIELD \"%s\"", VAR_3);
 return -1;
}
