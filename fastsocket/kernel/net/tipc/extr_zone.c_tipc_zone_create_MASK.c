
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct _zone {int addr; } ;
struct TYPE_2__ {struct _zone** zones; } ;


 int VAR_0 ;
 int FUNC_0 (char*,size_t) ;
 struct _zone* FUNC_1 (int,int ) ;
 int FUNC_2 (size_t,int ,int ) ;
 int FUNC_3 (size_t) ;
 TYPE_1__ VAR_1 ;
 size_t FUNC_4 (size_t) ;
 int FUNC_5 (char*) ;

struct _zone *FUNC_6(u32 VAR_2)
{
 struct _zone *VAR_3;
 u32 VAR_4;

 if (!FUNC_3(VAR_2)) {
  FUNC_0("Zone creation failed, invalid domain 0x%x\n", VAR_2);
  return ((void*)0);
 }

 VAR_3 = FUNC_1(sizeof(*VAR_3), VAR_0);
 if (!VAR_3) {
  FUNC_5("Zone creation failed, insufficient memory\n");
  return ((void*)0);
 }

 VAR_4 = FUNC_4(VAR_2);
 VAR_3->addr = FUNC_2(VAR_4, 0, 0);
 VAR_1.zones[VAR_4] = VAR_3;
 return VAR_3;
}
