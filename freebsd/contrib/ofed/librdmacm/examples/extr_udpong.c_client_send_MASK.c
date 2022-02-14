
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
 int FUNC_0 (struct pollfd*,int ) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ,struct message*,size_t,int ) ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static ssize_t FUNC_3(struct message *VAR_8, size_t VAR_9)
{
 struct pollfd VAR_10;
 int VAR_11;

 if (VAR_7) {
  VAR_10.fd = VAR_6;
  VAR_10.events = VAR_2;
 }

 do {
  if (VAR_7) {
   VAR_11 = FUNC_0(&VAR_10, VAR_5);
   if (VAR_11)
    return VAR_11;
  }

  VAR_11 = FUNC_2(VAR_6, VAR_8, VAR_9, VAR_4);
 } while (VAR_11 < 0 && (VAR_3 == VAR_1 || VAR_3 == VAR_0));

 if (VAR_11 < 0)
  FUNC_1("rsend");

 return VAR_11;
}
