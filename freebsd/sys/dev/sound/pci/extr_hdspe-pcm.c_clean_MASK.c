
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct sc_pcminfo {struct sc_info* sc; } ;
struct sc_info {int * pbuf; int * rbuf; } ;
struct sc_chinfo {scalar_t__ dir; int lslot; int rslot; struct sc_pcminfo* parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,int ) ;

__attribute__((used)) static int
FUNC_1(struct sc_chinfo *VAR_3)
{
 struct sc_pcminfo *VAR_4;
 struct sc_info *VAR_5;
 uint32_t *VAR_6;

 VAR_4 = VAR_3->parent;
 VAR_5 = VAR_4->sc;
 VAR_6 = VAR_5->rbuf;

 if (VAR_3->dir == VAR_2) {
  VAR_6 = VAR_5->pbuf;
 }

 FUNC_0(VAR_6 + VAR_0 * VAR_3->lslot, VAR_1);
 FUNC_0(VAR_6 + VAR_0 * VAR_3->rslot, VAR_1);

 return (0);
}
