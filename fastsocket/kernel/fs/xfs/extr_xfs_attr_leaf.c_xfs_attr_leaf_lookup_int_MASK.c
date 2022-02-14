
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_9__ ;
typedef struct TYPE_24__ TYPE_8__ ;
typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef scalar_t__ xfs_dahash_t ;
struct TYPE_20__ {TYPE_6__* data; } ;
typedef TYPE_4__ xfs_dabuf_t ;
struct TYPE_21__ {scalar_t__ hashval; int index; int flags; scalar_t__ namelen; TYPE_3__* dp; int rmtblkcnt; scalar_t__ rmtblkno; int name; } ;
typedef TYPE_5__ xfs_da_args_t ;
struct TYPE_17__ {int magic; } ;
struct TYPE_18__ {int count; TYPE_1__ info; } ;
struct TYPE_22__ {TYPE_2__ hdr; TYPE_9__* entries; } ;
typedef TYPE_6__ xfs_attr_leafblock_t ;
struct TYPE_23__ {scalar_t__ namelen; int valuelen; int valueblk; scalar_t__ name; } ;
typedef TYPE_7__ xfs_attr_leaf_name_remote_t ;
struct TYPE_24__ {scalar_t__ namelen; scalar_t__ nameval; } ;
typedef TYPE_8__ xfs_attr_leaf_name_local_t ;
struct TYPE_25__ {int flags; int hashval; } ;
typedef TYPE_9__ xfs_attr_leaf_entry_t ;
struct TYPE_19__ {int i_mount; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ,char*,scalar_t__) ;
 int FUNC_7 (TYPE_5__*) ;
 TYPE_8__* FUNC_8 (TYPE_6__*,int) ;
 TYPE_7__* FUNC_9 (TYPE_6__*,int) ;
 int FUNC_10 (int,int) ;

int
FUNC_11(xfs_dabuf_t *VAR_5, xfs_da_args_t *VAR_6)
{
 xfs_attr_leafblock_t *VAR_7;
 xfs_attr_leaf_entry_t *VAR_8;
 xfs_attr_leaf_name_local_t *VAR_9;
 xfs_attr_leaf_name_remote_t *VAR_10;
 int VAR_11, VAR_12;
 xfs_dahash_t VAR_13;

 FUNC_7(VAR_6);

 VAR_7 = VAR_5->data;
 FUNC_0(FUNC_4(VAR_7->hdr.info.magic) == VAR_3);
 FUNC_0(FUNC_4(VAR_7->hdr.count)
     < (FUNC_3(VAR_6->dp->i_mount)/8));




 VAR_13 = VAR_6->hashval;
 VAR_11 = VAR_12 = FUNC_4(VAR_7->hdr.count) / 2;
 for (VAR_8 = &VAR_7->entries[VAR_11]; VAR_12 > 4;
     VAR_8 = &VAR_7->entries[VAR_11]) {
  VAR_12 /= 2;
  if (FUNC_5(VAR_8->hashval) < VAR_13)
   VAR_11 += VAR_12;
  else if (FUNC_5(VAR_8->hashval) > VAR_13)
   VAR_11 -= VAR_12;
  else
   break;
 }
 FUNC_0((VAR_11 >= 0) &&
        (!VAR_7->hdr.count
        || (VAR_11 < FUNC_4(VAR_7->hdr.count))));
 FUNC_0((VAR_12 <= 4) || (FUNC_5(VAR_8->hashval) == VAR_13));





 while ((VAR_11 > 0) && (FUNC_5(VAR_8->hashval) >= VAR_13)) {
  VAR_8--;
  VAR_11--;
 }
 while ((VAR_11 < FUNC_4(VAR_7->hdr.count)) &&
        (FUNC_5(VAR_8->hashval) < VAR_13)) {
  VAR_8++;
  VAR_11++;
 }
 if ((VAR_11 == FUNC_4(VAR_7->hdr.count)) ||
     (FUNC_5(VAR_8->hashval) != VAR_13)) {
  VAR_6->index = VAR_11;
  return(FUNC_2(VAR_1));
 }




 for ( ; (VAR_11 < FUNC_4(VAR_7->hdr.count)) &&
   (FUNC_5(VAR_8->hashval) == VAR_13);
   VAR_8++, VAR_11++) {







  if ((VAR_6->flags & VAR_2) !=
      (VAR_8->flags & VAR_2)) {
   continue;
  }
  if (VAR_8->flags & VAR_4) {
   VAR_9 = FUNC_8(VAR_7, VAR_11);
   if (VAR_9->namelen != VAR_6->namelen)
    continue;
   if (FUNC_6(VAR_6->name, (char *)VAR_9->nameval, VAR_6->namelen) != 0)
    continue;
   if (!FUNC_10(VAR_6->flags, VAR_8->flags))
    continue;
   VAR_6->index = VAR_11;
   return(FUNC_2(VAR_0));
  } else {
   VAR_10 = FUNC_9(VAR_7, VAR_11);
   if (VAR_10->namelen != VAR_6->namelen)
    continue;
   if (FUNC_6(VAR_6->name, (char *)VAR_10->name,
          VAR_6->namelen) != 0)
    continue;
   if (!FUNC_10(VAR_6->flags, VAR_8->flags))
    continue;
   VAR_6->index = VAR_11;
   VAR_6->rmtblkno = FUNC_5(VAR_10->valueblk);
   VAR_6->rmtblkcnt = FUNC_1(VAR_6->dp->i_mount,
         FUNC_5(VAR_10->valuelen));
   return(FUNC_2(VAR_0));
  }
 }
 VAR_6->index = VAR_11;
 return(FUNC_2(VAR_1));
}
