
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_event {int event; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ,void*) ;

__attribute__((used)) static void FUNC_1(struct ib_event *VAR_1, void *VAR_2)
{
 FUNC_0(VAR_0, "CQ event %d context %p\n", VAR_1->event, VAR_2);
}
