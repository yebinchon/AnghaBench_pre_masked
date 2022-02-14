
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
struct bge_vendor {char* v_name; } ;
struct bge_type {scalar_t__ bge_vid; scalar_t__ bge_did; } ;
struct bge_softc {int bge_dev; } ;
struct bge_revision {char* br_name; } ;
typedef int model ;
typedef int device_t ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 struct bge_type* VAR_2 ;
 scalar_t__ FUNC_1 (struct bge_softc*) ;
 struct bge_revision* FUNC_2 (int) ;
 struct bge_vendor* FUNC_3 (scalar_t__) ;
 struct bge_softc* FUNC_4 (int ) ;
 int FUNC_5 (int ,char*) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ,char const**) ;
 int FUNC_9 (char*,int,char*,char const*,...) ;

__attribute__((used)) static int
FUNC_10(device_t VAR_3)
{
 char VAR_4[96];
 char VAR_5[64];
 const struct bge_revision *VAR_6;
 const char *VAR_7;
 struct bge_softc *VAR_8;
 const struct bge_type *VAR_9 = VAR_2;
 const struct bge_vendor *VAR_10;
 uint32_t VAR_11;
 uint16_t VAR_12, VAR_13;

 VAR_8 = FUNC_4(VAR_3);
 VAR_8->bge_dev = VAR_3;
 VAR_13 = FUNC_7(VAR_3);
 VAR_12 = FUNC_6(VAR_3);
 while(VAR_9->bge_vid != 0) {
  if ((VAR_13 == VAR_9->bge_vid) && (VAR_12 == VAR_9->bge_did)) {
   VAR_11 = FUNC_0(VAR_3);
   VAR_6 = FUNC_2(VAR_11);
   if (FUNC_1(VAR_8) &&
       FUNC_8(VAR_3, &VAR_7) == 0)
    FUNC_9(VAR_5, sizeof(VAR_5), "%s", VAR_7);
   else {
    VAR_10 = FUNC_3(VAR_13);
    FUNC_9(VAR_5, sizeof(VAR_5), "%s %s",
        VAR_10 != ((void*)0) ? VAR_10->v_name : "Unknown",
        VAR_6 != ((void*)0) ? VAR_6->br_name :
        "NetXtreme/NetLink Ethernet Controller");
   }
   FUNC_9(VAR_4, sizeof(VAR_4), "%s, %sASIC rev. %#08x",
       VAR_5, VAR_6 != ((void*)0) ? "" : "unknown ", VAR_11);
   FUNC_5(VAR_3, VAR_4);
   return (VAR_0);
  }
  VAR_9++;
 }

 return (VAR_1);
}
