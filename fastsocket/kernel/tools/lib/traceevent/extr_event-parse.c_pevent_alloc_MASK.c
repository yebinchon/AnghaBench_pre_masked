
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pevent {int ref_count; } ;


 struct pevent* FUNC_0 (int,int) ;

struct pevent *FUNC_1(void)
{
 struct pevent *VAR_0 = FUNC_0(1, sizeof(*VAR_0));

 if (VAR_0)
  VAR_0->ref_count = 1;

 return VAR_0;
}
