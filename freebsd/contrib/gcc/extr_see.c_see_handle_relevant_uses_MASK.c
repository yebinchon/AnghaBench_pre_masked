
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct web_entry {int * reg; } ;
typedef int * rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;
struct TYPE_2__ {scalar_t__ relevancy; int source_mode; } ;


 int * FUNC_0 (int ) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int ,unsigned int) ;
 TYPE_1__* FUNC_3 (struct web_entry*) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,int *) ;
 int * FUNC_7 (int *,int,int ) ;
 int FUNC_8 (int *,int *,int ) ;
 struct web_entry* FUNC_9 (int *) ;
 int * VAR_6 ;
 unsigned int VAR_7 ;

__attribute__((used)) static int
FUNC_10 (void)
{
  rtx VAR_8 = ((void*)0);
  rtx VAR_9 = ((void*)0);
  struct web_entry *VAR_10 = ((void*)0);
  rtx VAR_11 = ((void*)0);
  unsigned int VAR_12;
  int VAR_13 = 0;
  enum rtx_code VAR_14;

  for (VAR_12 = 0; VAR_12 < VAR_7; VAR_12++)
    {
      VAR_8 = FUNC_0 (FUNC_2 (VAR_5, VAR_12));
      VAR_9 = FUNC_1 (FUNC_2 (VAR_5, VAR_12));

      if (!VAR_8)
 continue;

      if (!FUNC_4 (VAR_8))
 continue;

      VAR_10 = FUNC_9 (&VAR_6[VAR_12]);

      if (FUNC_3 (VAR_10)->relevancy != VAR_1
   && FUNC_3 (VAR_10)->relevancy != VAR_4)

 continue;

      if (VAR_10->reg)


 FUNC_5 (FUNC_6 (VAR_10->reg, VAR_9));
      else
 VAR_10->reg = VAR_9;


      if (FUNC_3 (VAR_10)->relevancy == VAR_1)
 VAR_14 = VAR_0;
      else
 VAR_14 = VAR_3;

      VAR_11 =
 FUNC_7 (VAR_9, VAR_14,
          FUNC_3 (VAR_10)->source_mode);
      if (!VAR_11)

 return -1;

      VAR_13++;

      if (!FUNC_8 (VAR_8, VAR_11,
                 VAR_2))

 return -1;
    }

  return VAR_13;
}
