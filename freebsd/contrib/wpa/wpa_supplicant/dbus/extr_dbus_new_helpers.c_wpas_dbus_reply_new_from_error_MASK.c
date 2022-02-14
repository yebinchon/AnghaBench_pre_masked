
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char const* name; char const* message; } ;
typedef int DBusMessage ;
typedef TYPE_1__ DBusError ;


 int * FUNC_0 (int *,char const*,char const*) ;

DBusMessage * FUNC_1(DBusMessage *VAR_0,
          DBusError *VAR_1,
          const char *VAR_2,
          const char *VAR_3)
{
 if (VAR_1 && VAR_1->name && VAR_1->message) {
  return FUNC_0(VAR_0, VAR_1->name,
           VAR_1->message);
 }
 if (VAR_2 && VAR_3) {
  return FUNC_0(VAR_0, VAR_2,
           VAR_3);
 }
 return ((void*)0);
}
