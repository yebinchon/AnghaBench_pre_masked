
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sc_pcminfo {struct sc_info* sc; } ;
struct sc_info {int dummy; } ;
struct sc_chinfo {scalar_t__ dir; int run; int lslot; int rslot; struct sc_pcminfo* parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct sc_info*,int,int) ;

__attribute__((used)) static void
FUNC_1(struct sc_chinfo *VAR_3, int VAR_4)
{
 struct sc_pcminfo *VAR_5;
 struct sc_info *VAR_6;
 int VAR_7;

 VAR_5 = VAR_3->parent;
 VAR_6 = VAR_5->sc;

 if (VAR_3->dir == VAR_2)
  VAR_7 = VAR_1;
 else
  VAR_7 = VAR_0;

 VAR_3->run = VAR_4;

 FUNC_0(VAR_6, VAR_7 + (4 * VAR_3->lslot), VAR_4);
 FUNC_0(VAR_6, VAR_7 + (4 * VAR_3->rslot), VAR_4);
}
