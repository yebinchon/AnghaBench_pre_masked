
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int entries; int maxlen; int s_block; int s_inode; int btotal; TYPE_1__* list; } ;
struct TYPE_8__ {scalar_t__ fts_number; scalar_t__ fts_level; struct TYPE_8__* fts_link; } ;
typedef TYPE_1__ FTSENT ;
typedef TYPE_2__ DISPLAY ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int ,int ) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (TYPE_2__ const*) ;
 int FUNC_4 (char) ;
 TYPE_1__** FUNC_5 (TYPE_1__**,int) ;
 int VAR_9 ;
 int FUNC_6 (int *) ;

void
FUNC_7(const DISPLAY *VAR_10)
{
 static FTSENT **VAR_11;
 static int VAR_12 = -1;
 FTSENT *VAR_13;
 FTSENT **VAR_14;
 int VAR_15;
 int VAR_16;
 int VAR_17;
 int VAR_18;
 int VAR_19;
 int VAR_20;
 int VAR_21;
 int VAR_22;
 int VAR_23;
 int VAR_24;
 int VAR_25;

 if (VAR_5)
  VAR_25 = 1;
 else
  VAR_25 = 8;





 if (VAR_10->entries > VAR_12) {
  if ((VAR_14 =
      FUNC_5(VAR_11, VAR_10->entries * sizeof(FTSENT *))) == ((void*)0)) {
   FUNC_6(((void*)0));
   FUNC_3(VAR_10);
   return;
  }
  VAR_12 = VAR_10->entries;
  VAR_11 = VAR_14;
 }
 for (VAR_13 = VAR_10->list, VAR_21 = 0; VAR_13; VAR_13 = VAR_13->fts_link)
  if (VAR_13->fts_number != VAR_1)
   VAR_11[VAR_21++] = VAR_13;

 VAR_19 = VAR_10->maxlen;
 if (VAR_3)
  VAR_19 += VAR_10->s_inode + 1;
 if (VAR_6)
  VAR_19 += VAR_10->s_block + 1;
 if (VAR_8)
  VAR_19 += 1;

 VAR_19 = (VAR_19 + VAR_25) & ~(VAR_25 - 1);
 if (VAR_9 < 2 * VAR_19) {
  FUNC_3(VAR_10);
  return;
 }
 VAR_22 = VAR_9 / VAR_19;
 VAR_23 = VAR_21 / VAR_22;
 if (VAR_21 % VAR_22)
  ++VAR_23;

 if ((VAR_10->list == ((void*)0) || VAR_10->list->fts_level != VAR_0) &&
     (VAR_4 || VAR_6)) {
  (void)FUNC_2("total %lu\n", FUNC_0(VAR_10->btotal, VAR_2));
 }

 VAR_15 = 0;
 for (VAR_24 = 0; VAR_24 < VAR_23; ++VAR_24) {
  VAR_20 = VAR_19;
  if (!VAR_7)
   VAR_15 = VAR_24;
  for (VAR_18 = 0, VAR_16 = 0; VAR_18 < VAR_22; ++VAR_18) {
   VAR_16 += FUNC_1(VAR_11[VAR_15], VAR_10->s_inode,
       VAR_10->s_block);
   if (VAR_7)
    VAR_15++;
   else
    VAR_15 += VAR_23;
   if (VAR_15 >= VAR_21)
    break;
   while ((VAR_17 = ((VAR_16 + VAR_25) & ~(VAR_25 - 1)))
       <= VAR_20) {
    if (VAR_7 && VAR_18 + 1 >= VAR_22)
     break;
    (void)FUNC_4(VAR_5 ? ' ' : '\t');
    VAR_16 = VAR_17;
   }
   VAR_20 += VAR_19;
  }
  (void)FUNC_4('\n');
 }
}
