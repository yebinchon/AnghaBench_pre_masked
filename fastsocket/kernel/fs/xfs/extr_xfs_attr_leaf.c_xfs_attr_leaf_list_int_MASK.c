
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_33__ TYPE_9__ ;
typedef struct TYPE_32__ TYPE_8__ ;
typedef struct TYPE_31__ TYPE_7__ ;
typedef struct TYPE_30__ TYPE_6__ ;
typedef struct TYPE_29__ TYPE_5__ ;
typedef struct TYPE_28__ TYPE_4__ ;
typedef struct TYPE_27__ TYPE_3__ ;
typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_1__ ;
typedef struct TYPE_24__ TYPE_10__ ;


struct TYPE_27__ {TYPE_6__* data; } ;
typedef TYPE_3__ xfs_dabuf_t ;
struct TYPE_28__ {int valuelen; int * value; TYPE_2__* dp; int rmtblkcnt; scalar_t__ rmtblkno; int whichfork; } ;
typedef TYPE_4__ xfs_da_args_t ;
struct TYPE_29__ {scalar_t__ dupcnt; int (* put_listent ) (TYPE_5__*,int,int *,int,int,int *) ;scalar_t__ seen_enough; TYPE_2__* dp; scalar_t__ put_value; scalar_t__ resynch; TYPE_10__* cursor; } ;
typedef TYPE_5__ xfs_attr_list_context_t ;
struct TYPE_25__ {int count; } ;
struct TYPE_30__ {TYPE_1__ hdr; TYPE_9__* entries; } ;
typedef TYPE_6__ xfs_attr_leafblock_t ;
struct TYPE_31__ {scalar_t__ namelen; int * name; int valueblk; int valuelen; } ;
typedef TYPE_7__ xfs_attr_leaf_name_remote_t ;
struct TYPE_32__ {size_t namelen; int * nameval; int valuelen; } ;
typedef TYPE_8__ xfs_attr_leaf_name_local_t ;
struct TYPE_33__ {int flags; int hashval; } ;
typedef TYPE_9__ xfs_attr_leaf_entry_t ;
struct TYPE_24__ {int initted; scalar_t__ hashval; scalar_t__ offset; } ;
typedef TYPE_10__ attrlist_cursor_kern_t ;
typedef int args ;
struct TYPE_26__ {int i_mount; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int * FUNC_4 (int,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*,int ,int) ;
 int FUNC_7 (TYPE_5__*,int,int *,int,int,int *) ;
 int FUNC_8 (TYPE_5__*,int,int *,int,int,int *) ;
 int FUNC_9 (TYPE_5__*,int,int *,int,int,int *) ;
 int FUNC_10 (TYPE_5__*) ;
 int FUNC_11 (TYPE_5__*) ;
 int FUNC_12 (TYPE_5__*) ;
 TYPE_8__* FUNC_13 (TYPE_6__*,int) ;
 TYPE_7__* FUNC_14 (TYPE_6__*,int) ;
 int FUNC_15 (TYPE_4__*) ;

int
FUNC_16(xfs_dabuf_t *VAR_5, xfs_attr_list_context_t *VAR_6)
{
 attrlist_cursor_kern_t *VAR_7;
 xfs_attr_leafblock_t *VAR_8;
 xfs_attr_leaf_entry_t *VAR_9;
 int VAR_10, VAR_11;

 FUNC_0(VAR_5 != ((void*)0));
 VAR_8 = VAR_5->data;
 VAR_7 = VAR_6->cursor;
 VAR_7->initted = 1;

 FUNC_10(VAR_6);




 if (VAR_6->resynch) {
  VAR_9 = &VAR_8->entries[0];
  for (VAR_11 = 0; VAR_11 < FUNC_2(VAR_8->hdr.count); VAR_9++, VAR_11++) {
   if (FUNC_3(VAR_9->hashval) == VAR_7->hashval) {
    if (VAR_7->offset == VAR_6->dupcnt) {
     VAR_6->dupcnt = 0;
     break;
    }
    VAR_6->dupcnt++;
   } else if (FUNC_3(VAR_9->hashval) >
     VAR_7->hashval) {
    VAR_6->dupcnt = 0;
    break;
   }
  }
  if (VAR_11 == FUNC_2(VAR_8->hdr.count)) {
   FUNC_12(VAR_6);
   return(0);
  }
 } else {
  VAR_9 = &VAR_8->entries[0];
  VAR_11 = 0;
 }
 VAR_6->resynch = 0;




 VAR_10 = 0;
 for ( ; (VAR_11 < FUNC_2(VAR_8->hdr.count)); VAR_9++, VAR_11++) {
  if (FUNC_3(VAR_9->hashval) != VAR_7->hashval) {
   VAR_7->hashval = FUNC_3(VAR_9->hashval);
   VAR_7->offset = 0;
  }

  if (VAR_9->flags & VAR_3)
   continue;

  if (VAR_9->flags & VAR_4) {
   xfs_attr_leaf_name_local_t *VAR_12 =
    FUNC_13(VAR_8, VAR_11);

   VAR_10 = VAR_6->put_listent(VAR_6,
      VAR_9->flags,
      VAR_12->nameval,
      (int)VAR_12->namelen,
      FUNC_2(VAR_12->valuelen),
      &VAR_12->nameval[VAR_12->namelen]);
   if (VAR_10)
    return VAR_10;
  } else {
   xfs_attr_leaf_name_remote_t *VAR_13 =
    FUNC_14(VAR_8, VAR_11);

   int VAR_14 = FUNC_3(VAR_13->valuelen);

   if (VAR_6->put_value) {
    xfs_da_args_t VAR_15;

    FUNC_6((char *)&VAR_15, 0, sizeof(VAR_15));
    VAR_15.dp = VAR_6->dp;
    VAR_15.whichfork = VAR_2;
    VAR_15.valuelen = VAR_14;
    VAR_15.value = FUNC_4(VAR_14, VAR_1 | VAR_0);
    VAR_15.rmtblkno = FUNC_3(VAR_13->valueblk);
    VAR_15.rmtblkcnt = FUNC_1(VAR_15.dp->i_mount, VAR_14);
    VAR_10 = FUNC_15(&VAR_15);
    if (VAR_10)
     return VAR_10;
    VAR_10 = VAR_6->put_listent(VAR_6,
      VAR_9->flags,
      VAR_13->name,
      (int)VAR_13->namelen,
      VAR_14,
      VAR_15.value);
    FUNC_5(VAR_15.value);
   } else {
    VAR_10 = VAR_6->put_listent(VAR_6,
      VAR_9->flags,
      VAR_13->name,
      (int)VAR_13->namelen,
      VAR_14,
      ((void*)0));
   }
   if (VAR_10)
    return VAR_10;
  }
  if (VAR_6->seen_enough)
   break;
  VAR_7->offset++;
 }
 FUNC_11(VAR_6);
 return(VAR_10);
}
