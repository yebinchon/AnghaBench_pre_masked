
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bufdomain {int bd_lofreebuffers; int bd_freebuffers; } ;
struct buf {int b_flags; int b_xflags; scalar_t__ b_npages; scalar_t__ b_kvasize; scalar_t__ b_bufsize; int b_dep; int * b_fsprivate3; int * b_fsprivate2; int * b_fsprivate1; int b_kvabase; int b_data; int * b_bufobj; scalar_t__ b_dirtyend; scalar_t__ b_dirtyoff; scalar_t__ b_bcount; scalar_t__ b_resid; scalar_t__ b_error; scalar_t__ b_iodone; int b_offset; scalar_t__ b_lblkno; scalar_t__ b_blkno; int * b_vp; scalar_t__ b_vflags; scalar_t__ b_ioflags; int b_domain; } ;


 int FUNC_0 (struct bufdomain*) ;
 scalar_t__ FUNC_1 (struct buf*,int,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int) ;
 int VAR_8 ;
 int FUNC_6 (struct bufdomain*) ;
 int FUNC_7 (int ,int) ;
 int VAR_9 ;
 int FUNC_8 (char*,struct buf*) ;
 struct buf* FUNC_9 (int ,int ) ;
 int VAR_10 ;

__attribute__((used)) static struct buf *
FUNC_10(struct bufdomain *VAR_11)
{
 struct buf *VAR_12;
 int VAR_13;






 VAR_12 = ((void*)0);
 VAR_13 = FUNC_5(&VAR_11->bd_freebuffers, -1);
 if (VAR_13 > 0)
  VAR_12 = FUNC_9(VAR_8, VAR_6);
 if (VAR_12 == ((void*)0)) {
  FUNC_4(&VAR_11->bd_freebuffers, 1);
  FUNC_6(VAR_11);
  FUNC_7(VAR_9, 1);
  return (((void*)0));
 }



 if (VAR_13 == VAR_11->bd_lofreebuffers)
  FUNC_6(VAR_11);

 if (FUNC_1(VAR_12, VAR_4 | VAR_5, ((void*)0)) != 0)
  FUNC_8("getnewbuf_empty: Locked buf %p on free queue.", VAR_12);

 FUNC_2(VAR_12->b_vp == ((void*)0),
     ("bp: %p still has vnode %p.", VAR_12, VAR_12->b_vp));
 FUNC_2((VAR_12->b_flags & (VAR_2 | VAR_3)) == 0,
     ("invalid buffer %p flags %#x", VAR_12, VAR_12->b_flags));
 FUNC_2((VAR_12->b_xflags & (VAR_0|VAR_1)) == 0,
     ("bp: %p still on a buffer list. xflags %X", VAR_12, VAR_12->b_xflags));
 FUNC_2(VAR_12->b_npages == 0,
     ("bp: %p still has %d vm pages\n", VAR_12, VAR_12->b_npages));
 FUNC_2(VAR_12->b_kvasize == 0, ("bp: %p still has kva\n", VAR_12));
 FUNC_2(VAR_12->b_bufsize == 0, ("bp: %p still has bufspace\n", VAR_12));

 VAR_12->b_domain = FUNC_0(VAR_11);
 VAR_12->b_flags = 0;
 VAR_12->b_ioflags = 0;
 VAR_12->b_xflags = 0;
 VAR_12->b_vflags = 0;
 VAR_12->b_vp = ((void*)0);
 VAR_12->b_blkno = VAR_12->b_lblkno = 0;
 VAR_12->b_offset = VAR_7;
 VAR_12->b_iodone = 0;
 VAR_12->b_error = 0;
 VAR_12->b_resid = 0;
 VAR_12->b_bcount = 0;
 VAR_12->b_npages = 0;
 VAR_12->b_dirtyoff = VAR_12->b_dirtyend = 0;
 VAR_12->b_bufobj = ((void*)0);
 VAR_12->b_data = VAR_12->b_kvabase = VAR_10;
 VAR_12->b_fsprivate1 = ((void*)0);
 VAR_12->b_fsprivate2 = ((void*)0);
 VAR_12->b_fsprivate3 = ((void*)0);
 FUNC_3(&VAR_12->b_dep);

 return (VAR_12);
}
