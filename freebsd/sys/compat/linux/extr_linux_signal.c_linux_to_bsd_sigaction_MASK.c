
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sigaction {int sa_flags; int sa_handler; int sa_mask; } ;
struct TYPE_3__ {int lsa_flags; int lsa_handler; int lsa_mask; } ;
typedef TYPE_1__ l_sigaction_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static void
FUNC_2(l_sigaction_t *VAR_14, struct sigaction *VAR_15)
{

 FUNC_1(&VAR_14->lsa_mask, &VAR_15->sa_mask);
 VAR_15->sa_handler = FUNC_0(VAR_14->lsa_handler);
 VAR_15->sa_flags = 0;
 if (VAR_14->lsa_flags & VAR_0)
  VAR_15->sa_flags |= VAR_7;
 if (VAR_14->lsa_flags & VAR_1)
  VAR_15->sa_flags |= VAR_8;
 if (VAR_14->lsa_flags & VAR_6)
  VAR_15->sa_flags |= VAR_13;
 if (VAR_14->lsa_flags & VAR_4)
  VAR_15->sa_flags |= VAR_10;
 if (VAR_14->lsa_flags & VAR_5)
  VAR_15->sa_flags |= VAR_12;
 if (VAR_14->lsa_flags & VAR_3)
  VAR_15->sa_flags |= VAR_11;
 if (VAR_14->lsa_flags & VAR_2)
  VAR_15->sa_flags |= VAR_9;
}
