
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct TYPE_4__ {scalar_t__ type; } ;
struct TYPE_5__ {char* name; int idx; TYPE_1__ head; } ;
typedef TYPE_2__ ipfw_obj_ntlv ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static const char*
FUNC_1(ipfw_obj_ntlv *VAR_1, int VAR_2, uint16_t VAR_3)
{
 const char *VAR_4;
 int VAR_5;

 VAR_4 = ((void*)0);
 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  if (VAR_1[VAR_5].head.type != VAR_0)
   continue;
  if (FUNC_0(VAR_1[VAR_5].idx) != VAR_3)
   continue;
  VAR_4 = VAR_1[VAR_5].name;
  break;
 }
 return (VAR_4);
}
