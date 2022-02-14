
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long u_long ;
struct partition {scalar_t__ p_size; unsigned long long p_offset; scalar_t__ p_fstype; } ;
struct disklabel {int d_secsize; int d_nsectors; int d_ntracks; int d_ncylinders; scalar_t__ d_rpm; int d_secpercyl; int d_secperunit; int d_bbsize; int d_npartitions; struct partition* d_partitions; int d_interleave; } ;
typedef unsigned long long off_t ;


 unsigned long long VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ,char*,...) ;
 struct disklabel* FUNC_1 () ;
 struct disklabel VAR_7 ;
 char* VAR_8 ;
 scalar_t__* VAR_9 ;
 char* VAR_10 ;
 unsigned long long VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static int
FUNC_3(struct disklabel *VAR_13)
{
 struct partition *VAR_14;
 int VAR_15, VAR_16 = 0;
 char VAR_17;
 u_long VAR_18, VAR_19, VAR_20, VAR_21, VAR_22;
 long VAR_23;
 int VAR_24;
 int VAR_25;
 int VAR_26;
 struct partition *VAR_27;

 if (VAR_13 == ((void*)0))
  VAR_13 = &VAR_7;

 if (VAR_6) {

  if (VAR_13->d_secsize == 0) {
   FUNC_0(VAR_12, "sector size 0\n");
   return (1);
  }
  if (VAR_13->d_nsectors == 0) {
   FUNC_0(VAR_12, "sectors/track 0\n");
   return (1);
  }
  if (VAR_13->d_ntracks == 0) {
   FUNC_0(VAR_12, "tracks/cylinder 0\n");
   return (1);
  }
  if (VAR_13->d_ncylinders == 0) {
   FUNC_0(VAR_12, "cylinders/unit 0\n");
   VAR_16++;
  }
  if (VAR_13->d_rpm == 0)
   FUNC_2("revolutions/minute 0");
  if (VAR_13->d_secpercyl == 0)
   VAR_13->d_secpercyl = VAR_13->d_nsectors * VAR_13->d_ntracks;
  if (VAR_13->d_secperunit == 0)
   VAR_13->d_secperunit = VAR_13->d_secpercyl * VAR_13->d_ncylinders;
  if (VAR_13->d_bbsize == 0) {
   FUNC_0(VAR_12, "boot block size 0\n");
   VAR_16++;
  } else if (VAR_13->d_bbsize % VAR_13->d_secsize)
   FUNC_2("boot block size %% sector-size != 0");
  if (VAR_13->d_npartitions > VAR_4) {
   FUNC_2("number of partitions (%lu) > MAXPARTITIONS (%d)",
       (u_long)VAR_13->d_npartitions, VAR_4);
   VAR_16++;
  }
  if (VAR_13->d_npartitions < VAR_1) {
   FUNC_2("number of partitions (%lu) < DEFPARTITIONS (%d)",
       (u_long)VAR_13->d_npartitions, VAR_1);
   VAR_16++;
  }
 } else {
  struct disklabel *VAR_28;

  VAR_28 = FUNC_1();
  if (VAR_13->d_secsize == 0)
   VAR_13->d_secsize = VAR_28->d_secsize;
  if (VAR_13->d_nsectors == 0)
   VAR_13->d_nsectors = VAR_28->d_nsectors;
  if (VAR_13->d_ntracks == 0)
   VAR_13->d_ntracks = VAR_28->d_ntracks;
  if (VAR_13->d_ncylinders == 0)
   VAR_13->d_ncylinders = VAR_28->d_ncylinders;
  if (VAR_13->d_rpm == 0)
   VAR_13->d_rpm = VAR_28->d_rpm;
  if (VAR_13->d_interleave == 0)
   VAR_13->d_interleave = VAR_28->d_interleave;
  if (VAR_13->d_secpercyl == 0)
   VAR_13->d_secpercyl = VAR_28->d_secpercyl;
  if (VAR_13->d_secperunit == 0 ||
      VAR_13->d_secperunit > VAR_28->d_secperunit)
   VAR_13->d_secperunit = VAR_28->d_secperunit;
  if (VAR_13->d_bbsize == 0)
   VAR_13->d_bbsize = VAR_28->d_bbsize;
  if (VAR_13->d_npartitions < VAR_1 ||
      VAR_13->d_npartitions > VAR_4)
   VAR_13->d_npartitions = VAR_28->d_npartitions;
 }



 VAR_20 = 0;
 VAR_21 = 0;
 VAR_25 = -1;

 for (VAR_15 = 0; VAR_15 < VAR_13->d_npartitions; VAR_15++) {
  VAR_14 = &VAR_13->d_partitions[VAR_15];
  if (VAR_9[VAR_15]) {
   if (VAR_10[VAR_15] == '*') {
    if (VAR_15 == VAR_5) {
     VAR_14->p_size = VAR_13->d_secperunit;
    } else {
     if (VAR_25 != -1)
      FUNC_2("Too many '*' partitions (%c and %c)",
          VAR_25 + 'a',VAR_15 + 'a');
     else
      VAR_25 = VAR_15;
    }
   } else {
    off_t VAR_29;

    VAR_29 = VAR_14->p_size;
    switch (VAR_10[VAR_15]) {
    case '%':
     VAR_21 += VAR_29;
     break;
    case 't':
    case 'T':
     VAR_29 *= 1024ULL;

    case 'g':
    case 'G':
     VAR_29 *= 1024ULL;

    case 'm':
    case 'M':
     VAR_29 *= 1024ULL;

    case 'k':
    case 'K':
     VAR_29 *= 1024ULL;
     break;
    case '\0':
     break;
    default:
     FUNC_2("unknown multiplier suffix '%c' for partition %c (should be K, M, G or T)",
         VAR_10[VAR_15], VAR_15 + 'a');
     break;
    }

    if (VAR_10[VAR_15] != '%') {




     if (VAR_10[VAR_15] != '\0') {
      if (VAR_29 % VAR_13->d_secsize != 0)
       FUNC_2("partition %c not an integer number of sectors",
           VAR_15 + 'a');
      VAR_29 /= VAR_13->d_secsize;
      VAR_14->p_size = VAR_29;
     }

     if (VAR_15 != VAR_5)
      VAR_20 += VAR_29;
    }
   }
  }
 }


 VAR_18 = VAR_0 / VAR_11;
 VAR_23 = 0;
 for (VAR_15 = 0; VAR_15 < VAR_13->d_npartitions; VAR_15++) {
  VAR_14 = &VAR_13->d_partitions[VAR_15];
  if (!VAR_9[VAR_15] || VAR_15 == VAR_5 ||
      VAR_10[VAR_15] == '%' || VAR_10[VAR_15] == '*')
   continue;
  if (VAR_14->p_offset > VAR_18)
   VAR_23 += VAR_14->p_offset - VAR_18;
  if (VAR_14->p_offset + VAR_14->p_size > VAR_18)
   VAR_18 = VAR_14->p_offset + VAR_14->p_size;
 }
 if (VAR_18 < VAR_13->d_secperunit)
  VAR_23 += VAR_13->d_secperunit - VAR_18;


 if (VAR_21 != 0) {
  if (VAR_21 > 100) {
   FUNC_0(VAR_12,"total percentage %llu is greater than 100\n",
       VAR_21);
   VAR_16++;
  }

  if (VAR_23 > 0) {
   for (VAR_15 = 0; VAR_15 < VAR_13->d_npartitions; VAR_15++) {
    VAR_14 = &VAR_13->d_partitions[VAR_15];
    if (VAR_9[VAR_15] && VAR_10[VAR_15] == '%') {

     VAR_14->p_size = ((double)VAR_14->p_size/100) * VAR_23;
     VAR_20 += VAR_14->p_size;



    }
   }
  } else {
   FUNC_0(VAR_12,
       "%ld sectors available to give to '*' and '%%' partitions\n",
       VAR_23);
   VAR_16++;

  }
 }

 if (VAR_25 != -1) {




  VAR_19 = 0;
  VAR_18 = VAR_0 / VAR_11;
  for (VAR_15 = VAR_25 - 1; VAR_15 >= 0; VAR_15--) {
   VAR_14 = &VAR_13->d_partitions[VAR_15];
   if (!VAR_9[VAR_15] || VAR_15 == VAR_5)
    continue;
   if (VAR_8[VAR_15] == '*') {
    VAR_19 += VAR_14->p_size;
    continue;
   }
   VAR_18 = VAR_14->p_offset + VAR_14->p_size;
   break;
  }
  VAR_22 = VAR_13->d_secperunit;
  for (VAR_15 = VAR_13->d_npartitions - 1; VAR_15 > VAR_25; VAR_15--) {
   VAR_14 = &VAR_13->d_partitions[VAR_15];
   if (!VAR_9[VAR_15] || VAR_15 == VAR_5)
    continue;
   if (VAR_8[VAR_15] == '*') {
    VAR_19 += VAR_14->p_size;
    continue;
   }
   VAR_22 = VAR_14->p_offset;
  }

  if (VAR_22 - VAR_18 <= VAR_19) {
   FUNC_0(VAR_12, "Cannot find space for partition %c\n",
       VAR_25 + 'a');
   FUNC_0(VAR_12,
       "Need more than %llu sectors between %llu and %llu\n",
       VAR_19, VAR_18, VAR_22);
   VAR_16++;
   VAR_13->d_partitions[VAR_25].p_size = 0;
  } else {
   VAR_13->d_partitions[VAR_25].p_size = VAR_22 -
       VAR_18 - VAR_19;
   VAR_20 += VAR_13->d_partitions[VAR_25].p_size;
  }
 }


 VAR_22 = VAR_0 / VAR_11;
 VAR_24 = 0;
 for (VAR_15 = 0; VAR_15 < VAR_13->d_npartitions; VAR_15++) {
  VAR_17 = 'a' + VAR_15;
  VAR_14 = &VAR_13->d_partitions[VAR_15];
  if (VAR_9[VAR_15]) {
   if (VAR_8[VAR_15] == '*') {
    if (VAR_15 == VAR_5) {
     VAR_14->p_offset = 0;
    } else {
     VAR_14->p_offset = VAR_22;
     VAR_24 = 1;
    }
   } else {

    if (VAR_14->p_offset < VAR_22 &&
        VAR_24 && VAR_15 != VAR_5 &&
        VAR_14->p_fstype != VAR_3) {
     FUNC_0(VAR_12,
"Offset %ld for partition %c overlaps previous partition which ends at %llu\n",
         (long)VAR_14->p_offset,VAR_15+'a',VAR_22);
     FUNC_0(VAR_12,
"Labels with any *'s for offset must be in ascending order by sector\n");
     VAR_16++;
    } else if (VAR_14->p_offset != VAR_22 &&
        VAR_15 != VAR_5 && VAR_24) {




     FUNC_2(
"Offset %ld for partition %c doesn't match expected value %ld",
         (long)VAR_14->p_offset, VAR_15 + 'a', VAR_22);
    }
   }
   if (VAR_15 != VAR_5)
    VAR_22 = VAR_14->p_offset + VAR_14->p_size;
  }
 }

 for (VAR_15 = 0; VAR_15 < VAR_13->d_npartitions; VAR_15++) {
  VAR_17 = 'a' + VAR_15;
  VAR_14 = &VAR_13->d_partitions[VAR_15];
  if (VAR_14->p_size == 0 && VAR_14->p_offset != 0)
   FUNC_2("partition %c: size 0, but offset %lu",
       VAR_17, (u_long)VAR_14->p_offset);
  if (VAR_14->p_offset > VAR_13->d_secperunit) {
   FUNC_0(VAR_12,
       "partition %c: offset past end of unit\n", VAR_17);
   VAR_16++;
  }
  if (VAR_14->p_offset + VAR_14->p_size > VAR_13->d_secperunit) {
   FUNC_0(VAR_12,
   "partition %c: partition extends past end of unit\n",
       VAR_17);
   VAR_16++;
  }
  if (VAR_15 == VAR_5) {
   if (VAR_14->p_fstype != VAR_2)
    FUNC_2("partition %c is not marked as unused!",VAR_17);
   if (VAR_14->p_offset != 0)
    FUNC_2("partition %c doesn't start at 0!",VAR_17);
   if (VAR_14->p_size != VAR_13->d_secperunit)
    FUNC_2("partition %c doesn't cover the whole unit!",VAR_17);

   if ((VAR_14->p_fstype != VAR_2) || (VAR_14->p_offset != 0) ||
       (VAR_14->p_size != VAR_13->d_secperunit)) {
    FUNC_2("An incorrect partition %c may cause problems for "
        "standard system utilities",VAR_17);
   }
  }



  for (VAR_26 = 0; VAR_26 < VAR_15; VAR_26++) {
   VAR_27 = &VAR_13->d_partitions[VAR_26];
   if (VAR_26 != VAR_5 && VAR_15 != VAR_5 &&
       VAR_14->p_fstype != VAR_3 &&
       VAR_27->p_fstype != VAR_3 &&
       VAR_9[VAR_15] && VAR_9[VAR_26]) {
    if (VAR_27->p_offset < VAR_14->p_offset + VAR_14->p_size &&
        (VAR_27->p_offset + VAR_27->p_size > VAR_14->p_offset ||
     VAR_27->p_offset >= VAR_14->p_offset)) {
     FUNC_0(VAR_12,"partitions %c and %c overlap!\n",
         VAR_26 + 'a', VAR_15 + 'a');
     VAR_16++;
    }
   }
  }
 }
 for (; VAR_15 < VAR_13->d_npartitions; VAR_15++) {
  VAR_17 = 'a' + VAR_15;
  VAR_14 = &VAR_13->d_partitions[VAR_15];
  if (VAR_14->p_size || VAR_14->p_offset)
   FUNC_2("unused partition %c: size %d offset %lu",
       'a' + VAR_15, VAR_14->p_size, (u_long)VAR_14->p_offset);
 }
 return (VAR_16);
}
