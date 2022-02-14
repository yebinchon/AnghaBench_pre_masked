
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip_vs_conn {int timeout; int flags; int n_control; int refcnt; int * app; int pe_data; int pe; scalar_t__ control; int timer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*,int,int) ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (struct ip_vs_conn*) ;
 int VAR_6 ;
 int FUNC_6 (struct ip_vs_conn*) ;
 int FUNC_7 (struct ip_vs_conn*) ;
 int FUNC_8 (struct ip_vs_conn*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct ip_vs_conn*,int ) ;
 int VAR_7 ;
 int FUNC_11 (struct ip_vs_conn*) ;
 int FUNC_12 (struct ip_vs_conn*) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ,struct ip_vs_conn*) ;
 scalar_t__ FUNC_15 (int) ;
 int FUNC_16 () ;
 scalar_t__ FUNC_17 (int *) ;
 scalar_t__ FUNC_18 (int ) ;

__attribute__((used)) static void FUNC_19(unsigned long VAR_8)
{
 struct ip_vs_conn *VAR_9 = (struct ip_vs_conn *)VAR_8;

 VAR_9->timeout = 60*VAR_0;




 FUNC_2(&VAR_9->refcnt);




 if (FUNC_3(&VAR_9->n_control))
  goto expire_later;




 if (!FUNC_7(VAR_9) && !(VAR_9->flags & VAR_2))
  goto expire_later;




 if (FUNC_15(FUNC_3(&VAR_9->refcnt) == 1)) {

  if (FUNC_17(&VAR_9->timer))
   FUNC_4(&VAR_9->timer);


  if (VAR_9->control)
   FUNC_8(VAR_9);





  FUNC_9(VAR_9->pe);
  FUNC_13(VAR_9->pe_data);
  if (FUNC_18(VAR_9->app != ((void*)0)))
   FUNC_11(VAR_9);
  FUNC_12(VAR_9);
  if (VAR_9->flags & VAR_1)
   FUNC_1(&VAR_6);
  FUNC_1(&VAR_5);

  FUNC_14(VAR_4, VAR_9);
  return;
 }


 FUNC_5(VAR_9);

  expire_later:
 FUNC_0(7, "delayed: conn->refcnt-1=%d conn->n_control=%d\n",
    FUNC_3(&VAR_9->refcnt)-1,
    FUNC_3(&VAR_9->n_control));

 if (VAR_7 & VAR_3)
  FUNC_10(VAR_9, FUNC_16());

 FUNC_6(VAR_9);
}
