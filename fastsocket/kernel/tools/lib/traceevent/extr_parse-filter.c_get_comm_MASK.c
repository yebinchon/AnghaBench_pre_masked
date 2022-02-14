
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pevent_record {int dummy; } ;
struct event_format {int pevent; } ;


 char* FUNC_0 (int ,int) ;
 int FUNC_1 (int ,struct pevent_record*) ;

__attribute__((used)) static const char *
FUNC_2(struct event_format *VAR_0, struct pevent_record *VAR_1)
{
 const char *VAR_2;
 int VAR_3;

 VAR_3 = FUNC_1(VAR_0->pevent, VAR_1);
 VAR_2 = FUNC_0(VAR_0->pevent, VAR_3);
 return VAR_2;
}
