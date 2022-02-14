
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uid_t ;
struct listen_port {int fd; struct listen_port* next; } ;
struct config_file {int use_systemd; int ip_freebind; int ip_transparent; scalar_t__* username; } ;
struct addrinfo {int ai_flags; int ai_socktype; } ;
typedef int port ;
typedef int mode_t ;
typedef int hints ;


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
 scalar_t__ FUNC_0 (int,int) ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_1 (char const*,int ) ;
 int FUNC_2 (char const*,scalar_t__,scalar_t__) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (char const*,int*,int ) ;
 int FUNC_6 (struct addrinfo*,int,int*,int ,int ,int ,int ,int ) ;
 int VAR_12 ;
 int FUNC_7 (struct addrinfo*) ;
 int FUNC_8 (int) ;
 int FUNC_9 (char const*,char*,struct addrinfo*,struct addrinfo**) ;
 int FUNC_10 (char const*) ;
 int FUNC_11 (char*,...) ;
 int FUNC_12 (struct addrinfo*,int ,int) ;
 int FUNC_13 (char*,int,char*,int) ;
 scalar_t__ FUNC_14 (int ) ;
 int FUNC_15 (int ,char*,unsigned int,unsigned int,char const*,scalar_t__) ;

__attribute__((used)) static int
FUNC_16(const char* VAR_13, int VAR_14, struct listen_port** VAR_15, int VAR_16,
 struct config_file* VAR_17)
{
 struct addrinfo VAR_18;
 struct addrinfo* VAR_19;
 struct listen_port* VAR_20;
 int VAR_21 = 0;
 int VAR_22, VAR_23;
 char VAR_24[15];
 FUNC_13(VAR_24, sizeof(VAR_24), "%d", VAR_14);
 VAR_24[sizeof(VAR_24)-1]=0;
 FUNC_12(&VAR_18, 0, sizeof(VAR_18));
 FUNC_10(VAR_13);

 if(VAR_13[0] == '/') {

  VAR_22 = FUNC_5(VAR_13, &VAR_21, VAR_17->use_systemd);





  if(VAR_22 != -1) {
   (void)VAR_17;

  }
 } else {
  VAR_18.ai_socktype = VAR_4;
  VAR_18.ai_flags = VAR_1 | VAR_0;
  if((VAR_23 = FUNC_9(VAR_13, VAR_24, &VAR_18, &VAR_19)) != 0 || !VAR_19) {






   FUNC_11("control interface %s:%s getaddrinfo: %s %s",
    VAR_13?VAR_13:"default", VAR_24, FUNC_8(VAR_23),



    ""

   );
   return 0;
  }


  VAR_22 = FUNC_6(VAR_19, 1, &VAR_21, 0,
   VAR_17->ip_transparent, 0, VAR_17->ip_freebind, VAR_17->use_systemd);
  FUNC_7(VAR_19);
 }

 if(VAR_22 == -1 && VAR_21) {
  if(!VAR_16)
   return 1;
  FUNC_11("cannot open control interface %s %d : "
   "protocol not supported", VAR_13, VAR_14);
  return 0;
 }
 if(VAR_22 == -1) {
  FUNC_11("cannot open control interface %s %d", VAR_13, VAR_14);
  return 0;
 }


 VAR_20 = (struct listen_port*)FUNC_0(1, sizeof(*VAR_20));
 if(!VAR_20) {

  FUNC_3(VAR_22);



  FUNC_11("out of memory");
  return 0;
 }
 VAR_20->next = *VAR_15;
 *VAR_15 = VAR_20;
 VAR_20->fd = VAR_22;
 return 1;
}
