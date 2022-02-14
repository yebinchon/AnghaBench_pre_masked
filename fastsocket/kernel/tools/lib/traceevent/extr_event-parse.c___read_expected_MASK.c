
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum event_type { ____Placeholder_event_type } event_type ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char**) ;
 int FUNC_2 (char**) ;
 int FUNC_3 (int,char*,int,char const*) ;

__attribute__((used)) static int FUNC_4(enum event_type VAR_0, const char *VAR_1,
      int VAR_2)
{
 enum event_type VAR_3;
 char *VAR_4;
 int VAR_5;

 if (VAR_2)
  VAR_3 = FUNC_1(&VAR_4);
 else
  VAR_3 = FUNC_2(&VAR_4);

 VAR_5 = FUNC_3(VAR_3, VAR_4, VAR_0, VAR_1);

 FUNC_0(VAR_4);

 return VAR_5;
}
