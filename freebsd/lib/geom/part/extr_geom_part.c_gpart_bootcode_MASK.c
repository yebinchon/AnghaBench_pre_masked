
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gmesh {int dummy; } ;
struct ggeom {int lg_name; } ;
struct gctl_req {int dummy; } ;
struct gclass {int dummy; } ;


 int VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 char* VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int,char*) ;
 int FUNC_2 (int ,char*,...) ;
 struct gclass* FUNC_3 (struct gmesh*,char const*) ;
 struct ggeom* FUNC_4 (struct gclass*,char const*) ;
 char* FUNC_5 (struct ggeom*,char*) ;
 int FUNC_6 (void*) ;
 int FUNC_7 (struct gctl_req*,char*,size_t,void*) ;
 int FUNC_8 (struct gctl_req*,char*) ;
 char* FUNC_9 (struct gctl_req*,char*) ;
 int FUNC_10 (struct gctl_req*,char*) ;
 scalar_t__ FUNC_11 (struct gctl_req*,char*) ;
 scalar_t__ FUNC_12 (struct gctl_req*,char*) ;
 int FUNC_13 (struct gmesh*) ;
 int FUNC_14 (struct gmesh*) ;
 void* FUNC_15 (char const*,size_t*) ;
 int FUNC_16 (struct gctl_req*,unsigned int) ;
 int FUNC_17 (struct ggeom*,int,void*,size_t) ;
 int FUNC_18 (struct ggeom*,int,void*) ;
 scalar_t__ FUNC_19 (char const*,char*) ;

__attribute__((used)) static void
FUNC_20(struct gctl_req *VAR_5, unsigned int VAR_6)
{
 struct gmesh VAR_7;
 struct gclass *VAR_8;
 struct ggeom *VAR_9;
 const char *VAR_10;
 void *VAR_11, *VAR_12;
 size_t VAR_13, VAR_14;
 int VAR_15, VAR_16, VAR_17;

 if (FUNC_12(VAR_5, VAR_1)) {
  VAR_10 = FUNC_9(VAR_5, VAR_1);
  VAR_13 = 800 * 1024;
  VAR_11 = FUNC_15(VAR_10, &VAR_13);
  VAR_15 = FUNC_7(VAR_5, VAR_1, VAR_13,
      VAR_11);
  if (VAR_15)
   FUNC_1(VAR_0, VAR_15, "internal error");
 } else
  VAR_11 = ((void*)0);

 VAR_10 = FUNC_9(VAR_5, "class");
 if (VAR_10 == ((void*)0))
  FUNC_0();
 VAR_15 = FUNC_14(&VAR_7);
 if (VAR_15 != 0)
  FUNC_1(VAR_0, VAR_15, "Cannot get GEOM tree");
 VAR_8 = FUNC_3(&VAR_7, VAR_10);
 if (VAR_8 == ((void*)0)) {
  FUNC_13(&VAR_7);
  FUNC_2(VAR_0, "Class %s not found.", VAR_10);
 }
 if (FUNC_10(VAR_5, "nargs") != 1)
  FUNC_2(VAR_0, "Invalid number of arguments.");
 VAR_10 = FUNC_9(VAR_5, "arg0");
 if (VAR_10 == ((void*)0))
  FUNC_0();
 VAR_9 = FUNC_4(VAR_8, VAR_10);
 if (VAR_9 == ((void*)0))
  FUNC_2(VAR_0, "No such geom: %s.", VAR_10);
 VAR_10 = FUNC_5(VAR_9, "scheme");
 if (VAR_10 == ((void*)0))
  FUNC_2(VAR_0, "Scheme not found for geom %s", VAR_9->lg_name);
 if (FUNC_19(VAR_10, "VTOC8") == 0)
  VAR_17 = 1;
 else
  VAR_17 = 0;

 if (FUNC_12(VAR_5, VAR_3)) {
  VAR_10 = FUNC_9(VAR_5, VAR_3);
  if (VAR_17 != 0)
   VAR_14 = VAR_4;
  else
   VAR_14 = 1024 * 1024;
  VAR_12 = FUNC_15(VAR_10, &VAR_14);
  VAR_15 = FUNC_8(VAR_5, VAR_3);
  if (VAR_15)
   FUNC_1(VAR_0, VAR_15, "internal error");
 } else
  VAR_12 = ((void*)0);

 if (FUNC_12(VAR_5, VAR_2)) {
  if (VAR_12 == ((void*)0))
   FUNC_2(VAR_0, "-i is only valid with -p");
  VAR_16 = (int)FUNC_11(VAR_5, VAR_2);
  if (VAR_16 < 1)
   FUNC_2(VAR_0, "invalid partition index");
  VAR_15 = FUNC_8(VAR_5, VAR_2);
  if (VAR_15)
   FUNC_1(VAR_0, VAR_15, "internal error");
 } else
  VAR_16 = 0;

 if (VAR_12 != ((void*)0)) {
  if (VAR_17 == 0) {
   if (VAR_16 == 0)
    FUNC_2(VAR_0, "missing -i option");
   FUNC_17(VAR_9, VAR_16, VAR_12, VAR_14);
  } else {
   if (VAR_14 != VAR_4)
    FUNC_2(VAR_0, "invalid bootcode");
   FUNC_18(VAR_9, VAR_16, VAR_12);
  }
 } else
  if (VAR_11 == ((void*)0))
   FUNC_2(VAR_0, "no -b nor -p");

 if (VAR_11 != ((void*)0))
  FUNC_16(VAR_5, VAR_6);

 FUNC_13(&VAR_7);
 FUNC_6(VAR_12);
}
