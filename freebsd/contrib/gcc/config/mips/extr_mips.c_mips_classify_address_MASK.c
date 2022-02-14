
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mips_address_info {size_t symbol_type; void* type; void* reg; void* offset; } ;
typedef void* rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;


 int FUNC_0 (void*) ;




 int FUNC_1 (void*) ;


 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_2 (void*,int) ;
 void* VAR_6 ;
 int FUNC_3 (void*,int ) ;
 size_t FUNC_4 (void*) ;
 int * VAR_7 ;
 int * VAR_8 ;
 int FUNC_5 (size_t,int) ;
 int FUNC_6 (void*,size_t*) ;
 int FUNC_7 (void*,int,int) ;

__attribute__((used)) static bool
FUNC_8 (struct mips_address_info *VAR_9, rtx VAR_10,
         enum machine_mode VAR_11, int VAR_12)
{
  switch (FUNC_0 (VAR_10))
    {
    case 130:
    case 129:
      VAR_9->type = VAR_2;
      VAR_9->reg = VAR_10;
      VAR_9->offset = VAR_6;
      return FUNC_7 (VAR_9->reg, VAR_11, VAR_12);

    case 131:
      VAR_9->type = VAR_2;
      VAR_9->reg = FUNC_2 (VAR_10, 0);
      VAR_9->offset = FUNC_2 (VAR_10, 1);
      return (FUNC_7 (VAR_9->reg, VAR_11, VAR_12)
       && FUNC_3 (VAR_9->offset, VAR_5));

    case 132:
      VAR_9->type = VAR_1;
      VAR_9->reg = FUNC_2 (VAR_10, 0);
      VAR_9->offset = FUNC_2 (VAR_10, 1);
      VAR_9->symbol_type = FUNC_4 (VAR_9->offset);
      return (FUNC_7 (VAR_9->reg, VAR_11, VAR_12)
       && FUNC_5 (VAR_9->symbol_type, VAR_11)
       && VAR_7[VAR_9->symbol_type] != 0);

    case 134:


      VAR_9->type = VAR_0;
      return !VAR_4 && FUNC_1 (VAR_10);

    case 135:
    case 133:
    case 128:
      VAR_9->type = VAR_3;
      return (FUNC_6 (VAR_10, &VAR_9->symbol_type)
       && FUNC_5 (VAR_9->symbol_type, VAR_11)
       && !VAR_8[VAR_9->symbol_type]);

    default:
      return 0;
    }
}
