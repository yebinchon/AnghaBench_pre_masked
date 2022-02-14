
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_storage {scalar_t__ ss_family; } ;
struct sockaddr_in6 {int dummy; } ;
struct sockaddr_in {int dummy; } ;
struct sockaddr {int dummy; } ;
typedef int socklen_t ;
typedef int sast ;
typedef int nvlist_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* FUNC_0 (int,size_t) ;
 int FUNC_1 (int const*,int) ;
 int FUNC_2 (int const*,char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct sockaddr*,int,char*,size_t,char*,size_t,int) ;
 int FUNC_5 (struct sockaddr_storage*,void const*,size_t) ;
 int FUNC_6 (struct sockaddr_storage*,int ,int) ;
 void* FUNC_7 (int const*,char*,size_t*) ;
 scalar_t__ FUNC_8 (int const*,char*) ;
 int FUNC_9 (int *,char*,char*) ;

__attribute__((used)) static int
FUNC_10(const nvlist_t *VAR_5, const nvlist_t *VAR_6, nvlist_t *VAR_7)
{
 struct sockaddr_storage VAR_8;
 const void *VAR_9;
 char *VAR_10, *VAR_11;
 size_t VAR_12, VAR_13, VAR_14;
 socklen_t VAR_15;
 int VAR_16, VAR_17;

 if (!FUNC_2(VAR_5, "ADDR2NAME") &&
     !FUNC_2(VAR_5, "ADDR"))
  return (VAR_4);

 VAR_16 = 0;
 VAR_10 = VAR_11 = ((void*)0);
 FUNC_6(&VAR_8, 0, sizeof(VAR_8));

 VAR_13 = (size_t)FUNC_8(VAR_6, "hostlen");
 VAR_14 = (size_t)FUNC_8(VAR_6, "servlen");

 if (VAR_13 > 0) {
  VAR_10 = FUNC_0(1, VAR_13 + 1);
  if (VAR_10 == ((void*)0)) {
   VAR_16 = VAR_3;
   goto out;
  }
 }
 if (VAR_14 > 0) {
  VAR_11 = FUNC_0(1, VAR_14 + 1);
  if (VAR_11 == ((void*)0)) {
   VAR_16 = VAR_3;
   goto out;
  }
 }

 VAR_9 = FUNC_7(VAR_6, "sa", &VAR_12);
 if (VAR_12 > sizeof(VAR_8)) {
  VAR_16 = VAR_2;
  goto out;
 }

 FUNC_5(&VAR_8, VAR_9, VAR_12);
 VAR_15 = (socklen_t)VAR_12;

 if ((VAR_8.ss_family != VAR_0 ||
      VAR_15 != sizeof(struct sockaddr_in)) &&
     (VAR_8.ss_family != VAR_1 ||
      VAR_15 != sizeof(struct sockaddr_in6))) {
  VAR_16 = VAR_2;
  goto out;
 }

 if (!FUNC_1(VAR_5, (int)VAR_8.ss_family)) {
  VAR_16 = VAR_4;
  goto out;
 }

 VAR_17 = (int)FUNC_8(VAR_6, "flags");

 VAR_16 = FUNC_4((struct sockaddr *)&VAR_8, VAR_15, VAR_10, VAR_13,
     VAR_11, VAR_14, VAR_17);
 if (VAR_16 != 0)
  goto out;

 if (VAR_10 != ((void*)0))
  FUNC_9(VAR_7, "host", VAR_10);
 if (VAR_11 != ((void*)0))
  FUNC_9(VAR_7, "serv", VAR_11);
out:
 if (VAR_16 != 0) {
  FUNC_3(VAR_10);
  FUNC_3(VAR_11);
 }
 return (VAR_16);
}
