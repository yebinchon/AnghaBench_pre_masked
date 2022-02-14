
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pccard_tuple {int length; } ;
struct pccard_function {int function; int pf_funce_lan_nidlen; void** pf_funce_lan_nid; void* pf_funce_disk_power; void* pf_funce_disk_interface; } ;




 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (struct pccard_tuple const*,int) ;

__attribute__((used)) static int
FUNC_1(const struct pccard_tuple *VAR_2, struct pccard_function *VAR_3)
{
 int VAR_4;
 int VAR_5;
 int VAR_6 = FUNC_0(VAR_2, 0);

 switch (VAR_3->function) {
 case 129:
  if (VAR_6 == VAR_0) {
   VAR_3->pf_funce_disk_interface
    = FUNC_0(VAR_2, 1);
   VAR_3->pf_funce_disk_power
    = FUNC_0(VAR_2, 2);
  }
  break;
 case 128:
  if (VAR_6 == VAR_1) {
   VAR_5 = FUNC_0(VAR_2, 1);
   if (VAR_2->length < 2 + VAR_5 || VAR_5 > 8) {

    break;
                        }
   for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++) {
    VAR_3->pf_funce_lan_nid[VAR_4]
     = FUNC_0(VAR_2, VAR_4 + 2);
   }
   VAR_3->pf_funce_lan_nidlen = VAR_5;
  }
  break;
 default:
  break;
 }
 return 0;
}
