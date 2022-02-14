
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v ;
typedef int WSADATA ;


 char* VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int,int *) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 () ;
 int FUNC_6 (unsigned char*,int) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (int ,int *) ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int VAR_5 ;
 scalar_t__ FUNC_13 (char*,char*,char*,char const*,char*) ;
 int FUNC_14 (char*,int ) ;
 int FUNC_15 (int,char**,char*) ;
 scalar_t__ FUNC_16 () ;
 int FUNC_17 (char const*,char*,int,int,char**) ;
 int FUNC_18 (char*) ;
 int FUNC_19 (int *,int ,int *) ;
 int FUNC_20 (char*) ;
 int FUNC_21 (unsigned char*,unsigned int*,int) ;
 void* VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_22 (char const*) ;
 scalar_t__ FUNC_23 (char*,char*) ;
 int FUNC_24 (int ) ;
 scalar_t__ FUNC_25 (int *) ;
 int FUNC_26 () ;
 char* FUNC_27 (char*,char*) ;
 int FUNC_28 (int) ;

int FUNC_29(int VAR_8, char* VAR_9[])
{
 int VAR_10, VAR_11;
 int VAR_12 = 0;
 const char* VAR_13 = VAR_0;
 char* VAR_14 = ((void*)0);
 FUNC_18("unbound-control");
 FUNC_19(((void*)0), 0, ((void*)0));
 FUNC_11();






 while( (VAR_10=FUNC_15(VAR_8, VAR_9, "c:s:qh")) != -1) {
  switch(VAR_10) {
  case 'c':
   VAR_13 = VAR_6;
   break;
  case 's':
   VAR_14 = VAR_6;
   break;
  case 'q':
   VAR_12 = 1;
   break;
  case '?':
  case 'h':
  default:
   FUNC_26();
  }
 }
 VAR_8 -= VAR_7;
 VAR_9 += VAR_7;
 if(VAR_8 == 0)
  FUNC_26();
 if(VAR_8 >= 1 && FUNC_23(VAR_9[0], "start")==0) {
  if(FUNC_13("unbound", "unbound", "-c", VAR_13,
   (char*)((void*)0)) < 0) {
   FUNC_14("could not exec unbound: %s",
    FUNC_24(VAR_5));
  }
 }
 if(VAR_8 >= 1 && FUNC_23(VAR_9[0], "stats_shm")==0) {
  FUNC_22(VAR_13);
  return 0;
 }
 FUNC_0();


 FUNC_5();






 (void)FUNC_8();




 if(!FUNC_7()) {

  unsigned char VAR_15[256];
  unsigned int VAR_16=(unsigned)FUNC_25(((void*)0)) ^ (unsigned)FUNC_16();
  unsigned int VAR_17 = VAR_16;
  size_t VAR_18;
  for(VAR_18=0; VAR_18<256/sizeof(VAR_17); VAR_18++) {
   FUNC_21(VAR_15+VAR_18*sizeof(VAR_17), &VAR_17, sizeof(VAR_17));
   VAR_17 = VAR_17*VAR_16 + (unsigned int)VAR_18;
  }
  FUNC_6(VAR_15, 256);
  FUNC_20("no entropy, seeding openssl PRNG with time\n");
 }

 VAR_11 = FUNC_17(VAR_13, VAR_14, VAR_12, VAR_8, VAR_9);




 FUNC_12();
 return VAR_11;
}
