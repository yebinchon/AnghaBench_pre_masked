
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dns_response {int additional; int authority; int answer; int query; } ;


 int FUNC_0 (struct dns_response*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(struct dns_response *VAR_0)
{
 if (VAR_0 == ((void*)0))
  return;

 FUNC_1(VAR_0->query);
 FUNC_2(VAR_0->answer);
 FUNC_2(VAR_0->authority);
 FUNC_2(VAR_0->additional);
 FUNC_0(VAR_0);
}
