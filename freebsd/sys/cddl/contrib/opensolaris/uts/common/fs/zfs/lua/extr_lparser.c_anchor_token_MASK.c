
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {TYPE_4__* ts; } ;
struct TYPE_11__ {scalar_t__ token; TYPE_2__ seminfo; } ;
struct TYPE_13__ {TYPE_3__ t; int * fs; } ;
struct TYPE_9__ {int len; } ;
struct TYPE_12__ {TYPE_1__ tsv; } ;
typedef TYPE_4__ TString ;
typedef TYPE_5__ LexState ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_5__*,int ,int ) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3 (LexState *VAR_3) {

  FUNC_2(VAR_3->fs != ((void*)0) || VAR_3->t.token == VAR_0);
  if (VAR_3->t.token == VAR_1 || VAR_3->t.token == VAR_2) {
    TString *VAR_4 = VAR_3->t.seminfo.ts;
    FUNC_1(VAR_3, FUNC_0(VAR_4), VAR_4->tsv.len);
  }
}
