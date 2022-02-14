
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ftrace_event_field {int filter_type; int offset; int size; int is_signed; struct ftrace_event_field* type; struct ftrace_event_field* name; int link; } ;
struct ftrace_event_call {int fields; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (struct ftrace_event_field*) ;
 void* FUNC_2 (char const*,int ) ;
 struct ftrace_event_field* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int *) ;

int FUNC_5(struct ftrace_event_call *VAR_3, const char *VAR_4,
         const char *VAR_5, int VAR_6, int VAR_7, int VAR_8,
         int VAR_9)
{
 struct ftrace_event_field *VAR_10;

 VAR_10 = FUNC_3(sizeof(*VAR_10), VAR_2);
 if (!VAR_10)
  goto err;

 VAR_10->name = FUNC_2(VAR_5, VAR_2);
 if (!VAR_10->name)
  goto err;

 VAR_10->type = FUNC_2(VAR_4, VAR_2);
 if (!VAR_10->type)
  goto err;

 if (VAR_9 == VAR_1)
  VAR_10->filter_type = FUNC_0(VAR_4);
 else
  VAR_10->filter_type = VAR_9;

 VAR_10->offset = VAR_6;
 VAR_10->size = VAR_7;
 VAR_10->is_signed = VAR_8;

 FUNC_4(&VAR_10->link, &VAR_3->fields);

 return 0;

err:
 if (VAR_10) {
  FUNC_1(VAR_10->name);
  FUNC_1(VAR_10->type);
 }
 FUNC_1(VAR_10);

 return -VAR_0;
}
