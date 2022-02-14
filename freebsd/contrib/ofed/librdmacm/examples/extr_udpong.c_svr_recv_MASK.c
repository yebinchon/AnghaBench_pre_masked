
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union socket_addr {int sa; } ;
struct pollfd {int events; int fd; } ;
struct message {int dummy; } ;
typedef scalar_t__ ssize_t ;
typedef int socklen_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct pollfd*,int ) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (int ,struct message*,size_t,int ,int *,int *) ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static ssize_t FUNC_3(struct message *VAR_8, size_t VAR_9,
   union socket_addr *VAR_10, socklen_t *VAR_11)
{
 struct pollfd VAR_12;
 ssize_t VAR_13;

 if (VAR_7) {
  VAR_12.fd = VAR_6;
  VAR_12.events = VAR_2;
 }

 do {
  if (VAR_7) {
   VAR_13 = FUNC_0(&VAR_12, VAR_5);
   if (VAR_13)
    return VAR_13;
  }

  VAR_13 = FUNC_2(VAR_6, VAR_8, VAR_9, VAR_4, &VAR_10->sa, VAR_11);
 } while (VAR_13 < 0 && (VAR_3 == VAR_1 || VAR_3 == VAR_0));

 if (VAR_13 < 0)
  FUNC_1("rrecv");

 return VAR_13;
}
