
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unpcb {int unp_flags; struct unpcb* unp_conn; int unp_refs; } ;
struct socket {int so_type; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *,struct unpcb*,int ) ;
 int VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct unpcb*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (char*) ;
 int FUNC_6 (struct socket*) ;
 int FUNC_7 (struct socket*) ;
 struct unpcb* FUNC_8 (struct socket*) ;
 int FUNC_9 (struct unpcb*) ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_10(struct socket *VAR_5, struct socket *VAR_6, int VAR_7)
{
 struct unpcb *VAR_8;
 struct unpcb *VAR_9;

 VAR_8 = FUNC_8(VAR_5);
 FUNC_0(VAR_8 != ((void*)0), ("unp_connect2: unp == NULL"));
 VAR_9 = FUNC_8(VAR_6);
 FUNC_0(VAR_9 != ((void*)0), ("unp_connect2: unp2 == NULL"));

 FUNC_2(VAR_8);
 FUNC_2(VAR_9);

 if (VAR_6->so_type != VAR_5->so_type)
  return (VAR_0);
 VAR_9->unp_flags &= ~VAR_3;
 VAR_8->unp_conn = VAR_9;
 FUNC_9(VAR_9);
 FUNC_9(VAR_8);
 switch (VAR_5->so_type) {
 case 130:
  FUNC_3();
  FUNC_1(&VAR_9->unp_refs, VAR_8, VAR_4);
  FUNC_4();
  FUNC_6(VAR_5);
  break;

 case 128:
 case 129:
  VAR_9->unp_conn = VAR_8;
  if (VAR_7 == VAR_1 &&
      ((VAR_8->unp_flags | VAR_9->unp_flags) & VAR_2))
   FUNC_7(VAR_5);
  else
   FUNC_6(VAR_5);
  FUNC_6(VAR_6);
  break;

 default:
  FUNC_5("unp_connect2");
 }
 return (0);
}
