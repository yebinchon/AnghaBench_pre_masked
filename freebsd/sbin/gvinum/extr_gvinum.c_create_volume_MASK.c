
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gctl_req {int dummy; } ;
typedef char off_t ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 char* FUNC_0 (char* const) ;
 char* FUNC_1 (char*,int ,int ) ;
 int FUNC_2 (struct gctl_req*) ;
 struct gctl_req* FUNC_3 () ;
 char* FUNC_4 (struct gctl_req*) ;
 int FUNC_5 (struct gctl_req*,char*,int,...) ;
 char FUNC_6 (char* const) ;
 int FUNC_7 (char*,int,char*,int ) ;
 int FUNC_8 (char const*,char*) ;
 int FUNC_9 (char*,char const*,char const*) ;

__attribute__((used)) static void
FUNC_10(int VAR_6, char * const *VAR_7, const char *VAR_8)
{
 struct gctl_req *VAR_9;
 const char *VAR_10;
 char VAR_11[VAR_0], *VAR_12, *VAR_13;
 int VAR_14, VAR_15, VAR_16;
 off_t VAR_17;

 VAR_15 = 0;
 VAR_14 = 0;
 VAR_13 = ((void*)0);
 VAR_17 = 262144;



 VAR_9 = FUNC_3();
 FUNC_5(VAR_9, "class", -1, "VINUM");

 for (VAR_16 = 1; VAR_16 < VAR_6; VAR_16++) {
  if (!FUNC_8(VAR_7[VAR_16], "-f")) {
   VAR_15 |= VAR_1;
  } else if (!FUNC_8(VAR_7[VAR_16], "-n")) {
   VAR_13 = VAR_7[++VAR_16];
  } else if (!FUNC_8(VAR_7[VAR_16], "-v")) {
   VAR_15 |= VAR_3;
  } else if (!FUNC_8(VAR_7[VAR_16], "-s")) {
   VAR_15 |= VAR_2;
   if (!FUNC_8(VAR_8, "raid5"))
    VAR_17 = FUNC_6(VAR_7[++VAR_16]);
  } else {

   FUNC_7(VAR_11, sizeof(VAR_11), "drive%d", VAR_14++);


   VAR_12 = FUNC_0(VAR_7[VAR_16]);
   if (VAR_12 == ((void*)0))
    goto bad;

   FUNC_5(VAR_9, VAR_11, -1, VAR_12);
  }
 }

 FUNC_5(VAR_9, "stripesize", sizeof(off_t), &VAR_17);


 if (VAR_13 == ((void*)0))
  VAR_13 = FUNC_1("gvinumvolume", VAR_5, VAR_4);


 FUNC_5(VAR_9, "verb", -1, VAR_8);
 FUNC_5(VAR_9, "flags", sizeof(int), &VAR_15);
 FUNC_5(VAR_9, "drives", sizeof(int), &VAR_14);
 FUNC_5(VAR_9, "name", -1, VAR_13);
 VAR_10 = FUNC_4(VAR_9);
 if (VAR_10 != ((void*)0))
  FUNC_9("creating %s volume failed: %s", VAR_8, VAR_10);
bad:
 FUNC_2(VAR_9);
}
