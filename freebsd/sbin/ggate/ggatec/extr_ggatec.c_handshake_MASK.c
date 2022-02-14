
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ver ;
struct TYPE_2__ {scalar_t__ s_addr; } ;
struct sockaddr_in {scalar_t__ gv_error; int gc_flags; int gc_nconn; scalar_t__ gs_error; scalar_t__ gs_sectorsize; int gs_mediasize; int gc_token; int gc_path; int gv_version; int gv_magic; int sin_port; TYPE_1__ sin_addr; int sin_family; } ;
struct sockaddr {int dummy; } ;
struct g_gate_version {scalar_t__ gv_error; int gc_flags; int gc_nconn; scalar_t__ gs_error; scalar_t__ gs_sectorsize; int gs_mediasize; int gc_token; int gc_path; int gv_version; int gv_magic; int sin_port; TYPE_1__ sin_addr; int sin_family; } ;
struct g_gate_sinit {scalar_t__ gv_error; int gc_flags; int gc_nconn; scalar_t__ gs_error; scalar_t__ gs_sectorsize; int gs_mediasize; int gc_token; int gc_path; int gv_version; int gv_magic; int sin_port; TYPE_1__ sin_addr; int sin_family; } ;
struct g_gate_cinit {scalar_t__ gv_error; int gc_flags; int gc_nconn; scalar_t__ gs_error; scalar_t__ gs_sectorsize; int gs_mediasize; int gc_token; int gc_path; int gv_version; int gv_magic; int sin_port; TYPE_1__ sin_addr; int sin_family; } ;
typedef int sinit ;
typedef int serv ;
typedef int cinit ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (struct sockaddr_in*,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,struct sockaddr*,int) ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 (int,struct sockaddr_in*,int,int ) ;
 int FUNC_7 (int,struct sockaddr_in*,int,int ) ;
 int FUNC_8 (int) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (struct sockaddr_in*) ;
 int FUNC_11 (struct sockaddr_in*) ;
 int FUNC_12 (struct sockaddr_in*) ;
 int FUNC_13 (struct sockaddr_in*) ;
 int VAR_11 ;
 int FUNC_14 (int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_15 (int ,int ,int ) ;
 int FUNC_16 (scalar_t__) ;
 int FUNC_17 (int ,int ,int) ;
 int FUNC_18 (int ) ;
 int VAR_16 ;

__attribute__((used)) static int
FUNC_19(int VAR_17)
{
 struct g_gate_version VAR_18;
 struct g_gate_cinit VAR_19;
 struct g_gate_sinit VAR_20;
 struct sockaddr_in VAR_21;
 int VAR_22;




 FUNC_2(&VAR_21, sizeof(VAR_21));
 VAR_21.sin_family = VAR_0;
 VAR_21.sin_addr.s_addr = FUNC_9(VAR_11);
 if (VAR_21.sin_addr.s_addr == VAR_3) {
  FUNC_5(VAR_4, "Invalid IP/host name: %s.", VAR_11);
  return (-1);
 }
 VAR_21.sin_port = FUNC_14(VAR_14);
 VAR_22 = FUNC_15(VAR_0, VAR_8, 0);
 if (VAR_22 == -1) {
  FUNC_5(VAR_4, "Cannot open socket: %s.",
      FUNC_16(VAR_9));
  return (-1);
 }

 FUNC_8(VAR_22);

 if (FUNC_4(VAR_22, (struct sockaddr *)&VAR_21, sizeof(VAR_21)) == -1) {
  FUNC_5(VAR_4, "Cannot connect to server: %s.",
      FUNC_16(VAR_9));
  FUNC_3(VAR_22);
  return (-1);
 }

 FUNC_5(VAR_5, "Connected to the server: %s:%d.", VAR_11, VAR_14);




 FUNC_5(VAR_4, "Sending version packet.");
 FUNC_0(FUNC_18(VAR_1) == sizeof(VAR_18.gv_magic));
 FUNC_1(VAR_1, VAR_18.gv_magic, sizeof(VAR_18.gv_magic));
 VAR_18.gv_version = VAR_2;
 VAR_18.gv_error = 0;
 FUNC_13(&VAR_18);
 if (FUNC_7(VAR_22, &VAR_18, sizeof(VAR_18), VAR_6) == -1) {
  FUNC_5(VAR_4, "Error while sending version packet: %s.",
      FUNC_16(VAR_9));
  FUNC_3(VAR_22);
  return (-1);
 }
 FUNC_2(&VAR_18, sizeof(VAR_18));
 if (FUNC_6(VAR_22, &VAR_18, sizeof(VAR_18), VAR_7) == -1) {
  FUNC_5(VAR_4, "Error while receiving data: %s.",
      FUNC_16(VAR_9));
  FUNC_3(VAR_22);
  return (-1);
 }
 if (VAR_18.gv_error != 0) {
  FUNC_5(VAR_4, "Version verification problem: %s.",
      FUNC_16(VAR_9));
  FUNC_3(VAR_22);
  return (-1);
 }




 FUNC_5(VAR_4, "Sending initial packet.");
 if (FUNC_17(VAR_19.gc_path, VAR_13, sizeof(VAR_19.gc_path)) >=
     sizeof(VAR_19.gc_path)) {
  FUNC_5(VAR_4, "Path name too long.");
  FUNC_3(VAR_22);
  return (-1);
 }
 VAR_19.gc_flags = VAR_10 | VAR_17;
 VAR_19.gc_token = VAR_16;
 VAR_19.gc_nconn = 2;
 FUNC_12(&VAR_19);
 if (FUNC_7(VAR_22, &VAR_19, sizeof(VAR_19), VAR_6) == -1) {
         FUNC_5(VAR_4, "Error while sending initial packet: %s.",
      FUNC_16(VAR_9));
  FUNC_3(VAR_22);
  return (-1);
 }
 FUNC_10(&VAR_19);




 FUNC_5(VAR_4, "Receiving initial packet.");
 if (FUNC_6(VAR_22, &VAR_20, sizeof(VAR_20), VAR_7) == -1) {
  FUNC_5(VAR_4, "Error while receiving data: %s.",
      FUNC_16(VAR_9));
  FUNC_3(VAR_22);
  return (-1);
 }
 FUNC_11(&VAR_20);
 if (VAR_20.gs_error != 0) {
         FUNC_5(VAR_4, "Error from server: %s.",
      FUNC_16(VAR_20.gs_error));
  FUNC_3(VAR_22);
  return (-1);
 }
 FUNC_5(VAR_4, "Received initial packet.");

 VAR_12 = VAR_20.gs_mediasize;
 if (VAR_15 == 0)
  VAR_15 = VAR_20.gs_sectorsize;

 return (VAR_22);
}
