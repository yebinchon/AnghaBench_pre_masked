
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char intr_iformat; int intr_signed; int intr_fformat; void* intr_type; } ;
typedef TYPE_1__ intr_t ;
typedef int dwarf_t ;
typedef int Dwarf_Signed ;
typedef int Dwarf_Off ;
typedef int Dwarf_Die ;
 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int FUNC_0 (int *,int ,int,size_t) ;
 int FUNC_1 (int *,int ,int ,int*,int ) ;
 int FUNC_2 (char*,int ,int) ;
 TYPE_1__* FUNC_3 (int) ;

__attribute__((used)) static intr_t *
FUNC_4(dwarf_t *VAR_4, Dwarf_Die VAR_5, Dwarf_Off VAR_6, size_t VAR_7)
{
 intr_t *VAR_8 = FUNC_3(sizeof (intr_t));
 Dwarf_Signed VAR_9;

 (void) FUNC_1(VAR_4, VAR_5, VAR_1, &VAR_9, VAR_0);

 switch (VAR_9) {
 case 129:
 case 136:
  VAR_8->intr_type = VAR_2;
  break;
 case 128:
  VAR_8->intr_type = VAR_2;
  VAR_8->intr_iformat = 'c';
  break;
 case 131:
  VAR_8->intr_type = VAR_2;
  VAR_8->intr_signed = 1;
  break;
 case 130:
  VAR_8->intr_type = VAR_2;
  VAR_8->intr_signed = 1;
  VAR_8->intr_iformat = 'c';
  break;
 case 135:
  VAR_8->intr_type = VAR_2;
  VAR_8->intr_signed = 1;
  VAR_8->intr_iformat = 'b';
  break;
 case 133:
 case 134:
 case 132:




  VAR_8->intr_type = VAR_3;
  VAR_8->intr_signed = 1;
  VAR_8->intr_fformat = FUNC_0(VAR_4, VAR_6, VAR_9, VAR_7);
  break;
 default:
  FUNC_2("die %llu: unknown base type encoding 0x%llx\n",
      VAR_6, VAR_9);
 }

 return (VAR_8);
}
