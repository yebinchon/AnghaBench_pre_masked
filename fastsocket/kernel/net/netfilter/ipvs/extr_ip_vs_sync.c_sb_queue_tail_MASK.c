
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip_vs_sync_buff {int list; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ip_vs_sync_buff*) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_9 ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 (int ) ;

__attribute__((used)) static inline void FUNC_8(struct ip_vs_sync_buff *VAR_10)
{
 FUNC_4(&VAR_4);
 if (VAR_8 & VAR_2 &&
     VAR_7 < FUNC_6()) {
  if (!VAR_7)
   FUNC_3(&VAR_3,
           FUNC_2(VAR_0, 1));
  VAR_7++;
  FUNC_1(&VAR_10->list, &VAR_5);
  if ((++VAR_6) == VAR_1)
   FUNC_7(VAR_9);
 } else
  FUNC_0(VAR_10);
 FUNC_5(&VAR_4);
}
