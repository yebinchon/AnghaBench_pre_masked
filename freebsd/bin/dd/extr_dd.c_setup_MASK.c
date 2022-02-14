
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_int ;
typedef int cap_rights_t ;
struct TYPE_6__ {char* name; int fd; int flags; int dbsz; int offset; int * db; int * dbp; } ;
struct TYPE_5__ {int start; } ;


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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 unsigned long VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int FUNC_0 (size_t,int) ;
 unsigned long VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *,int ,...) ;
 int FUNC_4 (int,unsigned long*,int ) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (int,int *) ;
 int* VAR_40 ;
 int VAR_41 ;
 scalar_t__ FUNC_9 (int ,int *) ;
 int* VAR_42 ;
 int VAR_43 ;
 int FUNC_10 (int,char*,...) ;
 int FUNC_11 (int,char*) ;
 int FUNC_12 (int,int ,...) ;
 int VAR_44 ;
 int FUNC_13 (int,int) ;
 int FUNC_14 (TYPE_2__*) ;
 TYPE_2__ VAR_45 ;
 void* FUNC_15 (int) ;
 int FUNC_16 (unsigned long*) ;
 void* FUNC_17 (char*,int,int ) ;
 TYPE_2__ VAR_46 ;
 scalar_t__ FUNC_18 (int) ;
 int FUNC_19 () ;
 int FUNC_20 () ;
 TYPE_1__ VAR_47 ;
 int FUNC_21 (int) ;
 int FUNC_22 (int) ;

