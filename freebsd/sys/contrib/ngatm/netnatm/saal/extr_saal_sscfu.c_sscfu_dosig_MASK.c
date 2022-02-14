
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sscfu {size_t state; int aarg; } ;
struct SSCFU_MBUF_T {int dummy; } ;
typedef enum saal_sig { ____Placeholder_saal_sig } saal_sig ;


 int FUNC_0 (struct sscfu*,int,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct SSCFU_MBUF_T*) ;
 int VAR_0 ;
 int VAR_1 ;



 int FUNC_3 (struct sscfu*,int ,struct SSCFU_MBUF_T*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (struct sscfu*,int ,struct sscfu*) ;
 int FUNC_5 (struct sscfu*,int const) ;
 int * VAR_7 ;
 int * VAR_8 ;

__attribute__((used)) static void
FUNC_6(struct sscfu *VAR_9, enum saal_sig VAR_10, struct SSCFU_MBUF_T *VAR_11)
{
 FUNC_4(VAR_9, VAR_1, (VAR_9, VAR_9->aarg,
     "executing signal %s(%s)",
     VAR_7[VAR_10], VAR_8[VAR_9->state]));

 switch (VAR_10) {

   case 138:

  switch (VAR_9->state) {

    case 129:
   FUNC_5(VAR_9, 132);
   FUNC_3(VAR_9, VAR_3, VAR_11, 1);
   break;

    case 132:
   if (VAR_11)
    FUNC_2(VAR_11);
   goto badsig;

    case 131:
   FUNC_5(VAR_9, 132);
   FUNC_3(VAR_9, VAR_3, VAR_11, 1);
   break;

    case 130:
   FUNC_5(VAR_9, 128);
   FUNC_3(VAR_9, VAR_5, VAR_11, 0);
   break;

    case 128:
   if (VAR_11)
    FUNC_2(VAR_11);
   goto badsig;
  }
  break;

   case 135:

  switch(VAR_9->state) {

    case 129:
   if (VAR_11)
    FUNC_2(VAR_11);
   FUNC_0(VAR_9, 137, ((void*)0));
   break;

    case 132:
   FUNC_5(VAR_9, 131);
   FUNC_3(VAR_9, VAR_4, VAR_11, 0);
   break;

    case 131:
   if (VAR_11)
    FUNC_2(VAR_11);
   goto badsig;

    case 130:
   FUNC_5(VAR_9, 131);
   FUNC_3(VAR_9, VAR_4, VAR_11, 0);
   break;

    case 128:
   FUNC_5(VAR_9, 131);
   FUNC_3(VAR_9, VAR_4, VAR_11, 0);
   break;
  }
  break;

   case 141:

  switch (VAR_9->state) {

    case 129:
    case 132:
    case 131:
   FUNC_2(VAR_11);
   goto badsig;

    case 130:
   FUNC_3(VAR_9, VAR_2, VAR_11, 0);
   break;

    case 128:
   FUNC_2(VAR_11);
   goto badsig;
  }
  break;

   case 133:

  FUNC_3(VAR_9, VAR_6, VAR_11, 0);
  break;

   case 139:
   case 140:
   case 137:
   case 136:
   case 142:
   case 134:
  FUNC_1(0);
  break;
 }
 return;

  badsig:
 FUNC_4(VAR_9, VAR_0, (VAR_9, VAR_9->aarg,
     "bad signal %s in state %s", VAR_7[VAR_10],
     VAR_8[VAR_9->state]));
}
