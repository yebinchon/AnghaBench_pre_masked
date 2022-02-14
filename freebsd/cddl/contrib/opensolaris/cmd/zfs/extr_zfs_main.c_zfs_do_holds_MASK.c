
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int nvlist_t ;
struct TYPE_3__ {char const* cb_snapname; int cb_max_taglen; int cb_max_namelen; int ** cb_nvlp; scalar_t__ cb_recursive; int member_0; } ;
typedef TYPE_1__ holds_cbdata_t ;
typedef scalar_t__ boolean_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int,char**,char const*) ;
 char* FUNC_2 (char*) ;
 int VAR_7 ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int **,int ,int ) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_7 (int ,int*) ;
 int FUNC_8 (scalar_t__,scalar_t__,int ,int ,int *) ;
 int FUNC_9 (char*) ;
 int VAR_11 ;
 char* FUNC_10 (char*,char) ;
 int FUNC_11 (scalar_t__) ;
 int FUNC_12 (int,char**,int,int,int *,int *,int,int ,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_13(int VAR_12, char **VAR_13)
{
 int VAR_14 = 0;
 int VAR_15;
 int VAR_16;
 boolean_t VAR_17 = VAR_0;
 boolean_t VAR_18 = VAR_0;
 boolean_t VAR_19 = VAR_0;
 const char *VAR_20 = "d:rHp";
 nvlist_t *VAR_21;

 int VAR_22 = VAR_5;
 holds_cbdata_t VAR_23 = { 0 };

 int VAR_24 = 0;
 int VAR_25 = 0;
 int VAR_26 = 0;


 while ((VAR_15 = FUNC_1(VAR_12, VAR_13, VAR_20)) != -1) {
  switch (VAR_15) {
  case 'd':
   VAR_24 = FUNC_7(VAR_8, &VAR_26);
   VAR_19 = VAR_1;
   break;
  case 'r':
   VAR_19 = VAR_1;
   break;
  case 'H':
   VAR_17 = VAR_1;
   break;
  case 'p':
   VAR_18 = VAR_1;
   break;
  case '?':
   (void) FUNC_0(VAR_11, FUNC_2("invalid option '%c'\n"),
       VAR_10);
   FUNC_11(VAR_0);
  }
 }

 if (VAR_19) {
  VAR_22 |= VAR_4 | VAR_6;
  VAR_26 |= VAR_3;
 }

 VAR_12 -= VAR_9;
 VAR_13 += VAR_9;


 if (VAR_12 < 1)
  FUNC_11(VAR_0);

 if (FUNC_4(&VAR_21, VAR_2, 0) != 0)
  FUNC_3();

 for (VAR_16 = 0; VAR_16 < VAR_12; ++VAR_16) {
  char *VAR_27 = VAR_13[VAR_16];
  const char *VAR_28;
  const char *VAR_29 = ((void*)0);

  VAR_28 = FUNC_10(VAR_27, '@');
  if (VAR_28 != ((void*)0)) {
   VAR_29 = VAR_28 + 1;
   if (VAR_19)
    VAR_27[VAR_28 - VAR_27] = '\0';
  }

  VAR_23.cb_recursive = VAR_19;
  VAR_23.cb_snapname = VAR_29;
  VAR_23.cb_nvlp = &VAR_21;




  VAR_25 = FUNC_12(VAR_12, VAR_13, VAR_26, VAR_22, ((void*)0), ((void*)0), VAR_24,
      VAR_7, &VAR_23);
  if (VAR_25 != 0)
   ++VAR_14;
 }




 FUNC_8(VAR_17, VAR_18, VAR_23.cb_max_namelen, VAR_23.cb_max_taglen,
     VAR_21);

 if (FUNC_5(VAR_21))
  (void) FUNC_9(FUNC_2("no datasets available\n"));

 FUNC_6(VAR_21);

 return (0 != VAR_14);
}
