
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__* e_ident; } ;
struct readelf {int options; int dw_decode; int dw_read; TYPE_1__ ehdr; int elf; int ec; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
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
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_0 (struct readelf*) ;
 int FUNC_1 (struct readelf*) ;
 int FUNC_2 (struct readelf*) ;
 int FUNC_3 (struct readelf*) ;
 int FUNC_4 (struct readelf*) ;
 int FUNC_5 (struct readelf*) ;
 int FUNC_6 (struct readelf*) ;
 int FUNC_7 (struct readelf*) ;
 int FUNC_8 (struct readelf*) ;
 int FUNC_9 (struct readelf*) ;
 int FUNC_10 (struct readelf*) ;
 int FUNC_11 (struct readelf*) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int ) ;
 int * FUNC_14 (int ,TYPE_1__*) ;
 int FUNC_15 (struct readelf*) ;
 int FUNC_16 (struct readelf*) ;
 int FUNC_17 (struct readelf*) ;
 int FUNC_18 (struct readelf*) ;
 int FUNC_19 (struct readelf*) ;
 int FUNC_20 (char*,int ) ;

__attribute__((used)) static void
FUNC_21(struct readelf *VAR_21)
{


 if (FUNC_14(VAR_21->elf, &VAR_21->ehdr) == ((void*)0)) {
  FUNC_20("gelf_getehdr failed: %s", FUNC_12(-1));
  return;
 }
 if ((VAR_21->ec = FUNC_13(VAR_21->elf)) == VAR_1) {
  FUNC_20("gelf_getclass failed: %s", FUNC_12(-1));
  return;
 }
 if (VAR_21->ehdr.e_ident[VAR_0] == VAR_2) {
  VAR_21->dw_read = VAR_20;
  VAR_21->dw_decode = VAR_18;
 } else {
  VAR_21->dw_read = VAR_19;
  VAR_21->dw_decode = VAR_17;
 }

 if (VAR_21->options & ~VAR_6)
  FUNC_16(VAR_21);
 if ((VAR_21->options & VAR_14) || (VAR_21->options & VAR_12))
  FUNC_17(VAR_21);
 if (VAR_21->options & VAR_6)
  FUNC_3(VAR_21);
 if (VAR_21->options & VAR_8)
  FUNC_6(VAR_21);
 if (VAR_21->options & VAR_13)
  FUNC_9(VAR_21);
 if (VAR_21->options & VAR_5)
  FUNC_8(VAR_21);
 if (VAR_21->options & VAR_4)
  FUNC_2(VAR_21);
 if (VAR_21->options & VAR_11)
  FUNC_7(VAR_21);
 if (VAR_21->options & VAR_12)
  FUNC_10(VAR_21);
 if (VAR_21->options & VAR_9)
  FUNC_5(VAR_21);
 if (VAR_21->options & VAR_7)
  FUNC_4(VAR_21);
 if (VAR_21->options & VAR_16)
  FUNC_15(VAR_21);
 if (VAR_21->options & VAR_10)
  FUNC_18(VAR_21);
 if (VAR_21->options & VAR_14)
  FUNC_11(VAR_21);
 if (VAR_21->options & VAR_3)
  FUNC_0(VAR_21);
 if (VAR_21->options & VAR_15)
  FUNC_1(VAR_21);
 if (VAR_21->options & ~VAR_6)
  FUNC_19(VAR_21);
}
