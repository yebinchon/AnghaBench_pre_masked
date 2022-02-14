
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int * VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,char**,char*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int * VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int *) ;
 int VAR_16 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,char*) ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_6 (int *,int *,int ) ;
 int FUNC_7 (int ,int ) ;
 int VAR_19 ;
 int FUNC_8 () ;
 int VAR_20 ;

int
FUNC_9(int VAR_21, char **VAR_22)
{
 int VAR_23;
 int VAR_24 = 0;

 FUNC_5(VAR_1, "");
 FUNC_4(VAR_18,0);
 FUNC_4(VAR_17,0);

 while ((VAR_23 = FUNC_1(VAR_21, VAR_22, "AabB:def:hiNnoqtTwWxX")) != -1) {
  switch (VAR_23) {
  case 'A':

   VAR_5 = VAR_13 = 1;
   break;
  case 'a':
   VAR_5 = 1;
   break;
  case 'b':
   VAR_6 = 1;
   break;
  case 'B':
   VAR_0 = FUNC_6(VAR_14, ((void*)0), 0);
   break;
  case 'd':
   VAR_8 = 1;
   break;
  case 'e':
   VAR_9 = 1;
   break;
  case 'f':
   VAR_7 = VAR_14;
   break;
  case 'h':
   VAR_10 = 1;
   break;
  case 'i':
   VAR_11 = 1;
   break;
  case 'N':
   VAR_2 = 1;
   break;
  case 'n':
   VAR_12 = 1;
   break;
  case 'o':
   VAR_13 = 1;
   break;
  case 'q':
   VAR_16 = 1;
   break;
  case 't':
   VAR_19 = 1;
   break;
  case 'T':
   VAR_3 = 1;
   break;
  case 'w':


   break;
  case 'W':
   VAR_4 = 1;
   break;
  case 'X':

   VAR_5 = VAR_20 = 1;
   break;
  case 'x':
   VAR_20 = 1;
   break;
  default:
   FUNC_8();
  }
 }
 VAR_21 -= VAR_15;
 VAR_22 += VAR_15;

 if (VAR_2 && VAR_12)
  FUNC_8();
 if (VAR_5 && VAR_21 == 0)
  FUNC_0(FUNC_7(0, 0));
 if (VAR_21 == 0 && VAR_7 == ((void*)0))
  FUNC_8();

 VAR_24 = 0;
 if (VAR_7 != ((void*)0))
  VAR_24 += FUNC_3(VAR_7);

 while (VAR_21-- > 0)
  VAR_24 += FUNC_2(*VAR_22++, 0);

 return (VAR_24);
}
