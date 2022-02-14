
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int valueT ;
struct TYPE_9__ {int pc_relative; } ;
typedef TYPE_1__ reloc_howto_type ;
struct TYPE_10__ {scalar_t__ rtype; int exp; } ;
typedef TYPE_2__ ins ;
struct TYPE_12__ {int fr_literal; int has_code; int insn_addr; } ;
struct TYPE_11__ {unsigned int size; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;
 TYPE_1__* FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 (TYPE_5__*,char*,int,int *,int ,scalar_t__) ;
 char* FUNC_6 (unsigned int) ;
 TYPE_5__* VAR_1 ;
 int FUNC_7 () ;
 TYPE_4__* VAR_2 ;
 int FUNC_8 (char*,int ,int) ;
 int* VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_9 (ins *VAR_6)
{
  unsigned int VAR_7, VAR_8, VAR_9;
  char *VAR_10;
  unsigned short VAR_11[4];
  int VAR_12;


  for (VAR_7 = 0, VAR_8 = 0; VAR_7 < 2; VAR_7++)
    {
      VAR_11[VAR_8++] = (VAR_3[VAR_7] >> 16) & 0xFFFF;
      VAR_11[VAR_8++] = VAR_3[VAR_7] & 0xFFFF;
    }

    VAR_9 = VAR_2->size;
    VAR_10 = FUNC_6 (VAR_9 * 2);


    if ((VAR_4) && (VAR_6->rtype != VAR_0))
      {
         reloc_howto_type *VAR_13;
         int VAR_14;

         VAR_13 = FUNC_4 (VAR_5, VAR_6->rtype);

         if (!VAR_13)
           FUNC_1 ();

         VAR_14 = FUNC_3 (VAR_13);

         if (VAR_14 < 1 || VAR_14 > 4)
           FUNC_1 ();

         FUNC_5 (VAR_1, VAR_10 - VAR_1->fr_literal,
                      VAR_14, &VAR_6->exp, VAR_13->pc_relative,
                      VAR_6->rtype);
      }


  VAR_12 = FUNC_7 () & 1;
  if (VAR_1->has_code && VAR_1->insn_addr != VAR_12)
    FUNC_2 (FUNC_0("instruction address is not a multiple of 2"));
  VAR_1->insn_addr = VAR_12;
  VAR_1->has_code = 1;


  for (VAR_7 = 0; VAR_7 < VAR_9; VAR_7++)
    {
      FUNC_8 (VAR_10, (valueT) VAR_11[VAR_7], 2);
      VAR_10 += 2;
    }
}
