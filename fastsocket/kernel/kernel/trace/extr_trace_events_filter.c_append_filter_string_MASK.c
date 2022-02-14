
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct event_filter {char* filter_string; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int,int ) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static int FUNC_6(struct event_filter *VAR_2,
    char *VAR_3)
{
 int VAR_4;
 char *VAR_5;

 FUNC_0(!VAR_2->filter_string);
 VAR_4 = FUNC_5(VAR_2->filter_string) + FUNC_5(VAR_3) + 1;
 VAR_5 = FUNC_2(VAR_4, VAR_1);
 if (!VAR_5)
  return -VAR_0;

 FUNC_4(VAR_5, VAR_2->filter_string);
 FUNC_3(VAR_5, VAR_3);
 FUNC_1(VAR_2->filter_string);
 VAR_2->filter_string = VAR_5;

 return 0;
}
