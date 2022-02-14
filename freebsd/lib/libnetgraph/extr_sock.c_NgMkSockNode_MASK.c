
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char* u_long ;
typedef int u_char ;
struct sockaddr_ng {char* sg_data; int sg_len; void* sg_family; } ;
struct sockaddr {int dummy; } ;
struct nodeinfo {scalar_t__ id; } ;
struct ng_mesg {scalar_t__ data; } ;
typedef int namebuf ;


 void* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 char* VAR_8 ;
 scalar_t__ FUNC_1 (int,struct ng_mesg*,int,int *) ;
 scalar_t__ FUNC_2 (int,char*,int ,int ,int *,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_3 (int,struct sockaddr*,int) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int,struct sockaddr*,int) ;
 int VAR_11 ;
 scalar_t__ FUNC_6 (char*) ;
 int FUNC_7 (char*,int,char*,char*) ;
 int FUNC_8 (void*,int ,int ) ;
 int FUNC_9 (char*,char const*,int) ;
 int FUNC_10 (char*) ;

int
FUNC_11(const char *VAR_12, int *VAR_13, int *VAR_14)
{
 char VAR_15[VAR_7];
 int VAR_16 = -1;
 int VAR_17 = -1;
 int VAR_18;


 if (VAR_12 && *VAR_12 == 0)
  VAR_12 = ((void*)0);




 if ((VAR_16 = FUNC_8(VAR_0, VAR_9, VAR_5)) < 0) {
  if (VAR_11 == VAR_1) {
   if (FUNC_6(VAR_8) < 0) {
    VAR_18 = VAR_11;
    if (VAR_10 >= 1)
     FUNC_0("can't load %s", VAR_8);
    goto errout;
   }
   VAR_16 = FUNC_8(VAR_0, VAR_9, VAR_5);
   if (VAR_16 >= 0)
    goto gotNode;
  }
  VAR_18 = VAR_11;
  if (VAR_10 >= 1)
   FUNC_0("socket");
  goto errout;
 }

gotNode:

 if (VAR_12 != ((void*)0)) {
  u_char VAR_19[VAR_7 + VAR_4];
  struct sockaddr_ng *const VAR_20 = (struct sockaddr_ng *) VAR_19;


  FUNC_9(VAR_20->sg_data, VAR_12, VAR_7);
  VAR_20->sg_family = VAR_0;
  VAR_20->sg_len = FUNC_10(VAR_20->sg_data) + 1 + VAR_4;
  if (FUNC_3(VAR_16, (struct sockaddr *) VAR_20, VAR_20->sg_len) < 0) {
   VAR_18 = VAR_11;
   if (VAR_10 >= 1)
    FUNC_0("bind(%s)", VAR_20->sg_data);
   goto errout;
  }


  FUNC_9(VAR_15, VAR_12, sizeof(VAR_15));
 } else if (VAR_14 != ((void*)0)) {
  union {
   u_char rbuf[sizeof(struct ng_mesg) +
       sizeof(struct nodeinfo)];
   struct ng_mesg res;
  } VAR_21;
  struct nodeinfo *const VAR_22 = (struct nodeinfo *) VAR_21.res.data;


  if (FUNC_2(VAR_16, ".", VAR_2,
      VAR_3, ((void*)0), 0) < 0) {
   VAR_18 = VAR_11;
   if (VAR_10 >= 1)
    FUNC_0("send nodeinfo");
   goto errout;
  }
  if (FUNC_1(VAR_16, &VAR_21.res, sizeof(VAR_21.rbuf), ((void*)0)) < 0) {
   VAR_18 = VAR_11;
   if (VAR_10 >= 1)
    FUNC_0("recv nodeinfo");
   goto errout;
  }


  FUNC_7(VAR_15, sizeof(VAR_15), "[%lx]", (u_long) VAR_22->id);
 }


 if (VAR_14 != ((void*)0)) {
  u_char VAR_23[VAR_7 + 1 + VAR_4];
  struct sockaddr_ng *const VAR_24 = (struct sockaddr_ng *) VAR_23;


  if ((VAR_17 = FUNC_8(VAR_0, VAR_9, VAR_6)) < 0) {
   VAR_18 = VAR_11;
   if (VAR_10 >= 1)
    FUNC_0("socket");
   goto errout;
  }


  FUNC_7(VAR_24->sg_data, VAR_7 + 1, "%s:", VAR_15);
  VAR_24->sg_family = VAR_0;
  VAR_24->sg_len = FUNC_10(VAR_24->sg_data) + 1 + VAR_4;
  if (FUNC_5(VAR_17, (struct sockaddr *) VAR_24, VAR_24->sg_len) < 0) {
   VAR_18 = VAR_11;
   if (VAR_10 >= 1)
    FUNC_0("connect(%s)", VAR_24->sg_data);
   goto errout;
  }
 }


 if (VAR_13)
  *VAR_13 = VAR_16;
 else
  FUNC_4(VAR_16);
 if (VAR_14)
  *VAR_14 = VAR_17;
 return (0);

errout:

 if (VAR_16 >= 0)
  FUNC_4(VAR_16);
 if (VAR_17 >= 0)
  FUNC_4(VAR_17);
 VAR_11 = VAR_18;
 return (-1);
}
