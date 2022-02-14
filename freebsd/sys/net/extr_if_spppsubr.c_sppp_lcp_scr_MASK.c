
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_short ;
struct TYPE_4__ {int proto; } ;
struct TYPE_3__ {int opts; int magic; int mru; } ;
struct sppp {scalar_t__* confid; scalar_t__* pp_seq; TYPE_2__ hisauth; TYPE_1__ lcp; } ;


 char VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 () ;
 int FUNC_1 (struct sppp*,int ,int ,scalar_t__,int,char**) ;

__attribute__((used)) static void
FUNC_2(struct sppp *VAR_8)
{
 char VAR_9[6 + 4 + 5 ];
 int VAR_10 = 0;
 u_short VAR_11;

 if (VAR_8->lcp.opts & (1 << VAR_4)) {
  if (! VAR_8->lcp.magic)
   VAR_8->lcp.magic = FUNC_0();
  VAR_9[VAR_10++] = VAR_4;
  VAR_9[VAR_10++] = 6;
  VAR_9[VAR_10++] = VAR_8->lcp.magic >> 24;
  VAR_9[VAR_10++] = VAR_8->lcp.magic >> 16;
  VAR_9[VAR_10++] = VAR_8->lcp.magic >> 8;
  VAR_9[VAR_10++] = VAR_8->lcp.magic;
 }

 if (VAR_8->lcp.opts & (1 << VAR_5)) {
  VAR_9[VAR_10++] = VAR_5;
  VAR_9[VAR_10++] = 4;
  VAR_9[VAR_10++] = VAR_8->lcp.mru >> 8;
  VAR_9[VAR_10++] = VAR_8->lcp.mru;
 }

 if (VAR_8->lcp.opts & (1 << VAR_3)) {
  VAR_11 = VAR_8->hisauth.proto;
  VAR_9[VAR_10++] = VAR_3;
  VAR_9[VAR_10++] = VAR_11 == VAR_6? 5: 4;
  VAR_9[VAR_10++] = VAR_11 >> 8;
  VAR_9[VAR_10++] = VAR_11;
  if (VAR_11 == VAR_6)
   VAR_9[VAR_10++] = VAR_0;
 }

 VAR_8->confid[VAR_2] = ++VAR_8->pp_seq[VAR_2];
 FUNC_1 (VAR_8, VAR_7, VAR_1, VAR_8->confid[VAR_2], VAR_10, &VAR_9);
}
