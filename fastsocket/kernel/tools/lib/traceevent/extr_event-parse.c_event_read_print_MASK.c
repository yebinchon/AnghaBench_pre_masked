
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* format; int * args; } ;
struct event_format {TYPE_1__ print_fmt; } ;
typedef enum event_type { ____Placeholder_event_type } event_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (char**,char*,char*,char*) ;
 int FUNC_1 (struct event_format*,int **) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int,char**) ;
 scalar_t__ FUNC_4 (int ,char*) ;
 scalar_t__ FUNC_5 (int ,char*) ;
 int FUNC_6 (char**) ;
 scalar_t__ FUNC_7 (int,char*,int ,char*) ;

__attribute__((used)) static int FUNC_8(struct event_format *VAR_5)
{
 enum event_type VAR_6;
 char *VAR_7;
 int VAR_8;

 if (FUNC_5(VAR_2, "print") < 0)
  return -1;

 if (FUNC_4(VAR_2, "fmt") < 0)
  return -1;

 if (FUNC_4(VAR_4, ":") < 0)
  return -1;

 if (FUNC_3(VAR_1, &VAR_7) < 0)
  goto fail;

 concat:
 VAR_5->print_fmt.format = VAR_7;
 VAR_5->print_fmt.args = ((void*)0);


 VAR_6 = FUNC_6(&VAR_7);

 if (VAR_6 == VAR_3)
  return 0;


 if (VAR_6 == VAR_1) {
  char *VAR_9;

  if (FUNC_0(&VAR_9, "%s%s", VAR_5->print_fmt.format, VAR_7) < 0)
   goto fail;
  FUNC_2(VAR_7);
  FUNC_2(VAR_5->print_fmt.format);
  VAR_5->print_fmt.format = ((void*)0);
  VAR_7 = VAR_9;
  goto concat;
 }

 if (FUNC_7(VAR_6, VAR_7, VAR_0, ","))
  goto fail;

 FUNC_2(VAR_7);

 VAR_8 = FUNC_1(VAR_5, &VAR_5->print_fmt.args);
 if (VAR_8 < 0)
  return -1;

 return VAR_8;

 fail:
 FUNC_2(VAR_7);
 return -1;
}
