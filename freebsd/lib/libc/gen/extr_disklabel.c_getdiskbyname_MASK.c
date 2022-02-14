
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct partition {long p_size; long p_offset; int p_fsize; long p_frag; int p_fstype; } ;
struct disklabel {char* d_typename; int d_secsize; int d_ntracks; int d_nsectors; int d_ncylinders; int d_type; int d_secpercyl; int d_secperunit; int d_rpm; int d_interleave; int d_trackskew; int d_cylskew; int d_headswitch; int d_trkseek; int d_bbsize; int d_sbsize; char d_npartitions; int* d_drivedata; void* d_magic2; void* d_magic; struct partition* d_partitions; int d_flags; } ;
typedef int disk ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 char VAR_6 ;
 char VAR_7 ;
 char* VAR_8 ;
 int FUNC_0 (char*,int) ;
 int * FUNC_1 (char*,char*,char) ;
 scalar_t__ FUNC_2 (char**,char**,char*) ;
 scalar_t__ FUNC_3 (char*,char*,long*) ;
 scalar_t__ FUNC_4 (char*,char*,char**) ;
 int VAR_9 ;
 int FUNC_5 (char*) ;
 int VAR_10 ;
 int FUNC_6 (int,char*,int) ;
 void* FUNC_7 (char*,int ) ;
 scalar_t__ FUNC_8 (char*,char*) ;
 int FUNC_9 (char*,char*) ;

