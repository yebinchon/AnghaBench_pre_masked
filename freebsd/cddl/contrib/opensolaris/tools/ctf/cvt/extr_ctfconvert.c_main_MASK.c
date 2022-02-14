
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int td_iihash; } ;
typedef TYPE_1__ tdata_t ;


 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (char*,int ) ;
 void* FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 void* VAR_9 ;
 void* VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_1__*,char*,int) ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (char*) ;
 int FUNC_7 (int,char**,char*) ;
 int VAR_12 ;
 int FUNC_8 (int ) ;
 char* VAR_13 ;
 int FUNC_9 (TYPE_1__*,TYPE_1__*,int *,int) ;
 char* FUNC_10 (char*,char*) ;
 char* VAR_14 ;
 int VAR_15 ;
 char* VAR_16 ;
 int VAR_17 ;
 scalar_t__ FUNC_11 (char*,char*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (int ,int ) ;
 scalar_t__ FUNC_16 (char*,char*) ;
 int FUNC_17 (TYPE_1__*,char const*,int ) ;
 TYPE_1__* FUNC_18 () ;
 int FUNC_19 (char*,char*) ;
 int VAR_18 ;
 int FUNC_20 () ;
 int FUNC_21 (TYPE_1__*,char*,char*,int) ;

int
FUNC_22(int VAR_19, char **VAR_20)
{
 tdata_t *VAR_21, *VAR_22;
 const char *VAR_23 = ((void*)0);
 int VAR_24 = 0;
 int VAR_25 = 0;
 int VAR_26 = 0;
 int VAR_27;







 VAR_17 = FUNC_2(VAR_20[0]);

 if (FUNC_6("CTFCONVERT_DEBUG_LEVEL"))
  VAR_9 = FUNC_1(FUNC_6("CTFCONVERT_DEBUG_LEVEL"));
 if (FUNC_6("CTFCONVERT_DEBUG_PARSE"))
  VAR_10 = FUNC_1(FUNC_6("CTFCONVERT_DEBUG_PARSE"));

 while ((VAR_27 = FUNC_7(VAR_19, VAR_20, ":l:L:o:givs")) != VAR_4) {
  switch (VAR_27) {
  case 'l':
   VAR_23 = VAR_14;
   break;
  case 'L':
   if ((VAR_23 = FUNC_6(VAR_14)) == ((void*)0))
    VAR_23 = VAR_0;
   break;
  case 'o':
   VAR_16 = VAR_14;
   break;
  case 's':
   VAR_11 = VAR_3;
   break;
  case 'i':
   VAR_25 = 1;
   break;
  case 'g':
   VAR_26 = VAR_1;
   break;
  case 'v':
   VAR_24 = 1;
   break;
  default:
   FUNC_20();
   FUNC_3(2);
  }
 }

 if (FUNC_6("STRIPSTABS_KEEP_STABS") != ((void*)0))
  VAR_26 = VAR_1;

 if (VAR_19 - VAR_15 != 1 || VAR_23 == ((void*)0)) {
  FUNC_20();
  FUNC_3(2);
 }

 VAR_13 = VAR_20[VAR_15];
 if (FUNC_0(VAR_13, VAR_5) != 0)
  FUNC_19("Can't access %s", VAR_13);
 FUNC_12(VAR_18);






 FUNC_14(VAR_6, VAR_12);
 FUNC_14(VAR_7, VAR_12);
 FUNC_14(VAR_8, VAR_12);


 VAR_21 = FUNC_18();

 if (!FUNC_4(VAR_21, VAR_13, VAR_25))
  FUNC_19("%s doesn't have type data to convert\n", VAR_13);

 if (VAR_24)
  FUNC_8(VAR_21->td_iihash);

 VAR_22 = FUNC_18();
 FUNC_9(VAR_21, VAR_22, ((void*)0), 1);

 FUNC_17(VAR_22, VAR_23, VAR_2);






 if (VAR_16 && FUNC_16(VAR_13, VAR_16) != 0) {
  FUNC_21(VAR_22, VAR_13, VAR_16, VAR_11 | VAR_26);
 } else {
  char *VAR_28 = FUNC_10(VAR_13, ".ctf");
  FUNC_21(VAR_22, VAR_13, VAR_28, VAR_11 | VAR_26);
  if (FUNC_11(VAR_28, VAR_13) != 0)
   FUNC_19("Couldn't rename temp file %s", VAR_28);
  FUNC_5(VAR_28);
 }

 return (0);
}
