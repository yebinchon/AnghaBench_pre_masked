
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_storage {int dummy; } ;
struct tcp_ctx {int tc_fd; struct sockaddr_storage tc_sa; } ;
struct sockaddr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int VAR_5 ;
 int FUNC_1 (int ,struct sockaddr*,int ) ;
 int FUNC_2 (int ,struct sockaddr*,int ) ;
 int VAR_6 ;
 int FUNC_3 (int ,int ,...) ;
 int FUNC_4 (int ,int,int,char*) ;
 int FUNC_5 (struct sockaddr_storage*) ;
 int FUNC_6 (char const*,int ,struct sockaddr_storage*) ;
 int FUNC_7 (struct tcp_ctx*) ;
 int FUNC_8 (struct tcp_ctx*,int) ;
 int FUNC_9 (char const*,int ,struct tcp_ctx**) ;

__attribute__((used)) static int
FUNC_10(const char *VAR_7, const char *VAR_8, int VAR_9, void **VAR_10)
{
 struct tcp_ctx *VAR_11;
 struct sockaddr_storage VAR_12;
 int VAR_13, VAR_14, VAR_15;

 FUNC_0(VAR_7 == ((void*)0) || VAR_7[0] != '\0');
 FUNC_0(VAR_8 != ((void*)0));
 FUNC_0(VAR_9 >= -1);

 VAR_13 = FUNC_9(VAR_8, VAR_5, &VAR_11);
 if (VAR_13 != 0)
  return (VAR_13);
 if (VAR_7 != ((void*)0)) {
  VAR_13 = FUNC_6(VAR_7, 0, &VAR_12);
  if (VAR_13 != 0)
   goto fail;
  if (FUNC_1(VAR_11->tc_fd, (struct sockaddr *)&VAR_12,
      FUNC_5(&VAR_12)) == -1) {
   VAR_13 = VAR_6;
   goto fail;
  }
 }

 VAR_14 = FUNC_3(VAR_11->tc_fd, VAR_1);
 if (VAR_14 == -1) {
  VAR_13 = VAR_6;
  FUNC_4(VAR_3, 1, VAR_6, "fcntl(F_GETFL) failed");
  goto fail;
 }




 VAR_14 |= VAR_4;
 if (FUNC_3(VAR_11->tc_fd, VAR_2, VAR_14) == -1) {
  VAR_13 = VAR_6;
  FUNC_4(VAR_3, 1, VAR_6,
      "fcntl(F_SETFL, O_NONBLOCK) failed");
  goto fail;
 }

 VAR_15 = FUNC_2(VAR_11->tc_fd, (struct sockaddr *)&VAR_11->tc_sa,
     FUNC_5(&VAR_11->tc_sa));
 if (VAR_15 == -1 && VAR_6 != VAR_0) {
  VAR_13 = VAR_6;
  FUNC_4(VAR_3, 1, VAR_6, "connect() failed");
  goto fail;
 }

 if (VAR_9 >= 0) {
  if (VAR_15 == -1) {

   VAR_13 = FUNC_8(VAR_11, VAR_9);
   if (VAR_13 != 0)
    goto fail;
  } else {

   VAR_14 &= ~VAR_4;
   if (FUNC_3(VAR_11->tc_fd, VAR_2, VAR_14) == -1) {
    VAR_13 = VAR_6;
    FUNC_4(VAR_3, 1, VAR_6,
        "fcntl(F_SETFL, ~O_NONBLOCK) failed");
    goto fail;
   }
  }
 }

 *VAR_10 = VAR_11;
 return (0);
fail:
 FUNC_7(VAR_11);
 return (VAR_13);
}
