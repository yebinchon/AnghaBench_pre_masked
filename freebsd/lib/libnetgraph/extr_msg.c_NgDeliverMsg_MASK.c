
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_char ;
struct sockaddr_ng {int sg_len; int sg_data; int sg_family; } ;
struct sockaddr {int dummy; } ;
struct pollfd {int fd; scalar_t__ revents; int events; } ;
struct TYPE_2__ {size_t arglen; int flags; int cmd; } ;
struct ng_mesg {TYPE_1__ header; int data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct ng_mesg*,int ) ;
 int FUNC_3 (struct sockaddr_ng* const) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int) ;
 int FUNC_6 (int ,void const*,size_t) ;
 int FUNC_7 (struct pollfd*,int,int ) ;
 scalar_t__ FUNC_8 (int,struct ng_mesg*,int,int ,struct sockaddr*,int) ;
 int FUNC_9 (int ,char const*,int) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static int
FUNC_11(int VAR_9, const char *VAR_10,
 const struct ng_mesg *VAR_11, const void *VAR_12, size_t VAR_13)
{
 u_char VAR_14[VAR_5 + VAR_4];
 struct sockaddr_ng *const VAR_15 = (struct sockaddr_ng *) VAR_14;
 u_char *VAR_16 = ((void*)0);
 struct ng_mesg *VAR_17;
 int VAR_18 = 0;
 int VAR_19 = 0;


 if (VAR_12 == ((void*)0))
  VAR_13 = 0;


 if ((VAR_16 = FUNC_5(sizeof(*VAR_17) + VAR_13)) == ((void*)0)) {
  VAR_18 = VAR_8;
  if (VAR_7 >= 1)
   FUNC_0("malloc");
  VAR_19 = -1;
  goto done;
 }
 VAR_17 = (struct ng_mesg *) VAR_16;


 *VAR_17 = *VAR_11;
 VAR_17->header.arglen = VAR_13;
 FUNC_6(VAR_17->data, VAR_12, VAR_13);


 VAR_15->sg_family = VAR_0;

 FUNC_9(VAR_15->sg_data, VAR_10, VAR_5);
 VAR_15->sg_len = FUNC_10(VAR_15->sg_data) + 1 + VAR_4;


 if (VAR_7 >= 2) {
  FUNC_1("SENDING %s:",
      (VAR_17->header.flags & VAR_2) ? "RESPONSE" : "MESSAGE");
  FUNC_3(VAR_15);
  FUNC_2(VAR_17, VAR_15->sg_data);
 }


 if (FUNC_8(VAR_9, VAR_17, sizeof(*VAR_17) + VAR_13,
     0, (struct sockaddr *) VAR_15, VAR_15->sg_len) < 0) {
  VAR_18 = VAR_8;
  if (VAR_7 >= 1)
   FUNC_0("sendto(%s)", VAR_15->sg_data);
  VAR_19 = -1;
  goto done;
 }


 if (VAR_17->header.cmd & VAR_3 && !(VAR_17->header.flags & VAR_2)) {
  struct pollfd VAR_20;
  int VAR_21;

  VAR_20.fd = VAR_9;
  VAR_20.events = VAR_6;
  VAR_20.revents = 0;
  VAR_21 = FUNC_7(&VAR_20, 1, VAR_1);
  if (VAR_21 == -1) {
   VAR_18 = VAR_8;
   if (VAR_7 >= 1)
    FUNC_0("poll");
   VAR_19 = -1;
  }
 }

done:

 FUNC_4(VAR_16);
 VAR_8 = VAR_18;
 return (VAR_19);
}
