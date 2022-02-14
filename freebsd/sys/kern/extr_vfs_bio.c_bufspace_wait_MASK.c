
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {scalar_t__ v_type; } ;
struct thread {int td_pflags; } ;
struct bufdomain {scalar_t__ bd_wanted; } ;


 int FUNC_0 (struct bufdomain*) ;
 int FUNC_1 (struct bufdomain*) ;
 int FUNC_2 (struct bufdomain*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (struct vnode*,struct bufdomain*,int ) ;
 struct thread* VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (scalar_t__*,int ,int,char*,int) ;

__attribute__((used)) static void
FUNC_5(struct bufdomain *VAR_7, struct vnode *VAR_8, int VAR_9,
    int VAR_10, int VAR_11)
{
 struct thread *VAR_12;
 int VAR_13, VAR_14, VAR_15;

 if ((VAR_9 & VAR_0) != 0)
  return;

 VAR_12 = VAR_5;
 FUNC_0(VAR_7);
 while (VAR_7->bd_wanted) {
  if (VAR_8 != ((void*)0) && VAR_8->v_type != VAR_4 &&
      (VAR_12->td_pflags & VAR_2) == 0) {
   FUNC_2(VAR_7);
   VAR_15 = ~(VAR_2 | VAR_3) |
       (VAR_12->td_pflags & VAR_3);
   VAR_12->td_pflags |= VAR_2 | VAR_3;
   VAR_14 = FUNC_3(VAR_8, VAR_7, VAR_6);
   VAR_12->td_pflags &= VAR_15;
   FUNC_0(VAR_7);
   if (VAR_14 != 0)
    continue;
   if (VAR_7->bd_wanted == 0)
    break;
  }
  VAR_13 = FUNC_4(&VAR_7->bd_wanted, FUNC_1(VAR_7),
      (VAR_1 + 4) | VAR_10, "newbuf", VAR_11);
  if (VAR_13 != 0)
   break;
 }
 FUNC_2(VAR_7);
}
