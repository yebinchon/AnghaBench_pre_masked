
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xdrproc_t ;
struct ypxfr_mapname {char* xfrmap; char* xfrdomain; char* xfrmap_filename; int xfr_db_type; } ;
struct xfr {int dummy; } ;
struct timeval {int member_1; int member_0; } ;
typedef int resp ;
typedef int CLIENT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char*,int) ;
 scalar_t__ FUNC_1 (int *,int ,int ,char*,int ,char*,struct timeval) ;
 int * FUNC_2 (char*,int ,int ,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_6 (char*,int,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*) ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_9 (char*,char*,...) ;

int
FUNC_10(char *VAR_12, char *VAR_13, char *VAR_14, char *VAR_15)
{
 CLIENT *VAR_16;
 struct ypxfr_mapname VAR_17;
 struct xfr VAR_18;
 struct timeval VAR_19 = { 0, 25 };
 int VAR_20 = 0;

 VAR_17.xfrmap = VAR_13;
 VAR_17.xfrdomain = VAR_14;
 VAR_17.xfrmap_filename = "";
 VAR_17.xfr_db_type = VAR_4;




 FUNC_0((char *)&VAR_18, sizeof(VAR_18));

 if ((VAR_16 = FUNC_2(VAR_12, VAR_5,
    VAR_6, "tcp")) == ((void*)0)) {
  return(1);
 }

 if ((VAR_9 = FUNC_6(VAR_15, VAR_1|VAR_0, VAR_2)) == -1) {
  FUNC_3(VAR_16);
  FUNC_9("couldn't open %s: %s", VAR_15, FUNC_7(VAR_8));
  return(1);
 }

 if (FUNC_1(VAR_16,VAR_7,
   (xdrproc_t)VAR_11, (char *)&VAR_17,
   (xdrproc_t)VAR_10, (char *)&VAR_18,
   VAR_19) != VAR_3) {
  FUNC_9("%s", FUNC_4(VAR_16,"call to rpc.ypxfrd failed"));
  VAR_20++;
  FUNC_8(VAR_15);
 }

 FUNC_3(VAR_16);
 FUNC_5(VAR_9);
 return(VAR_20);
}
