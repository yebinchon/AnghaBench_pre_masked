
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xbd_softc {int xbd_flags; } ;
struct sbuf {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct sbuf*) ;
 int FUNC_1 (struct sbuf*) ;
 int FUNC_2 (struct sbuf*,char*,size_t,int ) ;
 int FUNC_3 (struct sbuf*,char*) ;

__attribute__((used)) static int
FUNC_4(struct xbd_softc *VAR_5, char *VAR_6, size_t VAR_7)
{
 struct sbuf VAR_8;
 int VAR_9;

 FUNC_2(&VAR_8, VAR_6, VAR_7, VAR_0);

 VAR_9 = 0;
 if ((VAR_5->xbd_flags & VAR_3) != 0) {
  FUNC_3(&VAR_8, "flush");
  VAR_9++;
 }

 if ((VAR_5->xbd_flags & VAR_1) != 0) {
  if (VAR_9 != 0)
   FUNC_3(&VAR_8, ", ");
  FUNC_3(&VAR_8, "write_barrier");
  VAR_9++;
 }

 if ((VAR_5->xbd_flags & VAR_2) != 0) {
  if (VAR_9 != 0)
   FUNC_3(&VAR_8, ", ");
  FUNC_3(&VAR_8, "discard");
  VAR_9++;
 }

 if ((VAR_5->xbd_flags & VAR_4) != 0) {
  if (VAR_9 != 0)
   FUNC_3(&VAR_8, ", ");
  FUNC_3(&VAR_8, "persistent_grants");
  VAR_9++;
 }

 (void) FUNC_0(&VAR_8);
 return (FUNC_1(&VAR_8));
}
