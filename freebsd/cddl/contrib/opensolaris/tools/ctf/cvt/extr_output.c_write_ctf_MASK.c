
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int tdata_t ;
struct stat {int st_mode; } ;
typedef int caddr_t ;
struct TYPE_3__ {int* e_ident; } ;
typedef TYPE_1__ GElf_Ehdr ;
typedef int Elf ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int) ;
 int * FUNC_1 (int,int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char const*,char*) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int,struct stat*) ;
 scalar_t__ FUNC_7 (int *,TYPE_1__*) ;
 int FUNC_8 (int *,int *,char const*,size_t*,int) ;
 int FUNC_9 (char const*,int,...) ;
 int FUNC_10 (char*,char const*) ;
 int FUNC_11 (int *,char const*,int *,char const*,int ,size_t,int) ;

void
FUNC_12(tdata_t *VAR_11, const char *VAR_12, const char *VAR_13, int VAR_14)
{
 struct stat VAR_15;
 Elf *VAR_16 = ((void*)0);
 Elf *VAR_17 = ((void*)0);
 GElf_Ehdr VAR_18;
 caddr_t VAR_19;
 size_t VAR_20;
 int VAR_21 = -1;
 int VAR_22 = -1;
 int VAR_23;

 (void) FUNC_3(VAR_6);
 if ((VAR_21 = FUNC_9(VAR_12, VAR_8)) < 0 || FUNC_6(VAR_21, &VAR_15) < 0)
  FUNC_10("%s: Cannot open for re-reading", VAR_12);
 if ((VAR_16 = FUNC_1(VAR_21, VAR_4, ((void*)0))) == ((void*)0))
  FUNC_4(VAR_12, "Cannot re-read");

 if ((VAR_22 = FUNC_9(VAR_13, VAR_9 | VAR_7 | VAR_10, VAR_15.st_mode)) < 0)
  FUNC_10("Cannot open temp file %s for writing", VAR_13);
 if ((VAR_17 = FUNC_1(VAR_22, VAR_5, ((void*)0))) == ((void*)0))
  FUNC_4(VAR_12, "Cannot write");

 if (FUNC_7(VAR_16, &VAR_18)) {

  VAR_23 = VAR_3;







  if (VAR_18.e_ident[VAR_1] == VAR_23)
   VAR_14 &= ~VAR_0;
 }
 else
  FUNC_4(VAR_12, "Failed to get EHDR");

 VAR_19 = FUNC_8(VAR_11, VAR_16, VAR_12, &VAR_20, VAR_14);
 FUNC_11(VAR_16, VAR_12, VAR_17, VAR_13, VAR_19, VAR_20, VAR_14);
 FUNC_5(VAR_19);

 FUNC_2(VAR_17);
 FUNC_2(VAR_16);
 (void) FUNC_0(VAR_21);
 (void) FUNC_0(VAR_22);
}
