
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dis386 {TYPE_1__* op; int * name; } ;
struct TYPE_4__ {int mod; unsigned char reg; size_t rm; } ;
struct TYPE_3__ {size_t bytemode; int (* rtn ) (size_t,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int* VAR_1 ;
 int *** VAR_2 ;
 int ** VAR_3 ;
 int * VAR_4 ;
 struct dis386** VAR_5 ;
 TYPE_2__ VAR_6 ;
 int * VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int * VAR_10 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (size_t,int) ;
 int FUNC_4 (size_t,int) ;

__attribute__((used)) static void
FUNC_5 (int VAR_11)
{
  const struct dis386 *VAR_12;
  unsigned char VAR_13;

  VAR_13 = VAR_1[-1];

  if (VAR_6.mod != 3)
    {
      int VAR_14 = (VAR_13 - 0xd8) * 8 + VAR_6.reg;

      FUNC_1 (VAR_3[VAR_14], VAR_11);
      VAR_8 = VAR_10[0];
      VAR_9 = 2;
      FUNC_0 (VAR_4[VAR_14], VAR_11);
      return;
    }

  VAR_0;
  VAR_1++;

  VAR_12 = &VAR_5[VAR_13 - 0xd8][VAR_6.reg];
  if (VAR_12->name == ((void*)0))
    {
      FUNC_1 (VAR_2[VAR_12->op[0].bytemode][VAR_6.rm], VAR_11);


      if (VAR_13 == 0xdf && VAR_1[-1] == 0xe0)
 FUNC_2 (VAR_10[0], VAR_7[0]);
    }
  else
    {
      FUNC_1 (VAR_12->name, VAR_11);

      VAR_8 = VAR_10[0];
      VAR_9 = 2;
      if (VAR_12->op[0].rtn)
 (*VAR_12->op[0].rtn) (VAR_12->op[0].bytemode, VAR_11);

      VAR_8 = VAR_10[1];
      VAR_9 = 1;
      if (VAR_12->op[1].rtn)
 (*VAR_12->op[1].rtn) (VAR_12->op[1].bytemode, VAR_11);
    }
}
