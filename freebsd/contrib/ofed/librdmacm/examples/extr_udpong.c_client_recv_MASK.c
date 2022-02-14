
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pollfd {int events; int fd; } ;
struct message {int dummy; } ;
typedef int ssize_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*) ;
 int VAR_6 ;
 int FUNC_1 (struct pollfd*,int,int) ;
 int FUNC_2 (int ,struct message*,size_t,int) ;

__attribute__((used)) static ssize_t FUNC_3(struct message *VAR_7, size_t VAR_8, int VAR_9)
{
 struct pollfd VAR_10;
 int VAR_11;

 if (VAR_9) {
  VAR_10.fd = VAR_6;
  VAR_10.events = VAR_3;

  VAR_11 = FUNC_1(&VAR_10, 1, VAR_9);
  if (VAR_11 <= 0)
   return VAR_11;
 }

 VAR_11 = FUNC_2(VAR_6, VAR_7, VAR_8, VAR_5 | VAR_2);
 if (VAR_11 < 0 && VAR_4 != VAR_1 && VAR_4 != VAR_0)
  FUNC_0("rrecv");

 return VAR_11;
}
