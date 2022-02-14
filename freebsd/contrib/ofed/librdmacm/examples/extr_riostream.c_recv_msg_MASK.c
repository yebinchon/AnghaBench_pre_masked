
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
 int FUNC_2 (int ,scalar_t__,int,int ) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;

__attribute__((used)) static int FUNC_3(int VAR_9)
{
 struct pollfd VAR_10;
 int VAR_11, VAR_12;

 if (VAR_8) {
  VAR_10.fd = VAR_7;
  VAR_10.events = VAR_2;
 }

 for (VAR_11 = 0; VAR_11 < VAR_9; ) {
  if (VAR_8) {
   VAR_12 = FUNC_0(&VAR_10, VAR_6);
   if (VAR_12)
    return VAR_12;
  }

  VAR_12 = FUNC_2(VAR_7, VAR_3 + VAR_11, VAR_9 - VAR_11, VAR_5);
  if (VAR_12 > 0) {
   VAR_11 += VAR_12;
  } else if (VAR_4 != VAR_1 && VAR_4 != VAR_0) {
   FUNC_1("rrecv");
   return VAR_12;
  }
 }

 return 0;
}
