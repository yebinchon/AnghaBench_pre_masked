
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rt_entry {int rt_state; } ;
struct khash {scalar_t__ k_gate; int k_state; scalar_t__ k_keep; } ;
typedef scalar_t__ naddr ;
struct TYPE_2__ {scalar_t__ tv_sec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 struct khash* FUNC_0 (scalar_t__,scalar_t__,int ) ;
 TYPE_1__ VAR_7 ;
 int FUNC_1 (struct rt_entry*) ;
 struct rt_entry* FUNC_2 (scalar_t__,scalar_t__) ;

void
FUNC_3(naddr VAR_8,
    naddr VAR_9,
    naddr VAR_10,
    int VAR_11)
{
 struct khash *VAR_12;
 struct rt_entry *VAR_13;
 VAR_12 = FUNC_0(VAR_8, VAR_9, 0);
 if (VAR_12 != ((void*)0) && (VAR_10 == 0 || VAR_12->k_gate == VAR_10)) {
  VAR_12->k_state &= ~(VAR_4 | VAR_3 | VAR_0);
  VAR_12->k_state |= VAR_1;
  if (VAR_11) {
   VAR_12->k_state |= VAR_2;
   VAR_12->k_keep = VAR_7.tv_sec + VAR_5;
  }
 }

 VAR_13 = FUNC_2(VAR_8, VAR_9);
 if (VAR_13 != ((void*)0) && (VAR_13->rt_state & VAR_6))
  FUNC_1(VAR_13);
}
