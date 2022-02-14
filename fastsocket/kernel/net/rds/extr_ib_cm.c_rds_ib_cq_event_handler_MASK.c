
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_event {int event; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,int ,void*) ;

__attribute__((used)) static void FUNC_2(struct ib_event *VAR_0, void *VAR_1)
{
 FUNC_1("event %u (%s) data %p\n",
   VAR_0->event, FUNC_0(VAR_0->event), VAR_1);
}
