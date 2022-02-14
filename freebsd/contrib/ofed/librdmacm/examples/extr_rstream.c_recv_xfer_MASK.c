
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pollfd {int events; int fd; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct pollfd*,int ) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (char*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ,scalar_t__,int,int ) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_3 (scalar_t__,int) ;

__attribute__((used)) static int FUNC_4(int VAR_10)
{
 struct pollfd VAR_11;
 int VAR_12, VAR_13;

 if (VAR_8) {
  VAR_11.fd = VAR_7;
  VAR_11.events = VAR_2;
 }

 for (VAR_12 = 0; VAR_12 < VAR_10; ) {
  if (VAR_8) {
   VAR_13 = FUNC_0(&VAR_11, VAR_6);
   if (VAR_13)
    return VAR_13;
  }

  VAR_13 = FUNC_2(VAR_7, VAR_3 + VAR_12, VAR_10 - VAR_12, VAR_5);
  if (VAR_13 > 0) {
   VAR_12 += VAR_13;
  } else if (VAR_4 != VAR_1 && VAR_4 != VAR_0) {
   FUNC_1("rrecv");
   return VAR_13;
  }
 }

 if (VAR_9) {
  VAR_13 = FUNC_3(VAR_3, VAR_10);
  if (VAR_13)
   return VAR_13;
 }

 return 0;
}
