
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct event_filter {int filter_string; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ) ;

__attribute__((used)) static int FUNC_2(struct event_filter *VAR_2,
     char *VAR_3)
{
 FUNC_0(VAR_2->filter_string);
 VAR_2->filter_string = FUNC_1(VAR_3, VAR_1);
 if (!VAR_2->filter_string)
  return -VAR_0;

 return 0;
}
