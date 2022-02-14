
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int u_char ;
struct disklabel {int d_type; int d_subtype; int d_sparespertrack; int d_sparespercyl; int d_rpm; int d_interleave; int d_trackskew; int d_cylskew; int d_npartitions; int * d_partitions; int d_sbsize; int d_bbsize; int d_magic2; int * d_spare; int * d_drivedata; int d_flags; int d_trkseek; int d_headswitch; int d_acylinders; int d_secperunit; int d_secpercyl; int d_ncylinders; int d_ntracks; int d_nsectors; int d_secsize; int d_packname; int d_typename; int d_magic; } ;


 int FUNC_0 (int ,int *,int) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int ) ;

void
FUNC_5(u_char *VAR_0, struct disklabel *VAR_1)
{
 int VAR_2;
 u_char *VAR_3, *VAR_4;
 uint16_t VAR_5;

 FUNC_4(VAR_0 + 0, VAR_1->d_magic);
 FUNC_3(VAR_0 + 4, VAR_1->d_type);
 FUNC_3(VAR_0 + 6, VAR_1->d_subtype);
 FUNC_0(VAR_1->d_typename, VAR_0 + 8, 16);
 FUNC_0(VAR_1->d_packname, VAR_0 + 24, 16);
 FUNC_4(VAR_0 + 40, VAR_1->d_secsize);
 FUNC_4(VAR_0 + 44, VAR_1->d_nsectors);
 FUNC_4(VAR_0 + 48, VAR_1->d_ntracks);
 FUNC_4(VAR_0 + 52, VAR_1->d_ncylinders);
 FUNC_4(VAR_0 + 56, VAR_1->d_secpercyl);
 FUNC_4(VAR_0 + 60, VAR_1->d_secperunit);
 FUNC_3(VAR_0 + 64, VAR_1->d_sparespertrack);
 FUNC_3(VAR_0 + 66, VAR_1->d_sparespercyl);
 FUNC_4(VAR_0 + 68, VAR_1->d_acylinders);
 FUNC_3(VAR_0 + 72, VAR_1->d_rpm);
 FUNC_3(VAR_0 + 74, VAR_1->d_interleave);
 FUNC_3(VAR_0 + 76, VAR_1->d_trackskew);
 FUNC_3(VAR_0 + 78, VAR_1->d_cylskew);
 FUNC_4(VAR_0 + 80, VAR_1->d_headswitch);
 FUNC_4(VAR_0 + 84, VAR_1->d_trkseek);
 FUNC_4(VAR_0 + 88, VAR_1->d_flags);
 FUNC_4(VAR_0 + 92, VAR_1->d_drivedata[0]);
 FUNC_4(VAR_0 + 96, VAR_1->d_drivedata[1]);
 FUNC_4(VAR_0 + 100, VAR_1->d_drivedata[2]);
 FUNC_4(VAR_0 + 104, VAR_1->d_drivedata[3]);
 FUNC_4(VAR_0 + 108, VAR_1->d_drivedata[4]);
 FUNC_4(VAR_0 + 112, VAR_1->d_spare[0]);
 FUNC_4(VAR_0 + 116, VAR_1->d_spare[1]);
 FUNC_4(VAR_0 + 120, VAR_1->d_spare[2]);
 FUNC_4(VAR_0 + 124, VAR_1->d_spare[3]);
 FUNC_4(VAR_0 + 128, VAR_1->d_spare[4]);
 FUNC_4(VAR_0 + 132, VAR_1->d_magic2);
 FUNC_3(VAR_0 + 136, 0);
 FUNC_3(VAR_0 + 138, VAR_1->d_npartitions);
 FUNC_4(VAR_0 + 140, VAR_1->d_bbsize);
 FUNC_4(VAR_0 + 144, VAR_1->d_sbsize);
 for (VAR_2 = 0; VAR_2 < VAR_1->d_npartitions; VAR_2++)
  FUNC_1(VAR_0 + 148 + 16 * VAR_2, &VAR_1->d_partitions[VAR_2]);
 VAR_4 = VAR_0 + 148 + 16 * VAR_1->d_npartitions;
 VAR_5 = 0;
 for (VAR_3 = VAR_0; VAR_3 < VAR_4; VAR_3 += 2)
  VAR_5 ^= FUNC_2(VAR_3);
 FUNC_3(VAR_0 + 136, VAR_5);
}
