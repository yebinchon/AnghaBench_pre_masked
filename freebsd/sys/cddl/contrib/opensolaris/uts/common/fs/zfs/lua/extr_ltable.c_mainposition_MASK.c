
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int Table ;
struct TYPE_6__ {int extra; int hash; int len; } ;
struct TYPE_7__ {TYPE_1__ tsv; } ;
typedef int TValue ;
typedef TYPE_2__ TString ;
typedef int Node ;
 int FUNC_0 (int const*) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (int const*) ;
 int FUNC_3 (TYPE_2__*) ;
 int * FUNC_4 (int const*,int ) ;
 int * FUNC_5 (int const*,int ) ;
 int * FUNC_6 (int const*,int ) ;
 int * FUNC_7 (int const*,TYPE_2__*) ;
 int FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (int const*) ;
 int FUNC_10 (int const*) ;
 TYPE_2__* FUNC_11 (int const*) ;
 int FUNC_12 (int const*) ;

__attribute__((used)) static Node *FUNC_13 (const Table *VAR_0, const TValue *VAR_1) {
  switch (FUNC_12(VAR_1)) {
    case 129:
      return FUNC_5(VAR_0, FUNC_9(VAR_1));
    case 130: {
      TString *VAR_2 = FUNC_11(VAR_1);
      if (VAR_2->tsv.extra == 0) {
        VAR_2->tsv.hash = FUNC_8(FUNC_3(VAR_2), VAR_2->tsv.len, VAR_2->tsv.hash);
        VAR_2->tsv.extra = 1;
      }
      return FUNC_7(VAR_0, FUNC_11(VAR_1));
    }
    case 128:
      return FUNC_7(VAR_0, FUNC_11(VAR_1));
    case 133:
      return FUNC_4(VAR_0, FUNC_0(VAR_1));
    case 131:
      return FUNC_6(VAR_0, FUNC_10(VAR_1));
    case 132:
      return FUNC_6(VAR_0, FUNC_1(VAR_1));
    default:
      return FUNC_6(VAR_0, FUNC_2(VAR_1));
  }
}
