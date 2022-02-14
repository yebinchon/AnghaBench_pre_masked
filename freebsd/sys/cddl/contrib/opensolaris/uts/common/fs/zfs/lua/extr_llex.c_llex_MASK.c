
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;


struct TYPE_26__ {int current; int buff; } ;
struct TYPE_25__ {TYPE_2__* ts; } ;
struct TYPE_23__ {int extra; } ;
struct TYPE_24__ {TYPE_1__ tsv; } ;
typedef TYPE_2__ TString ;
typedef TYPE_3__ SemInfo ;
typedef TYPE_4__ LexState ;



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
 int FUNC_0 (TYPE_4__*,char*) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_4__*,char*,int) ;
 int FUNC_5 (char) ;
 int FUNC_6 (char) ;
 int FUNC_7 (char) ;
 TYPE_2__* FUNC_8 (TYPE_4__*,int ,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (TYPE_4__*) ;
 int FUNC_13 (TYPE_4__*,TYPE_3__*,int) ;
 int FUNC_14 (TYPE_4__*,TYPE_3__*) ;
 int FUNC_15 (TYPE_4__*,char,TYPE_3__*) ;
 int FUNC_16 (TYPE_4__*) ;
 int FUNC_17 (TYPE_4__*) ;

__attribute__((used)) static int FUNC_18 (LexState *VAR_12, SemInfo *VAR_13) {
  FUNC_11(VAR_12->buff);
  for (;;) {
    switch (VAR_12->current) {
      case '\n': case '\r': {
        FUNC_2(VAR_12);
        break;
      }
      case ' ': case '\f': case '\t': case '\v': {
        FUNC_12(VAR_12);
        break;
      }
      case '-': {
        FUNC_12(VAR_12);
        if (VAR_12->current != '-') return '-';

        FUNC_12(VAR_12);
        if (VAR_12->current == '[') {
          int VAR_14 = FUNC_17(VAR_12);
          FUNC_11(VAR_12->buff);
          if (VAR_14 >= 0) {
            FUNC_13(VAR_12, ((void*)0), VAR_14);
            FUNC_11(VAR_12->buff);
            break;
          }
        }

        while (!FUNC_1(VAR_12) && VAR_12->current != 128)
          FUNC_12(VAR_12);
        break;
      }
      case '[': {
        int VAR_15 = FUNC_17(VAR_12);
        if (VAR_15 >= 0) {
          FUNC_13(VAR_12, VAR_13, VAR_15);
          return VAR_11;
        }
        else if (VAR_15 == -1) return '[';
        else FUNC_4(VAR_12, "invalid long string delimiter", VAR_11);
      }
      case '=': {
        FUNC_12(VAR_12);
        if (VAR_12->current != '=') return '=';
        else { FUNC_12(VAR_12); return VAR_5; }
      }
      case '<': {
        FUNC_12(VAR_12);
        if (VAR_12->current != '=') return '<';
        else { FUNC_12(VAR_12); return VAR_7; }
      }
      case '>': {
        FUNC_12(VAR_12);
        if (VAR_12->current != '=') return '>';
        else { FUNC_12(VAR_12); return VAR_6; }
      }
      case '~': {
        FUNC_12(VAR_12);
        if (VAR_12->current != '=') return '~';
        else { FUNC_12(VAR_12); return VAR_9; }
      }
      case ':': {
        FUNC_12(VAR_12);
        if (VAR_12->current != ':') return ':';
        else { FUNC_12(VAR_12); return VAR_2; }
      }
      case '"': case '\'': {
        FUNC_15(VAR_12, VAR_12->current, VAR_13);
        return VAR_11;
      }
      case '.': {
        FUNC_16(VAR_12);
        if (FUNC_0(VAR_12, ".")) {
          if (FUNC_0(VAR_12, "."))
            return VAR_3;
          else return VAR_1;
        }
        else if (!FUNC_5(VAR_12->current)) return '.';

      }

      case '0': case '1': case '2': case '3': case '4':
      case '5': case '6': case '7': case '8': case '9': {
        FUNC_14(VAR_12, VAR_13);
        return VAR_10;
      }
      case 128: {
        return VAR_4;
      }
      default: {
        if (FUNC_7(VAR_12->current)) {
          TString *VAR_16;
          do {
            FUNC_16(VAR_12);
          } while (FUNC_6(VAR_12->current));
          VAR_16 = FUNC_8(VAR_12, FUNC_9(VAR_12->buff),
                                  FUNC_10(VAR_12->buff));
          VAR_13->ts = VAR_16;
          if (FUNC_3(VAR_16))
            return VAR_16->tsv.extra - 1 + VAR_0;
          else {
            return VAR_8;
          }
        }
        else {
          int VAR_17 = VAR_12->current;
          FUNC_12(VAR_12);
          return VAR_17;
        }
      }
    }
  }
}
