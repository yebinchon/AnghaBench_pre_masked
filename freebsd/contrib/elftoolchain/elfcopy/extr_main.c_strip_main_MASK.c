
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sec_action {int remove; } ;
struct elfcopy {int flags; scalar_t__ strip; } ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct elfcopy*,char*,int *,int ) ;
 int FUNC_1 (struct elfcopy*,char*,char const*) ;
 int FUNC_2 (int,char**,char*,int ,int *) ;
 struct sec_action* FUNC_3 (struct elfcopy*,char*,int) ;
 int * FUNC_4 (struct elfcopy*,int *,int ) ;
 char* VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_5 () ;
 int FUNC_6 (struct elfcopy*,char*) ;
 int VAR_13 ;
 int FUNC_7 () ;

__attribute__((used)) static void
FUNC_8(struct elfcopy *VAR_14, int VAR_15, char **VAR_16)
{
 struct sec_action *VAR_17;
 const char *VAR_18;
 int VAR_19;
 int VAR_20;

 VAR_18 = ((void*)0);
 while ((VAR_19 = FUNC_2(VAR_15, VAR_16, "hI:K:N:o:O:pR:sSdgVxXw",
     VAR_13, ((void*)0))) != -1) {
  switch(VAR_19) {
  case 'R':
   VAR_17 = FUNC_3(VAR_14, VAR_11, 1);
   VAR_17->remove = 1;
   VAR_14->flags |= VAR_3;
   break;
  case 's':
   VAR_14->strip = VAR_4;
   break;
  case 'S':
  case 'g':
  case 'd':
   VAR_14->strip = VAR_5;
   break;
  case 'I':

   break;
  case 'K':
   FUNC_0(VAR_14, VAR_11, ((void*)0), VAR_8);
   break;
  case 'N':
   FUNC_0(VAR_14, VAR_11, ((void*)0), VAR_9);
   break;
  case 'o':
   VAR_18 = VAR_11;
   break;
  case 'O':
   FUNC_6(VAR_14, VAR_11);
   break;
  case 'p':
   VAR_14->flags |= VAR_2;
   break;
  case 'V':
   FUNC_5();
   break;
  case 'w':
   VAR_14->flags |= VAR_10;
   break;
  case 'x':
   VAR_14->flags |= VAR_1;
   break;
  case 'X':
   VAR_14->flags |= VAR_0;
   break;
  case 129:
   VAR_14->strip = VAR_6;
   break;
  case 128:
   VAR_14->strip = VAR_7;
   break;
  case 'h':
  default:
   FUNC_7();
  }
 }

 VAR_15 -= VAR_12;
 VAR_16 += VAR_12;

 if (VAR_14->strip == 0 &&
     ((VAR_14->flags & VAR_1) == 0) &&
     ((VAR_14->flags & VAR_0) == 0) &&
     FUNC_4(VAR_14, ((void*)0), VAR_9) == ((void*)0))
  VAR_14->strip = VAR_4;
 if (VAR_15 == 0)
  FUNC_7();




 if (VAR_18 != ((void*)0) && VAR_15 != 1)
  FUNC_7();

 for (VAR_20 = 0; VAR_20 < VAR_15; VAR_20++)
  FUNC_1(VAR_14, VAR_16[VAR_20], VAR_18);
}
