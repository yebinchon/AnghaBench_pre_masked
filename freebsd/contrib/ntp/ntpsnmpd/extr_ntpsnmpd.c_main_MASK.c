
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 () ;
 int FUNC_7 (char*) ;
 int VAR_11 ;
 scalar_t__ FUNC_8 (int,int) ;
 int FUNC_9 (int ,int ,int) ;
 int FUNC_10 (int ,int ,int ) ;
 int FUNC_11 () ;
 scalar_t__ FUNC_12 (char*,int ) ;
 int VAR_12 ;
 int FUNC_13 (int *,int,char**) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 () ;
 int FUNC_16 () ;
 int FUNC_17 (int ,char*) ;
 int FUNC_18 (char*) ;
 int VAR_13 ;
 int VAR_14 ;

int
FUNC_19 (int VAR_15, char **VAR_16) {
  int VAR_17 = 0;
  int VAR_18 = 1;

 {
  int VAR_19 = FUNC_13(&VAR_12, VAR_15, VAR_16);
  VAR_15 -= VAR_19;
  VAR_16 += VAR_19;
 }

 if (!FUNC_0(VAR_5))
  VAR_17 = 1;

 if (!FUNC_0(VAR_10))
  VAR_18 = 0;


  if (VAR_18)
    FUNC_15();
  else
    FUNC_16();


    FUNC_9(VAR_4, VAR_2, 1);


  if (VAR_17 && FUNC_8(1, !VAR_18))
      FUNC_3(1);




  VAR_9;


  FUNC_10(VAR_4,
                            VAR_3, FUNC_1( VAR_0 ));

  FUNC_5("ntpsnmpd");


  if ( FUNC_12("localhost", 0) == 0 )
  {
 FUNC_4(VAR_13, "Error: Could not connect to ntpd. Aborting.\n");
 FUNC_3(1);
  }



  FUNC_6();
  FUNC_7("ntpsnmpd");


  VAR_11 = 1;
  FUNC_14(VAR_7, VAR_14);
  FUNC_14(VAR_6, VAR_14);

  FUNC_17(VAR_1,"ntpsnmpd started.\n");


  while(VAR_11) {
 FUNC_2(1);
  }


  FUNC_11();
  FUNC_18("ntpsnmpd");
  VAR_8;

  return 0;
}