__attribute__((used)) static void
FUNC_23(void)
{
 u_int VAR_48;
 int VAR_49;
 cap_rights_t VAR_50;
 unsigned long VAR_51[] = { VAR_24, VAR_29 };

 if (VAR_45.name == ((void*)0)) {
  VAR_45.name = "stdin";
  VAR_45.fd = VAR_38;
 } else {
  VAR_45.fd = FUNC_17(VAR_45.name, VAR_33, 0);
  if (VAR_45.fd == -1)
   FUNC_10(1, "%s", VAR_45.name);
 }

 FUNC_14(&VAR_45);

 FUNC_2(&VAR_50, VAR_3, VAR_4);
 if (FUNC_8(VAR_45.fd, &VAR_50) == -1)
  FUNC_10(1, "unable to limit capability rights");

 if (VAR_44 > 1 && !(VAR_45.flags & VAR_27))
  FUNC_11(1, "files is not supported for non-tape devices");

 FUNC_3(&VAR_50, VAR_1, VAR_2, VAR_5);
 if (VAR_43 & (VAR_10 | VAR_11))
  FUNC_3(&VAR_50, VAR_0);
 if (VAR_46.name == ((void*)0)) {

  VAR_46.fd = VAR_39;
  VAR_46.name = "stdout";
  if (VAR_43 & VAR_15) {
   VAR_49 = FUNC_12(VAR_46.fd, VAR_25);
   if (VAR_49 == -1)
    FUNC_10(1, "unable to get fd flags for stdout");
   VAR_49 |= VAR_32;
   if (FUNC_12(VAR_46.fd, VAR_26, VAR_49) == -1)
    FUNC_10(1, "unable to set fd flags for stdout");
  }
 } else {
  VAR_49 = VAR_31;
  if (!(VAR_43 & (VAR_20 | VAR_13)))
   VAR_49 |= VAR_35;
  if (VAR_43 & VAR_15)
   VAR_49 |= VAR_32;
  VAR_46.fd = FUNC_17(VAR_46.name, VAR_34 | VAR_49, VAR_23);





  if (VAR_46.fd == -1) {
   VAR_46.fd = FUNC_17(VAR_46.name, VAR_36 | VAR_49, VAR_23);
   VAR_46.flags |= VAR_30;
   FUNC_1(&VAR_50, VAR_3);
  }
  if (VAR_46.fd == -1)
   FUNC_10(1, "%s", VAR_46.name);
 }

 FUNC_14(&VAR_46);

 if (FUNC_8(VAR_46.fd, &VAR_50) == -1)
  FUNC_10(1, "unable to limit capability rights");
 if (FUNC_4(VAR_46.fd, VAR_51, FUNC_16(VAR_51)) == -1)
  FUNC_10(1, "unable to limit capability rights");

 if (VAR_45.fd != VAR_38 && VAR_46.fd != VAR_38) {
  if (FUNC_6() == -1)
   FUNC_10(1, "unable to limit capability rights");
 }

 if (VAR_45.fd != VAR_39 && VAR_46.fd != VAR_39) {
  if (FUNC_7() == -1)
   FUNC_10(1, "unable to limit capability rights");
 }

 if (VAR_45.fd != VAR_37 && VAR_46.fd != VAR_37) {
  if (FUNC_5() == -1)
   FUNC_10(1, "unable to limit capability rights");
 }





 if (!(VAR_43 & (VAR_8 | VAR_22))) {
  if ((VAR_45.db = FUNC_15((size_t)VAR_46.dbsz + VAR_45.dbsz - 1)) == ((void*)0))
   FUNC_10(1, "input buffer");
  VAR_46.db = VAR_45.db;
 } else if ((VAR_45.db = FUNC_15(FUNC_0((size_t)VAR_45.dbsz, VAR_41) + VAR_41)) == ((void*)0) ||
     (VAR_46.db = FUNC_15(VAR_46.dbsz + VAR_41)) == ((void*)0))
  FUNC_10(1, "output buffer");


 VAR_45.dbp = VAR_45.db;
 VAR_46.dbp = VAR_46.db;


 if (VAR_45.offset)
  FUNC_19();
 if (VAR_46.offset)
  FUNC_20();





 if ((VAR_43 & (VAR_14 | VAR_20 | VAR_13)) == (VAR_14 | VAR_20) &&
     VAR_46.flags & VAR_28)
  if (FUNC_13(VAR_46.fd, VAR_46.offset * VAR_46.dbsz) == -1)
   FUNC_10(1, "truncating %s", VAR_46.name);

 if (VAR_43 & (VAR_12 | VAR_21 | VAR_7 | VAR_9 | VAR_17)) {
  if (VAR_42 != ((void*)0)) {
   for (VAR_48 = 0; VAR_48 <= 0377; ++VAR_48)
    VAR_40[VAR_48] = VAR_42[VAR_48];
  } else {
   for (VAR_48 = 0; VAR_48 <= 0377; ++VAR_48)
    VAR_40[VAR_48] = VAR_48;
  }
  if ((VAR_43 & VAR_17) && !(VAR_43 & VAR_7)) {




   for (VAR_48 = 200; VAR_48 <= 0377; ++VAR_48)
    VAR_40[VAR_48] = VAR_40[VAR_48 & 0x7f];
  }
  if (VAR_43 & VAR_12) {
   for (VAR_48 = 0; VAR_48 <= 0377; ++VAR_48)
    VAR_40[VAR_48] = FUNC_21(VAR_40[VAR_48]);
  } else if (VAR_43 & VAR_21) {
   for (VAR_48 = 0; VAR_48 <= 0377; ++VAR_48)
    VAR_40[VAR_48] = FUNC_22(VAR_40[VAR_48]);
  }
  if ((VAR_43 & VAR_17)) {




   for (VAR_48 = 0; VAR_48 <= 0377; ++VAR_48)
    VAR_40[VAR_48] = VAR_40[VAR_48] & 0x7f;
  }
  if ((VAR_43 & VAR_19)) {
   for (VAR_48 = 0; VAR_48 <= 0377; ++VAR_48)
    VAR_40[VAR_48] = VAR_40[VAR_48] | 0x80;
  }
  if ((VAR_43 & VAR_16)) {
   for (VAR_48 = 0; VAR_48 <= 0377; ++VAR_48)
    if (FUNC_18(VAR_40[VAR_48]))
     VAR_40[VAR_48] = VAR_40[VAR_48] | 0x80;
  }
  if ((VAR_43 & VAR_18)) {
   for (VAR_48 = 0; VAR_48 <= 0377; ++VAR_48)
    if (!FUNC_18(VAR_40[VAR_48]))
     VAR_40[VAR_48] = VAR_40[VAR_48] | 0x80;
  }

  VAR_42 = VAR_40;
 }

 if (FUNC_9(VAR_6, &VAR_47.start))
  FUNC_10(1, "clock_gettime");
}
