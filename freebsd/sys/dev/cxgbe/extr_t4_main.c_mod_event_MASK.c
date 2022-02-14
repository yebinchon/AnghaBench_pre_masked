
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int module_t ;


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


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int ,int ,int ) ;
 int FUNC_14 () ;
 int FUNC_15 () ;
 int FUNC_16 () ;
 int VAR_21 ;
 int FUNC_17 () ;
 int FUNC_18 () ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_19 () ;
 int FUNC_20 (char*,int ) ;

__attribute__((used)) static int
FUNC_21(module_t VAR_25, int VAR_26, void *VAR_27)
{
 int VAR_28 = 0;
 static int VAR_29 = 0;

 switch (VAR_26) {
 case 129:
  FUNC_8(&VAR_14);
  if (VAR_29++ == 0) {
   FUNC_15();
   FUNC_13(VAR_5,
       VAR_16, VAR_2);
   FUNC_13(VAR_4,
       VAR_10, VAR_2);
   FUNC_13(VAR_1,
       VAR_17, VAR_3);
   FUNC_13(VAR_5,
       VAR_18, VAR_3);
   FUNC_13(VAR_0,
       VAR_15, VAR_3);
   FUNC_12(VAR_8, VAR_21);
   FUNC_12(VAR_7, VAR_24);
   FUNC_12(VAR_6,
       VAR_11);
   FUNC_5(&VAR_20, "T4/T5 adapters");
   FUNC_1(&VAR_19);
   FUNC_2(&VAR_12, 1);







   FUNC_17();
   FUNC_19();
  }
  FUNC_9(&VAR_14);
  break;

 case 128:
  FUNC_8(&VAR_14);
  if (--VAR_29 == 0) {
   int VAR_30;

   FUNC_6(&VAR_20);
   if (!FUNC_0(&VAR_19)) {
    VAR_28 = VAR_9;
    FUNC_7(&VAR_20);
    goto done_unload;
   }
   VAR_30 = 0;
   while (VAR_30++ < 5 && FUNC_14() != 0) {
    FUNC_20("%ju clusters with custom free routine "
        "still is use.\n", FUNC_14());
    FUNC_3("t4unload", 2 * VAR_13);
   }



   FUNC_7(&VAR_20);

   if (FUNC_14() == 0) {
    FUNC_18();






    FUNC_4(&VAR_20);
    FUNC_16();
    VAR_29 = 0;
   } else {
    VAR_28 = VAR_9;
    VAR_29++;
   }
  }
done_unload:
  FUNC_9(&VAR_14);
  break;
 }

 return (VAR_28);
}
