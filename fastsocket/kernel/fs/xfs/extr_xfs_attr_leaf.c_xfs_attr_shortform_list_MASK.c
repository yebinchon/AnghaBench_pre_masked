
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_9__ ;
typedef struct TYPE_29__ TYPE_8__ ;
typedef struct TYPE_28__ TYPE_7__ ;
typedef struct TYPE_27__ TYPE_6__ ;
typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;


struct TYPE_25__ {int i_mount; TYPE_3__* i_afp; } ;
typedef TYPE_4__ xfs_inode_t ;
struct TYPE_23__ {int count; } ;
struct TYPE_26__ {TYPE_2__ hdr; TYPE_7__* list; } ;
typedef TYPE_5__ xfs_attr_shortform_t ;
struct TYPE_27__ {int entno; scalar_t__ hash; size_t namelen; int valuelen; int * name; int flags; } ;
typedef TYPE_6__ xfs_attr_sf_sort_t ;
struct TYPE_28__ {size_t namelen; int valuelen; int flags; int * nameval; } ;
typedef TYPE_7__ xfs_attr_sf_entry_t ;
struct TYPE_29__ {scalar_t__ bufsize; int (* put_listent ) (TYPE_8__*,int ,int *,int,int,int *) ;scalar_t__ seen_enough; TYPE_4__* dp; TYPE_9__* cursor; } ;
typedef TYPE_8__ xfs_attr_list_context_t ;
struct TYPE_30__ {int initted; scalar_t__ hashval; int offset; scalar_t__ blkno; } ;
typedef TYPE_9__ attrlist_cursor_kern_t ;
struct TYPE_22__ {scalar_t__ if_data; } ;
struct TYPE_24__ {scalar_t__ if_bytes; TYPE_1__ if_u1; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_7__* FUNC_1 (TYPE_7__*) ;
 int FUNC_2 (char*,int ,int ,TYPE_7__*) ;
 int VAR_3 ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (TYPE_9__*) ;
 TYPE_6__* FUNC_5 (int,int) ;
 int FUNC_6 (TYPE_6__*) ;
 int FUNC_7 (TYPE_8__*,int ,int *,int,int,int *) ;
 int FUNC_8 (TYPE_8__*,int ,int *,size_t,int,int *) ;
 int FUNC_9 (TYPE_8__*) ;
 int FUNC_10 (TYPE_8__*) ;
 scalar_t__ FUNC_11 (int) ;
 int VAR_4 ;
 scalar_t__ FUNC_12 (int *,size_t) ;
 int FUNC_13 (TYPE_6__*,int,int,int ) ;

int
FUNC_14(xfs_attr_list_context_t *VAR_5)
{
 attrlist_cursor_kern_t *VAR_6;
 xfs_attr_sf_sort_t *VAR_7, *VAR_8;
 xfs_attr_shortform_t *VAR_9;
 xfs_attr_sf_entry_t *VAR_10;
 xfs_inode_t *VAR_11;
 int VAR_12, VAR_13, VAR_14, VAR_15;
 int VAR_16;

 FUNC_0(VAR_5 != ((void*)0));
 VAR_11 = VAR_5->dp;
 FUNC_0(VAR_11 != ((void*)0));
 FUNC_0(VAR_11->i_afp != ((void*)0));
 VAR_9 = (xfs_attr_shortform_t *)VAR_11->i_afp->if_u1.if_data;
 FUNC_0(VAR_9 != ((void*)0));
 if (!VAR_9->hdr.count)
  return(0);
 VAR_6 = VAR_5->cursor;
 FUNC_0(VAR_6 != ((void*)0));

 FUNC_9(VAR_5);
 if (VAR_5->bufsize == 0 ||
     (FUNC_4(VAR_6) &&
             (VAR_11->i_afp->if_bytes + VAR_9->hdr.count * 16) < VAR_5->bufsize)) {
  for (VAR_15 = 0, VAR_10 = &VAR_9->list[0]; VAR_15 < VAR_9->hdr.count; VAR_15++) {
   VAR_16 = VAR_5->put_listent(VAR_5,
        VAR_10->flags,
        VAR_10->nameval,
        (int)VAR_10->namelen,
        (int)VAR_10->valuelen,
        &VAR_10->nameval[VAR_10->namelen]);





   if (VAR_5->seen_enough)
    break;

   if (VAR_16)
    return VAR_16;
   VAR_10 = FUNC_1(VAR_10);
  }
  FUNC_10(VAR_5);
  return(0);
 }


 if (VAR_5->bufsize == 0)
  return 0;




 VAR_12 = VAR_9->hdr.count * sizeof(*VAR_7);
 VAR_8 = VAR_7 = FUNC_5(VAR_12, VAR_2 | VAR_1);





 VAR_13 = 0;
 for (VAR_15 = 0, VAR_10 = &VAR_9->list[0]; VAR_15 < VAR_9->hdr.count; VAR_15++) {
  if (FUNC_11(
      ((char *)VAR_10 < (char *)VAR_9) ||
      ((char *)VAR_10 >= ((char *)VAR_9 + VAR_11->i_afp->if_bytes)))) {
   FUNC_2("xfs_attr_shortform_list",
          VAR_3,
          VAR_5->dp->i_mount, VAR_10);
   FUNC_6(VAR_7);
   return FUNC_3(VAR_0);
  }

  VAR_8->entno = VAR_15;
  VAR_8->hash = FUNC_12(VAR_10->nameval, VAR_10->namelen);
  VAR_8->name = VAR_10->nameval;
  VAR_8->namelen = VAR_10->namelen;

  VAR_8->valuelen = VAR_10->valuelen;
  VAR_8->flags = VAR_10->flags;
  VAR_10 = FUNC_1(VAR_10);
  VAR_8++;
  VAR_13++;
 }




 FUNC_13(VAR_7, VAR_13, sizeof(*VAR_7), VAR_4);




 VAR_14 = 0;
 VAR_6->initted = 1;
 VAR_6->blkno = 0;
 for (VAR_8 = VAR_7, VAR_15 = 0; VAR_15 < VAR_13; VAR_15++, VAR_8++) {
  if (VAR_8->hash == VAR_6->hashval) {
   if (VAR_6->offset == VAR_14) {
    break;
   }
   VAR_14++;
  } else if (VAR_8->hash > VAR_6->hashval) {
   break;
  }
 }
 if (VAR_15 == VAR_13) {
  FUNC_6(VAR_7);
  return(0);
 }




 for ( ; VAR_15 < VAR_13; VAR_15++, VAR_8++) {
  if (VAR_6->hashval != VAR_8->hash) {
   VAR_6->hashval = VAR_8->hash;
   VAR_6->offset = 0;
  }
  VAR_16 = VAR_5->put_listent(VAR_5,
     VAR_8->flags,
     VAR_8->name,
     VAR_8->namelen,
     VAR_8->valuelen,
     &VAR_8->name[VAR_8->namelen]);
  if (VAR_16)
   return VAR_16;
  if (VAR_5->seen_enough)
   break;
  VAR_6->offset++;
 }

 FUNC_6(VAR_7);
 return(0);
}
