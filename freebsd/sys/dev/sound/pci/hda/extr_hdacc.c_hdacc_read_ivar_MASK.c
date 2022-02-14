
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdacc_fg {uintptr_t nid; uintptr_t type; uintptr_t subsystem_id; } ;
typedef int device_t ;


 int FUNC_0 (int ,int ,int,uintptr_t*) ;



 struct hdacc_fg* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_0, device_t VAR_1, int VAR_2, uintptr_t *VAR_3)
{
 struct hdacc_fg *VAR_4 = FUNC_1(VAR_1);

 switch (VAR_2) {
 case 130:
  *VAR_3 = VAR_4->nid;
  break;
 case 129:
  *VAR_3 = VAR_4->type;
  break;
 case 128:
  *VAR_3 = VAR_4->subsystem_id;
  break;
 default:
  return(FUNC_0(FUNC_2(VAR_0), VAR_0,
      VAR_2, VAR_3));
 }
 return (0);
}
