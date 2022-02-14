
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int un_my_addr ;
typedef int un_addr ;
struct socket_info {int fd; int bound; int is_server; void* myname; scalar_t__ myname_len; int family; void* peername; scalar_t__ peername_len; int protocol; int type; } ;
struct sockaddr_un {int fd; int bound; int is_server; void* myname; scalar_t__ myname_len; int family; void* peername; scalar_t__ peername_len; int protocol; int type; } ;
struct sockaddr {int fd; int bound; int is_server; void* myname; scalar_t__ myname_len; int family; void* peername; scalar_t__ peername_len; int protocol; int type; } ;
typedef scalar_t__ socklen_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,struct socket_info*) ;
 int FUNC_1 (int) ;
 int VAR_4 ;
 struct socket_info* FUNC_2 (int) ;
 int FUNC_3 (struct socket_info*) ;
 struct socket_info* FUNC_4 (int) ;
 int FUNC_5 (struct socket_info*,struct socket_info*,scalar_t__) ;
 int FUNC_6 (struct socket_info*,int ,int) ;
 int FUNC_7 (int,struct socket_info*,scalar_t__*) ;
 int FUNC_8 (int,struct socket_info*,scalar_t__*) ;
 int FUNC_9 (struct socket_info*,struct socket_info*,scalar_t__,int ,struct socket_info*,scalar_t__*) ;
 void* FUNC_10 (struct socket_info*,scalar_t__) ;
 scalar_t__ FUNC_11 (int ) ;
 int VAR_5 ;
 int FUNC_12 (struct socket_info*,struct socket_info*,int ,int *,int ) ;

int FUNC_13(int VAR_6, struct sockaddr *VAR_7, socklen_t *VAR_8)
{
 struct socket_info *VAR_9, *VAR_10;
 int VAR_11;
 struct sockaddr_un VAR_12;
 socklen_t VAR_13 = sizeof(VAR_12);
 struct sockaddr_un VAR_14;
 socklen_t VAR_15 = sizeof(VAR_14);
 struct sockaddr *VAR_16;
 socklen_t VAR_17, VAR_18;
 int VAR_19;

 VAR_9 = FUNC_2(VAR_6);
 if (!VAR_9) {
  return FUNC_7(VAR_6, VAR_7, VAR_8);
 }





 VAR_17 = FUNC_11(VAR_9->family);
 if (VAR_17 < 0) {
  VAR_4 = VAR_0;
  return -1;
 }

 VAR_16 = FUNC_4(VAR_17);
 if (VAR_16 == ((void*)0)) {
  return -1;
 }

 FUNC_6(&VAR_12, 0, sizeof(VAR_12));
 FUNC_6(&VAR_14, 0, sizeof(VAR_14));

 VAR_19 = FUNC_7(VAR_6, (struct sockaddr *)&VAR_12, &VAR_13);
 if (VAR_19 == -1) {
  FUNC_3(VAR_16);
  return VAR_19;
 }

 VAR_11 = VAR_19;

 VAR_18 = VAR_17;
 VAR_19 = FUNC_9(VAR_9, &VAR_12, VAR_13,
           VAR_9->family, VAR_16, &VAR_18);
 if (VAR_19 == -1) {
  FUNC_3(VAR_16);
  FUNC_1(VAR_11);
  return VAR_19;
 }

 VAR_10 = (struct socket_info *)FUNC_4(sizeof(struct socket_info));
 FUNC_6(VAR_10, 0, sizeof(*VAR_10));

 VAR_10->fd = VAR_11;
 VAR_10->family = VAR_9->family;
 VAR_10->type = VAR_9->type;
 VAR_10->protocol = VAR_9->protocol;
 VAR_10->bound = 1;
 VAR_10->is_server = 1;

 VAR_10->peername_len = VAR_18;
 VAR_10->peername = FUNC_10(VAR_16, VAR_18);

 if (VAR_7 != ((void*)0) && VAR_8 != ((void*)0)) {
     *VAR_8 = VAR_18;
     if (*VAR_8 >= VAR_18)
  FUNC_5(VAR_7, VAR_16, VAR_18);
     *VAR_8 = 0;
 }

 VAR_19 = FUNC_8(VAR_11, (struct sockaddr *)&VAR_14, &VAR_15);
 if (VAR_19 == -1) {
  FUNC_3(VAR_10);
  FUNC_1(VAR_11);
  return VAR_19;
 }

 VAR_18 = VAR_17;
 VAR_19 = FUNC_9(VAR_10, &VAR_14, VAR_15,
           VAR_10->family, VAR_16, &VAR_18);
 if (VAR_19 == -1) {
  FUNC_3(VAR_10);
  FUNC_3(VAR_16);
  FUNC_1(VAR_11);
  return VAR_19;
 }

 VAR_10->myname_len = VAR_18;
 VAR_10->myname = FUNC_10(VAR_16, VAR_18);
 FUNC_3(VAR_16);

 FUNC_0(VAR_5, VAR_10);

 FUNC_12(VAR_10, VAR_7, VAR_3, ((void*)0), 0);
 FUNC_12(VAR_10, VAR_7, VAR_2, ((void*)0), 0);
 FUNC_12(VAR_10, VAR_7, VAR_1, ((void*)0), 0);

 return VAR_11;
}
