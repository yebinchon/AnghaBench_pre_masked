
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct udf_dirstream {scalar_t__ offset; size_t off; scalar_t__ fsize; int error; scalar_t__ size; int fid_fragment; scalar_t__ this_off; int * buf; struct fileid_desc* data; TYPE_1__* udfmp; int * bp; int node; } ;
struct fileid_desc {scalar_t__ l_fi; int l_iu; } ;
struct TYPE_2__ {int bsize; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct fileid_desc*,int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int * FUNC_4 (int,int ,int) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ,scalar_t__*,scalar_t__,int **,struct fileid_desc**) ;

__attribute__((used)) static struct fileid_desc *
FUNC_7(struct udf_dirstream *VAR_6)
{
 struct fileid_desc *VAR_7;
 int VAR_8, VAR_9 = 0, VAR_10;


 if (VAR_6->offset + VAR_6->off >= VAR_6->fsize) {
  VAR_6->error = 0;
  return (((void*)0));
 }


 if (VAR_6->off == 0) {
  VAR_6->size = 0;
  VAR_8 = FUNC_6(VAR_6->node, &VAR_6->size, VAR_6->offset,
      &VAR_6->bp, &VAR_6->data);
  if (VAR_8) {
   VAR_6->error = VAR_8;
   if (VAR_6->bp != ((void*)0))
    FUNC_1(VAR_6->bp);
   return (((void*)0));
  }
 }





 if (VAR_6->fid_fragment && VAR_6->buf != ((void*)0)) {
  VAR_6->fid_fragment = 0;
  FUNC_2(VAR_6->buf, VAR_2);
 }

 VAR_7 = (struct fileid_desc*)&VAR_6->data[VAR_6->off];






 if (VAR_6->off + VAR_5 > VAR_6->size ||
     VAR_6->off + FUNC_3(VAR_7->l_iu) + VAR_7->l_fi + VAR_5 > VAR_6->size){


  VAR_9 = VAR_6->size - VAR_6->off;
  if (VAR_9 >= VAR_6->udfmp->bsize) {
   FUNC_5("udf: invalid FID fragment\n");
   VAR_6->error = VAR_0;
   return (((void*)0));
  }





  VAR_6->buf = FUNC_4(VAR_6->udfmp->bsize, VAR_2,
       VAR_3 | VAR_4);
  FUNC_0(VAR_7, VAR_6->buf, VAR_9);


  VAR_7 = (struct fileid_desc*)VAR_6->buf;

  if (VAR_6->bp != ((void*)0))
   FUNC_1(VAR_6->bp);


  VAR_6->offset += VAR_6->size;
  VAR_6->size = 0;
  VAR_8 = FUNC_6(VAR_6->node, &VAR_6->size, VAR_6->offset,
      &VAR_6->bp, &VAR_6->data);
  if (VAR_8) {
   VAR_6->error = VAR_8;
   return (((void*)0));
  }





  if (VAR_9 < VAR_5)
   FUNC_0(VAR_6->data, &VAR_6->buf[VAR_9],
       VAR_5 - VAR_9);






  VAR_10 = VAR_5 + FUNC_3(VAR_7->l_iu) + VAR_7->l_fi;
  if (VAR_10 > VAR_6->udfmp->bsize) {
   FUNC_5("udf: invalid FID\n");
   VAR_6->error = VAR_1;
   return (((void*)0));
  }
  FUNC_0(VAR_6->data, &VAR_6->buf[VAR_9],
      VAR_10 - VAR_9);

  VAR_6->fid_fragment = 1;
 } else {
  VAR_10 = FUNC_3(VAR_7->l_iu) + VAR_7->l_fi + VAR_5;
 }





 VAR_6->this_off = VAR_6->offset + VAR_6->off;
 if (!VAR_6->fid_fragment) {
  VAR_6->off += (VAR_10 + 3) & ~0x03;
 } else {
  VAR_6->off = (VAR_10 - VAR_9 + 3) & ~0x03;
 }

 return (VAR_7);
}
