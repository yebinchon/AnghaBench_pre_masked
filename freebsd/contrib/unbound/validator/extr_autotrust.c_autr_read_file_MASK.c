
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct val_anchors {int dummy; } ;
struct trust_anchor {int lock; } ;
typedef int line ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (struct trust_anchor*) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char const*,char*) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (char*,int **,size_t*) ;
 struct trust_anchor* FUNC_5 (struct val_anchors*,char*,char const*,int *,size_t,int **,size_t*,int*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (char*,char const*,...) ;
 int FUNC_9 (char*,char const*) ;
 int FUNC_10 (char*,struct val_anchors*,struct trust_anchor**) ;
 int FUNC_11 (char*,int,int *,int*) ;
 int FUNC_12 (char*,char) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ,char*,char const*) ;

int FUNC_15(struct val_anchors* VAR_2, const char* VAR_3)
{

        FILE* VAR_4;

        int VAR_5 = 0;

        char VAR_6[10240];

 struct trust_anchor *VAR_7 = ((void*)0), *VAR_8;
 int VAR_9;

 uint8_t *VAR_10=((void*)0), *VAR_11=((void*)0);
 size_t VAR_12=0, VAR_13=0;

        if (!(VAR_4 = FUNC_2(VAR_3, "r"))) {
                FUNC_8("unable to open %s for reading: %s",
   VAR_3, FUNC_13(VAR_1));
                return 0;
        }
        FUNC_14(VAR_0, "reading autotrust anchor file %s", VAR_3);
        while ( (VAR_9=FUNC_11(VAR_6, sizeof(VAR_6), VAR_4, &VAR_5)) != 0) {
  if(VAR_9 == -1 || (VAR_9 = FUNC_10(VAR_6, VAR_2, &VAR_7)) == -1) {
   FUNC_8("could not parse auto-trust-anchor-file "
    "%s line %d", VAR_3, VAR_5);
   FUNC_1(VAR_4);
   FUNC_3(VAR_10);
   FUNC_3(VAR_11);
   return 0;
  } else if(VAR_9 == 1) {
   continue;
  } else if(VAR_9 == 2) {
   FUNC_9("trust anchor %s has been revoked", VAR_3);
   FUNC_1(VAR_4);
   FUNC_3(VAR_10);
   FUNC_3(VAR_11);
   return 1;
  }
         if (!FUNC_12(VAR_6, ';'))
                 continue;
   if(FUNC_4(VAR_6, &VAR_10, &VAR_12))
   continue;
  VAR_9 = 0;
                if(!(VAR_8=FUNC_5(VAR_2, VAR_6, VAR_3, VAR_10,
   VAR_12, &VAR_11, &VAR_13, &VAR_9))) {
   if(!VAR_9) FUNC_8("failed to load trust anchor from %s "
    "at line %i, skipping", VAR_3, VAR_5);

   continue;
                }
  if(VAR_7 && VAR_7 != VAR_8) {
   FUNC_8("file %s has mismatching data inside: "
    "the file may only contain keys for one name, "
    "remove keys for other domain names", VAR_3);
          FUNC_1(VAR_4);
   FUNC_3(VAR_10);
   FUNC_3(VAR_11);
   return 0;
  }
  VAR_7 = VAR_8;
        }
        FUNC_1(VAR_4);
 FUNC_3(VAR_10);
 FUNC_3(VAR_11);
 if(!VAR_7) {
  FUNC_8("failed to read %s", VAR_3);
  return 0;
 }


 FUNC_6(&VAR_7->lock);
 if(!FUNC_0(VAR_7)) {
  FUNC_7(&VAR_7->lock);
  FUNC_8("malloc failure assembling %s", VAR_3);
  return 0;
 }
 FUNC_7(&VAR_7->lock);
 return 1;
}
