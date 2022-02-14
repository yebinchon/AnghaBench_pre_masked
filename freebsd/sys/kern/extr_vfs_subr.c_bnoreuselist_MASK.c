
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bufv {int bv_root; } ;
struct bufobj {int dummy; } ;
struct buf {scalar_t__ b_lblkno; int b_flags; struct bufobj* b_bufobj; } ;
typedef scalar_t__ daddr_t ;


 int FUNC_0 (struct bufobj*) ;
 int FUNC_1 (struct bufobj*) ;
 int FUNC_2 (struct bufobj*) ;
 struct buf* FUNC_3 (int *,scalar_t__) ;
 int FUNC_4 (struct buf*,int,int ,char*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (int,char*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_6 (struct buf*) ;
 int FUNC_7 (struct buf*) ;

int
FUNC_8(struct bufv *VAR_8, struct bufobj *VAR_9, daddr_t VAR_10, daddr_t VAR_11)
{
 struct buf *VAR_12;
 int VAR_13;
 daddr_t VAR_14;

 FUNC_0(VAR_9);

 for (VAR_14 = VAR_10;;) {
again:
  VAR_12 = FUNC_3(&VAR_8->bv_root, VAR_14);
  if (VAR_12 == ((void*)0) || VAR_12->b_lblkno >= VAR_11 ||
      VAR_12->b_lblkno < VAR_10)
   break;
  VAR_13 = FUNC_4(VAR_12, VAR_5 | VAR_7 |
      VAR_6, FUNC_1(VAR_9), "brlsfl", 0, 0);
  if (VAR_13 != 0) {
   FUNC_2(VAR_9);
   if (VAR_13 == VAR_4)
    goto again;
   return (VAR_13);
  }
  FUNC_5(VAR_12->b_bufobj == VAR_9,
      ("bp %p wrong b_bufobj %p should be %p",
      VAR_12, VAR_12->b_bufobj, VAR_9));
  VAR_14 = VAR_12->b_lblkno + 1;
  if ((VAR_12->b_flags & VAR_0) == 0)
   FUNC_7(VAR_12);
  VAR_12->b_flags |= VAR_2;






  if ((VAR_12->b_flags & VAR_3) != 0)
   VAR_12->b_flags |= VAR_1;
  FUNC_6(VAR_12);
  FUNC_2(VAR_9);
 }
 return (0);
}