struct disklabel *
FUNC_10(const char *VAR_11)
{
 static struct disklabel VAR_12;
 struct disklabel *VAR_13 = &VAR_12;
 struct partition *VAR_14;
 char *VAR_15;
 char *VAR_16[2] = { VAR_8, 0 };
 char *VAR_17, *VAR_18;
 char VAR_19, VAR_20, VAR_21[3], VAR_22[3],
  VAR_23[3], VAR_24[3], VAR_25[3];
 u_int32_t *VAR_26;

 if (FUNC_2(&VAR_15, VAR_16, (char *) VAR_11) < 0)
  return ((void*)0);

 FUNC_0((char *)&VAR_12, sizeof(VAR_12));



 VAR_18 = VAR_13->d_typename;
 VAR_17 = VAR_15;
 while (VAR_18 < VAR_13->d_typename + sizeof(VAR_13->d_typename) - 1 &&
     (*VAR_18 = *VAR_17) && *VAR_18 != '|' && *VAR_18 != ':')
  VAR_18++, VAR_17++;
 *VAR_18 = '\0';

 if (FUNC_4(VAR_15, "ty", &VAR_18) > 0) {
  if (FUNC_8(VAR_18, "removable") == 0)
   VAR_13->d_flags |= VAR_5;
  else if (VAR_18 && FUNC_8(VAR_18, "simulated") == 0)
   VAR_13->d_flags |= VAR_4;
  FUNC_5(VAR_18);
 }
 if (FUNC_1(VAR_15, "sf", ':') != ((void*)0))
  VAR_13->d_flags |= VAR_3;




 { long VAR_27; (VAR_13->d_secsize) = (FUNC_3(VAR_15, "se", &VAR_27) == -1) ? (VAR_1) : VAR_27; };
 { long VAR_28; (VAR_13->d_ntracks) = (FUNC_3(VAR_15, "nt", &VAR_28) == -1) ? (0) : VAR_28; };
 { long VAR_29; (VAR_13->d_nsectors) = (FUNC_3(VAR_15, "ns", &VAR_29) == -1) ? (0) : VAR_29; };
 { long VAR_30; (VAR_13->d_ncylinders) = (FUNC_3(VAR_15, "nc", &VAR_30) == -1) ? (0) : VAR_30; };

 if (FUNC_4(VAR_15, "dt", &VAR_18) > 0) {
  VAR_13->d_type = FUNC_7(VAR_18, VAR_9);
  FUNC_5(VAR_18);
 } else
  { long VAR_31; (VAR_13->d_type) = (FUNC_3(VAR_15, "dt", &VAR_31) == -1) ? (0) : VAR_31; };
 { long VAR_32; (VAR_13->d_secpercyl) = (FUNC_3(VAR_15, "sc", &VAR_32) == -1) ? (VAR_13->d_nsectors * VAR_13->d_ntracks) : VAR_32; };
 { long VAR_33; (VAR_13->d_secperunit) = (FUNC_3(VAR_15, "su", &VAR_33) == -1) ? (VAR_13->d_secpercyl * VAR_13->d_ncylinders) : VAR_33; };
 { long VAR_34; (VAR_13->d_rpm) = (FUNC_3(VAR_15, "rm", &VAR_34) == -1) ? (3600) : VAR_34; };
 { long VAR_35; (VAR_13->d_interleave) = (FUNC_3(VAR_15, "il", &VAR_35) == -1) ? (1) : VAR_35; };
 { long VAR_36; (VAR_13->d_trackskew) = (FUNC_3(VAR_15, "sk", &VAR_36) == -1) ? (0) : VAR_36; };
 { long VAR_37; (VAR_13->d_cylskew) = (FUNC_3(VAR_15, "cs", &VAR_37) == -1) ? (0) : VAR_37; };
 { long VAR_38; (VAR_13->d_headswitch) = (FUNC_3(VAR_15, "hs", &VAR_38) == -1) ? (0) : VAR_38; };
 { long VAR_39; (VAR_13->d_trkseek) = (FUNC_3(VAR_15, "ts", &VAR_39) == -1) ? (0) : VAR_39; };
 { long VAR_40; (VAR_13->d_bbsize) = (FUNC_3(VAR_15, "bs", &VAR_40) == -1) ? (VAR_0) : VAR_40; };
 { long VAR_41; (VAR_13->d_sbsize) = (FUNC_3(VAR_15, "sb", &VAR_41) == -1) ? (0) : VAR_41; };
 FUNC_9(VAR_21, "px");
 FUNC_9(VAR_22, "bx");
 FUNC_9(VAR_23, "fx");
 FUNC_9(VAR_24, "ox");
 FUNC_9(VAR_25, "tx");
 VAR_20 = 'a' - 1;
 VAR_14 = &VAR_13->d_partitions[0];
 for (VAR_19 = 'a'; VAR_19 < 'a' + VAR_6; VAR_19++, VAR_14++) {
  long VAR_42;
  VAR_21[1] = VAR_22[1] = VAR_23[1] = VAR_24[1] = VAR_25[1] = VAR_19;
  if (FUNC_3(VAR_15, VAR_21, &VAR_42) == -1)
   VAR_14->p_size = 0;
  else {
   VAR_14->p_size = VAR_42;
   FUNC_3(VAR_15, VAR_24, &VAR_42);
   VAR_14->p_offset = VAR_42;
   { long VAR_43; (VAR_14->p_fsize) = (FUNC_3(VAR_15, VAR_23, &VAR_43) == -1) ? (0) : VAR_43; };
   if (VAR_14->p_fsize) {
    long VAR_44;

    if (FUNC_3(VAR_15, VAR_22, &VAR_44) == 0)
     VAR_14->p_frag = VAR_44 / VAR_14->p_fsize;
    else
     VAR_14->p_frag = 8;
   }
   { long VAR_45; (VAR_14->p_fstype) = (FUNC_3(VAR_15, VAR_25, &VAR_45) == -1) ? (0) : VAR_45; };
   if (VAR_14->p_fstype == 0)
    if (FUNC_4(VAR_15, VAR_25, &VAR_18) >= 0) {
     VAR_14->p_fstype = FUNC_7(VAR_18, VAR_10);
     FUNC_5(VAR_18);
    }
   VAR_20 = VAR_19;
  }
 }
 VAR_13->d_npartitions = VAR_20 + 1 - 'a';
 (void)FUNC_9(VAR_21, "dx");
 VAR_26 = VAR_13->d_drivedata;
 for (VAR_19 = '0'; VAR_19 < '0' + VAR_7; VAR_19++, VAR_26++) {
  VAR_21[1] = VAR_19;
  { long VAR_46; (*VAR_26) = (FUNC_3(VAR_15, VAR_21, &VAR_46) == -1) ? (0) : VAR_46; };
 }
 VAR_13->d_magic = VAR_2;
 VAR_13->d_magic2 = VAR_2;
 FUNC_5(VAR_15);
 return (VAR_13);
}
