
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pollfd {int events; scalar_t__ fd; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct pollfd*,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 () ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (char*) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_3 (scalar_t__,int *,int *) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;

__attribute__((used)) static int FUNC_5(void)
{
 struct pollfd VAR_10;
 int VAR_11 = 0;

 FUNC_4(VAR_5);
 do {
  if (VAR_8) {
   VAR_10.fd = VAR_5;
   VAR_10.events = VAR_2;

   VAR_11 = FUNC_0(&VAR_10, VAR_6);
   if (VAR_11) {
    FUNC_2("rpoll");
    return VAR_11;
   }
  }

  VAR_7 = FUNC_3(VAR_5, ((void*)0), ((void*)0));
 } while (VAR_7 < 0 && (VAR_3 == VAR_0 || VAR_3 == VAR_1));
 if (VAR_7 < 0) {
  FUNC_2("raccept");
  return VAR_7;
 }

 if (VAR_9)
  VAR_4 = FUNC_1();
 if (!VAR_4)
  FUNC_4(VAR_7);
 return VAR_11;
}
