
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int a_access_mask; int a_type; int a_who; } ;
typedef TYPE_1__ ace_t ;


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
 int FUNC_0 (int,int,int,int ) ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*,int) ;

__attribute__((used)) static void
FUNC_2(ace_t *VAR_12, ace_t *VAR_13, int VAR_14, int VAR_15)
{
 (void) FUNC_1(VAR_13, VAR_12, sizeof (ace_t));

 VAR_13->a_who = VAR_12->a_who;

 VAR_13->a_type = VAR_0;
 VAR_13->a_access_mask ^= VAR_3;
 if (VAR_14)
  VAR_13->a_access_mask ^= VAR_2;

 VAR_13->a_access_mask &= ~(VAR_6 | VAR_10 |
     VAR_1 | VAR_7 | VAR_5 |
     VAR_9);
 VAR_13->a_access_mask |= FUNC_0((VAR_12->a_access_mask &
     VAR_8), (VAR_12->a_access_mask & VAR_4), VAR_15,
     VAR_11);
}
