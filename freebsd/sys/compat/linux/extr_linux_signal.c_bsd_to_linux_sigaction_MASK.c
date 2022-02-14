
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sigaction {uintptr_t sa_handler; int sa_flags; int sa_mask; } ;
struct TYPE_3__ {uintptr_t lsa_handler; int lsa_flags; scalar_t__ lsa_restorer; int lsa_mask; } ;
typedef TYPE_1__ l_sigaction_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int *,int *) ;

__attribute__((used)) static void
FUNC_1(struct sigaction *VAR_14, l_sigaction_t *VAR_15)
{

 FUNC_0(&VAR_14->sa_mask, &VAR_15->lsa_mask);



 VAR_15->lsa_handler = VAR_14->sa_handler;

 VAR_15->lsa_restorer = 0;
 VAR_15->lsa_flags = 0;
 if (VAR_14->sa_flags & VAR_7)
  VAR_15->lsa_flags |= VAR_0;
 if (VAR_14->sa_flags & VAR_8)
  VAR_15->lsa_flags |= VAR_1;
 if (VAR_14->sa_flags & VAR_13)
  VAR_15->lsa_flags |= VAR_6;
 if (VAR_14->sa_flags & VAR_10)
  VAR_15->lsa_flags |= VAR_4;
 if (VAR_14->sa_flags & VAR_12)
  VAR_15->lsa_flags |= VAR_5;
 if (VAR_14->sa_flags & VAR_11)
  VAR_15->lsa_flags |= VAR_3;
 if (VAR_14->sa_flags & VAR_9)
  VAR_15->lsa_flags |= VAR_2;
}
