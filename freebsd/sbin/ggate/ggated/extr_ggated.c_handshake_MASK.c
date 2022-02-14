
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ver ;
struct sockaddr {int dummy; } ;
struct ggd_export {int dummy; } ;
struct ggd_connection {scalar_t__ c_mediasize; int c_sectorsize; int c_diskfd; scalar_t__ c_token; } ;
struct g_gate_version {scalar_t__ gv_version; scalar_t__ gs_mediasize; scalar_t__ gs_error; int gs_sectorsize; scalar_t__ gv_error; int gv_magic; } ;
struct g_gate_sinit {scalar_t__ gv_version; scalar_t__ gs_mediasize; scalar_t__ gs_error; int gs_sectorsize; scalar_t__ gv_error; int gv_magic; } ;
struct g_gate_cinit {scalar_t__ gv_version; scalar_t__ gs_mediasize; scalar_t__ gs_error; int gs_sectorsize; scalar_t__ gv_error; int gv_magic; } ;
typedef int ssize_t ;
typedef int sinit ;
typedef int cinit ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ggd_connection*,struct g_gate_version*,struct sockaddr*,int) ;
 struct ggd_connection* FUNC_1 (struct g_gate_version*) ;
 int FUNC_2 (struct ggd_connection*) ;
 struct ggd_connection* FUNC_3 (struct g_gate_version*,struct sockaddr*,int) ;
 scalar_t__ FUNC_4 (struct ggd_connection*) ;
 int FUNC_5 (struct ggd_connection*) ;
 int VAR_6 ;
 struct ggd_export* FUNC_6 (struct sockaddr*,struct g_gate_version*,struct ggd_connection*) ;
 int FUNC_7 (int ,char*,...) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int,struct g_gate_version*,int,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int,struct g_gate_version*,int,int ) ;
 int FUNC_12 (struct g_gate_version*) ;
 int FUNC_13 (struct g_gate_version*) ;
 int FUNC_14 (struct g_gate_version*) ;
 int FUNC_15 (struct g_gate_version*) ;
 int FUNC_16 (struct g_gate_version*) ;
 int FUNC_17 (struct sockaddr*) ;
 scalar_t__ FUNC_18 (int ,int ,int ) ;
 int FUNC_19 (int,int ,char*,...) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (int ) ;

__attribute__((used)) static int
FUNC_22(struct sockaddr *VAR_7, int VAR_8)
{
 struct g_gate_version VAR_9;
 struct g_gate_cinit VAR_10;
 struct g_gate_sinit VAR_11;
 struct ggd_connection *VAR_12;
 struct ggd_export *VAR_13;
 ssize_t VAR_14;

 FUNC_17(VAR_7);



 FUNC_7(VAR_3, "Receiving version packet.");
 VAR_14 = FUNC_9(VAR_8, &VAR_9, sizeof(VAR_9), VAR_5);
 FUNC_14(&VAR_9);
 if (VAR_14 != sizeof(VAR_9)) {
  FUNC_7(VAR_4, "Malformed version packet.");
  return (0);
 }
 FUNC_7(VAR_3, "Version packet received.");
 if (FUNC_18(VAR_9.gv_magic, VAR_1, FUNC_21(VAR_1)) != 0) {
  FUNC_7(VAR_4, "Invalid magic field.");
  return (0);
 }
 if (VAR_9.gv_version != VAR_2) {
  FUNC_7(VAR_4, "Version %u is not supported.",
      VAR_9.gv_version);
  return (0);
 }
 VAR_9.gv_error = 0;
 FUNC_16(&VAR_9);
 VAR_14 = FUNC_11(VAR_8, &VAR_9, sizeof(VAR_9), 0);
 FUNC_14(&VAR_9);
 if (VAR_14 == -1) {
  FUNC_19(VAR_8, VAR_6, "Error while sending version packet: %s.",
      FUNC_20(VAR_6));
  return (0);
 }




 FUNC_7(VAR_3, "Receiving initial packet.");
 VAR_14 = FUNC_9(VAR_8, &VAR_10, sizeof(VAR_10), VAR_5);
 FUNC_12(&VAR_10);
 if (VAR_14 != sizeof(VAR_10)) {
  FUNC_7(VAR_4, "Malformed initial packet.");
  return (0);
 }
 FUNC_7(VAR_3, "Initial packet received.");
 VAR_12 = FUNC_1(&VAR_10);
 if (VAR_12 != ((void*)0)) {



  FUNC_7(VAR_3, "Found existing connection (token=%lu).",
      (unsigned long)VAR_12->c_token);
  if (FUNC_0(VAR_12, &VAR_10, VAR_7, VAR_8) == -1) {
   FUNC_5(VAR_12);
   return (0);
  }
 } else {



  VAR_12 = FUNC_3(&VAR_10, VAR_7, VAR_8);
  if (VAR_12 == ((void*)0)) {
   FUNC_19(VAR_8, VAR_0,
       "Cannot allocate new connection.");
   return (0);
  }
  FUNC_7(VAR_3, "New connection created (token=%lu).",
      (unsigned long)VAR_12->c_token);
 }

 VAR_13 = FUNC_6(VAR_7, &VAR_10, VAR_12);
 if (VAR_13 == ((void*)0)) {
  FUNC_19(VAR_8, VAR_6, ((void*)0));
  FUNC_5(VAR_12);
  return (0);
 }
 if (VAR_12->c_mediasize == 0) {
  VAR_12->c_mediasize = FUNC_8(VAR_12->c_diskfd);
  VAR_12->c_sectorsize = FUNC_10(VAR_12->c_diskfd);
 }
 VAR_11.gs_mediasize = VAR_12->c_mediasize;
 VAR_11.gs_sectorsize = VAR_12->c_sectorsize;
 VAR_11.gs_error = 0;

 FUNC_7(VAR_3, "Sending initial packet.");

 FUNC_15(&VAR_11);
 VAR_14 = FUNC_11(VAR_8, &VAR_11, sizeof(VAR_11), 0);
 FUNC_13(&VAR_11);
 if (VAR_14 == -1) {
  FUNC_19(VAR_8, VAR_6, "Error while sending initial packet: %s.",
      FUNC_20(VAR_6));
  return (0);
 }

 if (FUNC_4(VAR_12)) {
  FUNC_2(VAR_12);
  FUNC_5(VAR_12);
 }
 return (1);
}
