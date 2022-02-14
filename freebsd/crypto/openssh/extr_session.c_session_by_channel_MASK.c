
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int chanid; scalar_t__ used; } ;
typedef TYPE_1__ Session ;


 int FUNC_0 (char*,int,...) ;
 int FUNC_1 () ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static Session *
FUNC_2(int VAR_2)
{
 int VAR_3;
 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  Session *VAR_4 = &VAR_0[VAR_3];
  if (VAR_4->used && VAR_4->chanid == VAR_2) {
   FUNC_0("session_by_channel: session %d channel %d",
       VAR_3, VAR_2);
   return VAR_4;
  }
 }
 FUNC_0("session_by_channel: unknown channel %d", VAR_2);
 FUNC_1();
 return ((void*)0);
}
