
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spec_name {int dummy; } ;
struct elfdump {int options; char* filename; int * archive; int flags; int snl; int * out; } ;


 void* VAR_0 ;
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
 char* FUNC_0 () ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,struct spec_name*,int ,int ) ;
 int FUNC_4 (struct elfdump*,int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct elfdump*) ;
 scalar_t__ FUNC_7 (int ) ;
 int VAR_21 ;
 char* FUNC_8 () ;
 int FUNC_9 (int ,char*,int ) ;
 int FUNC_10 (int ,char*,int ) ;
 int FUNC_11 (int ) ;
 struct spec_name* FUNC_12 (struct elfdump*,char*) ;
 int * FUNC_13 (int ,char*) ;
 int FUNC_14 (int,char**,char*,int ,int *) ;
 int FUNC_15 (struct elfdump*,int ,int) ;
 int VAR_22 ;
 scalar_t__ VAR_23 ;
 int FUNC_16 (char*,char*,char*) ;
 int VAR_24 ;
 int VAR_25 ;
 int * VAR_26 ;
 int FUNC_17 () ;

int
FUNC_18(int VAR_27, char **VAR_28)
{
 struct elfdump *VAR_29, VAR_30;
 struct spec_name *VAR_31;
 int VAR_32, VAR_33;

 VAR_29 = &VAR_30;
 FUNC_15(VAR_29, 0, sizeof(*VAR_29));
 FUNC_2(&VAR_29->snl);
 VAR_29->out = VAR_26;
 while ((VAR_32 = FUNC_14(VAR_27, VAR_28, "acdeiGHhknN:prsSvVw:",
  VAR_21, ((void*)0))) != -1)
  switch (VAR_32) {
  case 'a':
   VAR_29->options = VAR_0;
   break;
  case 'c':
   VAR_29->options |= VAR_10;
   break;
  case 'd':
   VAR_29->options |= VAR_2;
   break;
  case 'e':
   VAR_29->options |= VAR_3;
   break;
  case 'i':
   VAR_29->options |= VAR_6;
   break;
  case 'G':
   VAR_29->options |= VAR_4;
   break;
  case 'h':
   VAR_29->options |= VAR_5;
   break;
  case 'k':
   VAR_29->options |= VAR_1;
   break;
  case 'n':
   VAR_29->options |= VAR_7;
   break;
  case 'N':
   FUNC_4(VAR_29, VAR_22);
   break;
  case 'p':
   VAR_29->options |= VAR_8;
   break;
  case 'r':
   VAR_29->options |= VAR_9;
   break;
  case 's':
   VAR_29->options |= VAR_11;
   break;
  case 'S':
   VAR_29->flags |= VAR_20;
   break;
  case 'v':
   VAR_29->options |= VAR_12;
   break;
  case 'V':
   (void) FUNC_16("%s (%s)\n", FUNC_0(),
       FUNC_8());
   FUNC_11(VAR_16);
   break;
  case 'w':
   if ((VAR_29->out = FUNC_13(VAR_22, "w")) == ((void*)0))
    FUNC_9(VAR_15, "%s", VAR_22);
   break;
  case '?':
  case 'H':
  default:
   FUNC_17();
  }

 VAR_27 -= VAR_23;
 VAR_28 += VAR_23;

 if (VAR_29->options == 0)
  VAR_29->options = VAR_0;
 VAR_31 = ((void*)0);
 if (VAR_29->options & VAR_11 &&
     (FUNC_1(&VAR_29->snl) || (VAR_31 = FUNC_12(VAR_29, "ARSYM")) != ((void*)0))) {
  VAR_29->flags |= VAR_18;
  if (VAR_31 != ((void*)0)) {
   FUNC_3(&VAR_29->snl, VAR_31, VAR_25, VAR_24);
   if (FUNC_1(&VAR_29->snl))
    VAR_29->flags |= VAR_17;
  }
 }
 if (VAR_27 == 0)
  FUNC_17();
 if (VAR_27 > 1)
  VAR_29->flags |= VAR_19;
 if (FUNC_7(VAR_13) == VAR_14)
  FUNC_10(VAR_15, "ELF library initialization failed: %s",
      FUNC_5(-1));

 for (VAR_33 = 0; VAR_33 < VAR_27; VAR_33++) {
  VAR_29->filename = VAR_28[VAR_33];
  VAR_29->archive = ((void*)0);
  FUNC_6(VAR_29);
 }

 FUNC_11(VAR_16);
}
