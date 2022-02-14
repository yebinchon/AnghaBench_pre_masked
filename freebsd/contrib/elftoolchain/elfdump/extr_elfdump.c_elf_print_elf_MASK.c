
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct elfdump {int options; int elf; int ec; int ehdr; } ;


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
 int VAR_12 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct elfdump*) ;
 int FUNC_2 (struct elfdump*) ;
 int FUNC_3 (struct elfdump*) ;
 int FUNC_4 (struct elfdump*) ;
 int FUNC_5 (struct elfdump*) ;
 int FUNC_6 (struct elfdump*) ;
 int FUNC_7 (struct elfdump*) ;
 int FUNC_8 (struct elfdump*) ;
 int FUNC_9 (struct elfdump*) ;
 int FUNC_10 (struct elfdump*) ;
 int FUNC_11 (struct elfdump*) ;
 int FUNC_12 (struct elfdump*) ;
 int FUNC_13 (int ) ;
 int * FUNC_14 (int ,int *) ;
 int FUNC_15 (struct elfdump*) ;
 int FUNC_16 (struct elfdump*) ;
 int FUNC_17 (char*,int ) ;

__attribute__((used)) static void
FUNC_18(struct elfdump *VAR_13)
{

 if (FUNC_14(VAR_13->elf, &VAR_13->ehdr) == ((void*)0)) {
  FUNC_17("gelf_getehdr failed: %s", FUNC_0(-1));
  return;
 }
 if ((VAR_13->ec = FUNC_13(VAR_13->elf)) == VAR_12) {
  FUNC_17("gelf_getclass failed: %s", FUNC_0(-1));
  return;
 }

 if (VAR_13->options & (VAR_9 | VAR_1 | VAR_8 | VAR_3 | VAR_10 |
     VAR_11 | VAR_6 | VAR_4))
  FUNC_15(VAR_13);

 if (VAR_13->options & VAR_2)
  FUNC_3(VAR_13);
 if (VAR_13->options & VAR_7)
  FUNC_8(VAR_13);
 if (VAR_13->options & VAR_5)
  FUNC_6(VAR_13);
 if (VAR_13->options & VAR_9)
  FUNC_10(VAR_13);
 if (VAR_13->options & VAR_1)
  FUNC_2(VAR_13);
 if (VAR_13->options & VAR_8)
  FUNC_9(VAR_13);
 if (VAR_13->options & VAR_3)
  FUNC_4(VAR_13);
 if (VAR_13->options & VAR_10)
  FUNC_11(VAR_13);
 if (VAR_13->options & VAR_11)
  FUNC_12(VAR_13);
 if (VAR_13->options & VAR_6)
  FUNC_7(VAR_13);
 if (VAR_13->options & VAR_4)
  FUNC_5(VAR_13);
 if (VAR_13->options & VAR_0)
  FUNC_1(VAR_13);

 FUNC_16(VAR_13);
}
