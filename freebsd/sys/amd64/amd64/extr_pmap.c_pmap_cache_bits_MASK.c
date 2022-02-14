
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* pmap_t ;
typedef int boolean_t ;
struct TYPE_4__ {int pm_type; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;



 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*,int) ;
 int* VAR_5 ;
 int FUNC_2 (TYPE_1__*,int) ;

int
FUNC_3(pmap_t VAR_6, int VAR_7, boolean_t VAR_8)
{
 int VAR_9, VAR_10, VAR_11;

 if (!FUNC_2(VAR_6, VAR_7))
  FUNC_1("Unknown caching mode %d\n", VAR_7);

 switch (VAR_6->pm_type) {
 case 128:
 case 129:

  VAR_10 = VAR_8 ? VAR_3 : VAR_4;


  VAR_11 = VAR_5[VAR_7];


  VAR_9 = 0;
  if (VAR_11 & 0x4)
   VAR_9 |= VAR_10;
  if (VAR_11 & 0x2)
   VAR_9 |= VAR_1;
  if (VAR_11 & 0x1)
   VAR_9 |= VAR_2;
  break;

 case 130:
  VAR_9 = VAR_0 | FUNC_0(VAR_7);
  break;

 default:
  FUNC_1("unsupported pmap type %d", VAR_6->pm_type);
 }

 return (VAR_9);
}
