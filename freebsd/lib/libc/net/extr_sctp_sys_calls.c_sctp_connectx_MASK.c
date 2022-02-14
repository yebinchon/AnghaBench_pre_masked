
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in6 {int sin6_addr; } ;
struct sockaddr_in {int dummy; } ;
struct sockaddr {int sa_family; int sa_len; } ;
typedef int socklen_t ;
typedef int sctp_assoc_t ;
typedef int caddr_t ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct sockaddr_in*,struct sockaddr_in6*) ;
 char* FUNC_3 (int) ;
 int FUNC_4 (char*,struct sockaddr const*,int) ;
 int FUNC_5 (int,int ,int ,void*,int ) ;

int
FUNC_6(int VAR_5, const struct sockaddr *VAR_6, int VAR_7,
    sctp_assoc_t * VAR_8)
{
 char *VAR_9;
 int VAR_10, VAR_11, *VAR_12;
 char *VAR_13;
 const struct sockaddr *VAR_14;
 size_t VAR_15;


 if ((VAR_6 == ((void*)0)) || (VAR_7 <= 0)) {
  VAR_4 = VAR_1;
  return (-1);
 }
 if ((VAR_9 = FUNC_3(sizeof(int) + (size_t)VAR_7 * sizeof(struct sockaddr_in6))) == ((void*)0)) {
  VAR_4 = VAR_0;
  return (-1);
 }
 VAR_15 = sizeof(int);
 VAR_14 = VAR_6;
 VAR_13 = VAR_9 + sizeof(int);

 for (VAR_10 = 0; VAR_10 < VAR_7; VAR_10++) {
  switch (VAR_14->sa_family) {
  case 129:
   if (VAR_14->sa_len != sizeof(struct sockaddr_in)) {
    FUNC_1(VAR_9);
    VAR_4 = VAR_1;
    return (-1);
   }
   FUNC_4(VAR_13, VAR_14, sizeof(struct sockaddr_in));
   VAR_13 = ((caddr_t)VAR_13 + sizeof(struct sockaddr_in));
   VAR_15 += sizeof(struct sockaddr_in);
   break;
  case 128:
   if (VAR_14->sa_len != sizeof(struct sockaddr_in6)) {
    FUNC_1(VAR_9);
    VAR_4 = VAR_1;
    return (-1);
   }
   if (FUNC_0(&((struct sockaddr_in6 *)VAR_14)->sin6_addr)) {
    FUNC_2((struct sockaddr_in *)VAR_13, (struct sockaddr_in6 *)VAR_14);
    VAR_13 = ((caddr_t)VAR_13 + sizeof(struct sockaddr_in));
    VAR_15 += sizeof(struct sockaddr_in);
   } else {
    FUNC_4(VAR_13, VAR_14, sizeof(struct sockaddr_in6));
    VAR_13 = ((caddr_t)VAR_13 + sizeof(struct sockaddr_in6));
    VAR_15 += sizeof(struct sockaddr_in6);
   }
   break;
  default:
   FUNC_1(VAR_9);
   VAR_4 = VAR_1;
   return (-1);
  }
  VAR_14 = (struct sockaddr *)((caddr_t)VAR_14 + VAR_14->sa_len);
 }
 VAR_12 = (int *)VAR_9;
 *VAR_12 = VAR_7;
 VAR_11 = FUNC_5(VAR_5, VAR_2, VAR_3, (void *)VAR_9,
     (socklen_t) VAR_15);
 if ((VAR_11 == 0) && (VAR_8 != ((void*)0))) {
  *VAR_8 = *(sctp_assoc_t *) VAR_9;
 }
 FUNC_1(VAR_9);
 return (VAR_11);
}
