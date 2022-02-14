
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int32_t ;
struct sc_info {int dev; int lock; } ;
struct sc_chinfo {scalar_t__ dir; scalar_t__ format; int unit; int blk; int size; int buffer; int emldma; struct sc_info* parent; } ;
struct envy24ht_emldma {scalar_t__ format; int unit; int emldma; } ;
typedef int kobj_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,scalar_t__) ;
 struct envy24ht_emldma* VAR_6 ;
 struct envy24ht_emldma* VAR_7 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int,int) ;

__attribute__((used)) static int
FUNC_4(kobj_t VAR_8, void *VAR_9, u_int32_t VAR_10)
{
 struct sc_chinfo *VAR_11 = VAR_9;
 struct sc_info *VAR_12 = VAR_11->parent;
 struct envy24ht_emldma *VAR_13;

 int VAR_14;




 FUNC_1(VAR_12->lock);

 if (VAR_11->dir == VAR_3)
  VAR_13 = VAR_6;
 else
  VAR_13 = VAR_7;
 if (VAR_13 == ((void*)0)) {
  FUNC_2(VAR_12->lock);
  return -1;
 }
 for (VAR_14 = 0; VAR_13[VAR_14].format != 0; VAR_14++)
  if (VAR_13[VAR_14].format == VAR_10)
   break;
 if (VAR_13[VAR_14].format == 0) {
  FUNC_2(VAR_12->lock);
  return -1;
 }


 VAR_11->format = VAR_10;
 VAR_11->emldma = VAR_13[VAR_14].emldma;
 if (VAR_11->unit > VAR_13[VAR_14].unit)
  VAR_11->blk *= VAR_11->unit / VAR_13[VAR_14].unit;
 else
  VAR_11->blk /= VAR_13[VAR_14].unit / VAR_11->unit;
 VAR_11->unit = VAR_13[VAR_14].unit;


 VAR_11->size = VAR_11->unit * VAR_2;
 FUNC_2(VAR_12->lock);




 return 0;
}
