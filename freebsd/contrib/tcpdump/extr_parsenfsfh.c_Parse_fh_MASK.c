
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u_int ;
typedef int tempa ;
struct TYPE_4__ {unsigned char Minor; unsigned char Major; } ;
struct TYPE_5__ {char* Opaque_Handle; TYPE_1__ Fsid_dev; void* fsid_code; } ;
typedef TYPE_2__ my_fsid ;
 int FUNC_0 (int ,char*,...) ;
 scalar_t__ FUNC_1 (unsigned char const*,int) ;
 void* FUNC_2 (unsigned char const,unsigned char const) ;
 int FUNC_3 (unsigned char const,unsigned char const,unsigned char const) ;
 void* FUNC_4 (unsigned char const,unsigned char const,unsigned char const,unsigned char const) ;
 int FUNC_5 (char*,char const*,int) ;
 int FUNC_6 (char*,int ,int) ;
 int FUNC_7 (char*,int,char*,unsigned char const) ;
 int VAR_0 ;

void
FUNC_8(register const unsigned char *VAR_1, u_int VAR_2, my_fsid *VAR_3,
  uint32_t *VAR_4,
  const char **VAR_5,
  const char **VAR_6,
  int VAR_7)
{
 register const unsigned char *VAR_8 = VAR_1;
 uint32_t VAR_9;
 int VAR_10 = 129;
 u_int VAR_11;





 if (VAR_2 < 16/4)
  VAR_10 = 129;
 else {
  if (VAR_7) {
  }



  else if ((VAR_8[0] == 0) && (VAR_8[1] == 0)) {


      if ((VAR_8[2] == 0) && (VAR_8[3] == 0)) {


   VAR_10 = 139;
      }
      else {




   if ((VAR_8[4] != 0) && (VAR_8[5] == 0) &&
    (VAR_8[8] == 12) && (VAR_8[9] == 0)) {

       VAR_10 = 137;
   }
   else {


       if ((VAR_8[4] == 0) && (VAR_8[5] == 8) && (VAR_8[6] == 0) &&
           (VAR_8[7] == 0)) {

    VAR_10 = 135;
       }
       else {

    VAR_10 = 132;
       }
   }
      }
  }
  else {





      if ((VAR_8[2] == 0) && (VAR_8[3] == 0)) {






   if ((VAR_8[6] == 0) && (VAR_8[7] == 0)) {
       VAR_10 = 138;
   }

   else if ((VAR_2 >= 24/4) && (VAR_8[21] == 0) && (VAR_8[23] == 0)) {
       VAR_10 = 130;
   }
   else {


       if (VAR_8[9] == 10)
    VAR_10 = 131;

   }
      }
      else {




   if ((VAR_8[8] == 12) && (VAR_8[9] == 0)) {
       VAR_10 = 137;
   }
   else if ((VAR_8[8] == 0) && (VAR_8[9] == 10)) {

       if ((VAR_8[7] == 0) && (VAR_8[6] == 0) &&
    (VAR_8[5] == 0) && (VAR_8[4] == 0)) {

    VAR_10 = 136;
       }
       else if (VAR_8[7] == 2) {

    VAR_10 = 131;
       }
       else {






    VAR_10 = 131;
       }
          }
   else {
       if (FUNC_1(VAR_8, VAR_2)) {
    VAR_10 = 128;
       }
       else {
    VAR_10 = 129;
       }
   }
      }
  }
 }



 switch (VAR_10) {
 case 139:
     VAR_3->Fsid_dev.Minor = VAR_8[7];
     VAR_3->Fsid_dev.Major = VAR_8[6];
     VAR_3->fsid_code = 0;

     *VAR_4 = FUNC_4(VAR_8[12], VAR_8[13], VAR_8[14], VAR_8[15]);

     if (VAR_5)
  *VAR_5 = "Auspex";
     break;

 case 138:
     VAR_3->Fsid_dev.Minor = VAR_8[0];
     VAR_3->Fsid_dev.Major = VAR_8[1];
     VAR_3->fsid_code = 0;

     *VAR_4 = FUNC_4(VAR_8[15], VAR_8[14], VAR_8[13], VAR_8[12]);

     if (VAR_5)
  *VAR_5 = "BSD 4.4";
     break;

 case 137:
     VAR_3->fsid_code = FUNC_4(VAR_8[7], VAR_8[6], VAR_8[5], VAR_8[4]);


     VAR_9 = FUNC_4(VAR_8[3], VAR_8[2], VAR_8[1], VAR_8[0]);
     VAR_3->Fsid_dev.Minor = VAR_9 & 0xFFFFF;
     VAR_3->Fsid_dev.Major = (VAR_9>>20) & 0xFFF;

     *VAR_4 = FUNC_4(VAR_8[15], VAR_8[14], VAR_8[13], VAR_8[12]);
     if (VAR_5)
  *VAR_5 = "OSF";
     break;

 case 135:
     VAR_3->Fsid_dev.Minor = VAR_8[3];
     VAR_3->Fsid_dev.Major = VAR_8[2];
     VAR_3->fsid_code = 0;

     *VAR_4 = FUNC_4(VAR_8[8], VAR_8[9], VAR_8[10], VAR_8[11]);

     if (VAR_5)
  *VAR_5 = "IRIX4";
     break;

 case 134:
     VAR_3->Fsid_dev.Minor = FUNC_2(VAR_8[2], VAR_8[3]);
     VAR_3->Fsid_dev.Major = FUNC_2(VAR_8[0], VAR_8[1]);
     VAR_3->fsid_code = FUNC_4(VAR_8[4], VAR_8[5], VAR_8[6], VAR_8[7]);

     *VAR_4 = FUNC_4(VAR_8[12], VAR_8[13], VAR_8[14], VAR_8[15]);

     if (VAR_5)
  *VAR_5 = "IRIX5";
     break;
 case 132:
     VAR_3->Fsid_dev.Minor = VAR_8[3];
     VAR_3->Fsid_dev.Major = VAR_8[2];
     VAR_3->fsid_code = FUNC_4(VAR_8[4], VAR_8[5], VAR_8[6], VAR_8[7]);

     *VAR_4 = FUNC_4(VAR_8[12], VAR_8[13], VAR_8[14], VAR_8[15]);

     if (VAR_5)
  *VAR_5 = "SUNOS4";
     break;

 case 131:
     VAR_9 = FUNC_2(VAR_8[0], VAR_8[1]);
     VAR_3->Fsid_dev.Major = (VAR_9>>2) & 0x3FFF;
     VAR_9 = FUNC_3(VAR_8[1], VAR_8[2], VAR_8[3]);
     VAR_3->Fsid_dev.Minor = VAR_9 & 0x3FFFF;
     VAR_3->fsid_code = FUNC_4(VAR_8[4], VAR_8[5], VAR_8[6], VAR_8[7]);

     *VAR_4 = FUNC_4(VAR_8[12], VAR_8[13], VAR_8[14], VAR_8[15]);

     if (VAR_5)
  *VAR_5 = "SUNOS5";
     break;

 case 130:
     VAR_3->fsid_code = 0;
     VAR_3->Fsid_dev.Minor = VAR_8[0];
     VAR_3->Fsid_dev.Major = VAR_8[1];

     VAR_9 = FUNC_4(VAR_8[7], VAR_8[6], VAR_8[5], VAR_8[4]);
     *VAR_4 = VAR_9;
     if (VAR_5)
  *VAR_5 = "Ultrix";
     break;

 case 128:

     if (sizeof(*VAR_3) >= 14) {
  if (sizeof(*VAR_3) > 14)
      FUNC_6((char *)VAR_3, 0, sizeof(*VAR_3));

  FUNC_5((char *)VAR_3, (const char *)VAR_1, 14);
     }
     else {
  uint32_t VAR_12[4];

  FUNC_6((char *)VAR_12, 0, sizeof(VAR_12));
  FUNC_5((char *)VAR_12, (const char *)VAR_1, 14);
  VAR_3->Fsid_dev.Minor = VAR_12[0] + (VAR_12[1]<<1);
  VAR_3->Fsid_dev.Major = VAR_12[2] + (VAR_12[3]<<1);
  VAR_3->fsid_code = 0;
     }


     *VAR_4 = FUNC_4(VAR_8[26], VAR_8[27], VAR_8[23], VAR_8[22]);


     if (VAR_6)
  *VAR_6 = (const char *)&(VAR_8[1]);

     if (VAR_5)
  *VAR_5 = "VMS";
     break;

 case 140:
     VAR_3->Fsid_dev.Minor = FUNC_2(VAR_8[2], VAR_8[3]);
     VAR_3->Fsid_dev.Major = FUNC_2(VAR_8[0], VAR_8[1]);
     VAR_3->fsid_code = FUNC_4(VAR_8[4], VAR_8[5], VAR_8[6], VAR_8[7]);

     *VAR_4 = FUNC_4(VAR_8[12], VAR_8[13], VAR_8[14], VAR_8[15]);

     if (VAR_5)
  *VAR_5 = "AIX32";
     break;

 case 136:
     VAR_3->Fsid_dev.Major = VAR_8[0];
     VAR_9 = FUNC_3(VAR_8[1], VAR_8[2], VAR_8[3]);
     VAR_3->Fsid_dev.Minor = VAR_9;
     VAR_3->fsid_code = FUNC_4(VAR_8[4], VAR_8[5], VAR_8[6], VAR_8[7]);

     *VAR_4 = FUNC_4(VAR_8[12], VAR_8[13], VAR_8[14], VAR_8[15]);

     if (VAR_5)
  *VAR_5 = "HPUX9";
     break;

 case 129:







     for (VAR_11 = 0; VAR_11 < VAR_2*4 && VAR_11*2 < sizeof(VAR_3->Opaque_Handle) - 1; VAR_11++)
      (void)FUNC_7(&(VAR_3->Opaque_Handle[VAR_11*2]), 3, "%.2X", VAR_8[VAR_11]);
     VAR_3->Opaque_Handle[VAR_11*2] = '\0';


     VAR_3->fsid_code = 0;
     VAR_3->Fsid_dev.Minor = 257;
     VAR_3->Fsid_dev.Major = 257;
     *VAR_4 = 1;


     if (VAR_6)
  *VAR_6 = "Unknown";

     if (VAR_5)
  *VAR_5 = "Unknown";
     break;

 }
}
