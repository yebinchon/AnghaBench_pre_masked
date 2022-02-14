
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int e_machine; } ;
struct readelf {TYPE_1__ ehdr; } ;




 int FUNC_0 (struct readelf*) ;
 int FUNC_1 (struct readelf*) ;
 int FUNC_2 (struct readelf*) ;

__attribute__((used)) static void
FUNC_3(struct readelf *VAR_0)
{

 FUNC_1(VAR_0);
 FUNC_0(VAR_0);

 switch (VAR_0->ehdr.e_machine) {
 case 129:
 case 128:
  FUNC_2(VAR_0);
 default:
  break;
 }
}
