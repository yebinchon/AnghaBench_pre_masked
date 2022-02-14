
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stat {scalar_t__ st_size; } ;
struct pcap_file_header {int linktype; scalar_t__ sigfigs; int snaplen; int thiszone; int version_minor; int version_major; int magic; } ;
typedef int hdr ;
struct TYPE_2__ {int linktype; int snapshot; int tzoff; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_7 ;
 int * VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int,char*) ;
 int VAR_10 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,struct stat*) ;
 int FUNC_6 (char*,int,int,int *) ;
 TYPE_1__* VAR_11 ;
 int FUNC_7 (int ,char*,...) ;
 scalar_t__ FUNC_8 () ;
 int FUNC_9 () ;
 scalar_t__ FUNC_10 (int *,scalar_t__) ;
 scalar_t__ FUNC_11 (scalar_t__) ;
 int FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (int *,int *,int ,int ) ;
 scalar_t__ VAR_12 ;
 int FUNC_14 (int ) ;

int
FUNC_15(int VAR_13)
{
 struct pcap_file_header VAR_14;
 struct stat VAR_15;
 int VAR_16;
 FILE *VAR_17;

 if (VAR_11 == ((void*)0))
  return (-1);

 if (VAR_8) {
  FUNC_4(VAR_8);
  FUNC_1(VAR_8);
  VAR_8 = ((void*)0);
 }





 VAR_16 = FUNC_9();
 if (VAR_16 < 0)
  return (-1);

 VAR_17 = FUNC_2(VAR_16, "a+");

 if (VAR_17 == ((void*)0)) {
  FUNC_7(VAR_0, "Error: %s: %s", VAR_10, FUNC_14(VAR_9));
  FUNC_0(VAR_16);
  return (-1);
 }
 if (FUNC_5(FUNC_3(VAR_17), &VAR_15) == -1) {
  FUNC_7(VAR_0, "Error: %s: %s", VAR_10, FUNC_14(VAR_9));
  FUNC_1(VAR_17);
  return (-1);
 }


 if (FUNC_13(VAR_17, ((void*)0), VAR_6, 0)) {
  FUNC_7(VAR_0, "Failed to set output buffers");
  FUNC_1(VAR_17);
  return (-1);
 }



 if (VAR_15.st_size == 0) {
  if (VAR_12 != VAR_7) {
   FUNC_7(VAR_1, "Using snaplen %d", VAR_12);
   if (FUNC_11(VAR_12))
    FUNC_7(VAR_2,
        "Failed, using old settings");
  }
  VAR_14.magic = 0xa1b2c3d4;
  VAR_14.version_major = VAR_3;
  VAR_14.version_minor = VAR_4;
  VAR_14.thiszone = VAR_11->tzoff;
  VAR_14.snaplen = VAR_11->snapshot;
  VAR_14.sigfigs = 0;
  VAR_14.linktype = VAR_11->linktype;

  if (FUNC_6((char *)&VAR_14, sizeof(VAR_14), 1, VAR_17) != 1) {
   FUNC_1(VAR_17);
   return (-1);
  }
 } else if (FUNC_10(VAR_17, VAR_15.st_size)) {
  FUNC_1(VAR_17);
  if (VAR_13 || FUNC_8()) {
   FUNC_7(VAR_0,
       "Invalid/incompatible log file, move it away");
   return (-1);
  }
  return (1);
 }

 VAR_8 = VAR_17;

 FUNC_12(0);
 FUNC_4(VAR_17);

 return (0);
}
