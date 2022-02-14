
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum ocd_target_type { ____Placeholder_ocd_target_type } ocd_target_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned char* FUNC_3 (int ,int*,int*) ;
 int FUNC_4 (char*,int) ;
 unsigned char* FUNC_5 (unsigned char,int*,int ) ;
 int FUNC_6 (unsigned char*,int) ;
 int FUNC_7 () ;
 int FUNC_8 (int ,int,int) ;
 int FUNC_9 (char*,unsigned char,unsigned char,unsigned char) ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int VAR_8 ;
 int FUNC_12 (int ) ;
 int VAR_9 ;

__attribute__((used)) static int
FUNC_13 (void *VAR_10)
{
  unsigned char VAR_11[10], *VAR_12;
  int VAR_13;
  int VAR_14;
  int VAR_15;
  int VAR_16;
  enum ocd_target_type VAR_17;

  VAR_17 = *(enum ocd_target_type *) VAR_10;

  VAR_6++;

  FUNC_12 (VAR_7);

  VAR_16 = 80;

  VAR_11[0] = VAR_3;
  VAR_11[1] = VAR_16 >> 8;
  VAR_11[2] = VAR_16 & 0xff;
  VAR_11[3] = VAR_17;
  FUNC_6 (VAR_11, 4);
  VAR_12 = FUNC_5 (VAR_11[0], &VAR_13, VAR_8);

  if (VAR_13 < 2)
    FUNC_0 ("Truncated response packet from OCD device");

  VAR_14 = VAR_12[1];
  VAR_15 = VAR_12[2];

  if (VAR_15 != 0)
    FUNC_4 ("OCD_INIT:", VAR_15);

  FUNC_3 (VAR_0, &VAR_14, &VAR_13);

  VAR_12 = FUNC_3 (VAR_2, &VAR_14, &VAR_13);

  FUNC_9 ("[Wiggler version %x.%x, capability 0x%x]\n",
       VAR_12[0], VAR_12[1], (VAR_12[2] << 16) | VAR_12[3]);



  if (!(VAR_14 & VAR_1))
    FUNC_7 ();




  VAR_11[0] = VAR_5;
  VAR_11[1] = 0;
  VAR_11[2] = 1;
  FUNC_6 (VAR_11, 3);

  VAR_12 = FUNC_5 (VAR_11[0], &VAR_13, VAR_8);

  if (VAR_13 < 2)
    FUNC_0 ("Truncated response packet from OCD device");

  VAR_14 = VAR_12[1];
  VAR_15 = VAR_12[2];

  if (VAR_15 != 0)
    FUNC_4 ("OCD_SET_CTL_FLAGS:", VAR_15);

  VAR_6--;






  FUNC_1 ();
  FUNC_11 ();
  VAR_9 = FUNC_10 ();
  FUNC_8 (FUNC_2 (), -1, 1);

  VAR_11[0] = VAR_4;
  VAR_11[1] = 3;
  FUNC_6 (VAR_11, 2);
  VAR_12 = FUNC_5 (VAR_11[0], &VAR_13, VAR_8);

  VAR_11[0] = VAR_4;
  VAR_11[1] = 2;
  FUNC_6 (VAR_11, 2);
  VAR_12 = FUNC_5 (VAR_11[0], &VAR_13, VAR_8);

  return 1;
}
