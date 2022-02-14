
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct change {size_t line0; size_t line1; size_t deleted; size_t inserted; struct change* link; } ;
typedef size_t lin ;
typedef enum changes { ____Placeholder_changes } changes ;
struct TYPE_5__ {char** linbuf; } ;
struct TYPE_4__ {scalar_t__ fastmap; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_3__* VAR_4 ;
 int VAR_5 ;
 TYPE_1__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_0 (unsigned char) ;
 scalar_t__ FUNC_1 (TYPE_1__*,char const*,size_t,int ,size_t,int ) ;

enum changes
FUNC_2 (struct change *VAR_8,
       lin *VAR_9, lin *VAR_10,
       lin *VAR_11, lin *VAR_12)
{
  struct change *VAR_13;
  lin VAR_14, VAR_15;
  lin VAR_16, VAR_17;
  lin VAR_18;
  bool VAR_19 = VAR_5 || VAR_6.fastmap;
  size_t VAR_20 = VAR_5 - 1;


  bool VAR_21 =
    (VAR_5 && VAR_0 <= VAR_7);

  char const * const *VAR_22 = VAR_4[0].linbuf;
  char const * const *VAR_23 = VAR_4[1].linbuf;

  VAR_16 = VAR_17 = 0;

  *VAR_9 = VAR_8->line0;
  *VAR_11 = VAR_8->line1;

  VAR_13 = VAR_8;
  do
    {
      VAR_14 = VAR_13->line0 + VAR_13->deleted - 1;
      VAR_15 = VAR_13->line1 + VAR_13->inserted - 1;
      VAR_16 += VAR_13->deleted;
      VAR_17 += VAR_13->inserted;

      for (VAR_18 = VAR_13->line0; VAR_18 <= VAR_14 && VAR_19; VAR_18++)
 {
   char const *VAR_24 = VAR_22[VAR_18];
   char const *VAR_25 = VAR_22[VAR_18 + 1] - 1;
   size_t VAR_26 = VAR_25 - VAR_24;
   char const *VAR_27 = VAR_24;
   if (VAR_21)
     while (FUNC_0 ((unsigned char) *VAR_27) && *VAR_27 != '\n')
       VAR_27++;
   if (VAR_25 - VAR_27 != VAR_20
       && (! VAR_6.fastmap
    || FUNC_1 (&VAR_6, VAR_24, VAR_26, 0, VAR_26, 0) < 0))
     VAR_19 = 0;
 }

      for (VAR_18 = VAR_13->line1; VAR_18 <= VAR_15 && VAR_19; VAR_18++)
 {
   char const *VAR_28 = VAR_23[VAR_18];
   char const *VAR_29 = VAR_23[VAR_18 + 1] - 1;
   size_t VAR_30 = VAR_29 - VAR_28;
   char const *VAR_31 = VAR_28;
   if (VAR_21)
     while (FUNC_0 ((unsigned char) *VAR_31) && *VAR_31 != '\n')
       VAR_31++;
   if (VAR_29 - VAR_31 != VAR_20
       && (! VAR_6.fastmap
    || FUNC_1 (&VAR_6, VAR_28, VAR_30, 0, VAR_30, 0) < 0))
     VAR_19 = 0;
 }
    }
  while ((VAR_13 = VAR_13->link) != 0);

  *VAR_10 = VAR_14;
  *VAR_12 = VAR_15;




  if (VAR_19)
    return VAR_3;

  return (VAR_16 ? VAR_2 : VAR_3) | (VAR_17 ? VAR_1 : VAR_3);
}
