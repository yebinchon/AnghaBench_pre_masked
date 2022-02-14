
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pevent_record {void* data; } ;
struct pevent {int dummy; } ;


 int FUNC_0 (struct pevent*,struct pevent_record*) ;

int FUNC_1(struct pevent *VAR_0, void *VAR_1)
{
 struct pevent_record VAR_2;

 VAR_2.data = VAR_1;
 return FUNC_0(VAR_0, &VAR_2);
}
