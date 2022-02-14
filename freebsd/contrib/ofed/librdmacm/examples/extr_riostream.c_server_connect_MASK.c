
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
 scalar_t__ VAR_4 ;
 int FUNC_1 (char*) ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (scalar_t__,int *,int *) ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static int FUNC_4(void)
{
 struct pollfd VAR_8;
 int VAR_9 = 0;

 FUNC_3(VAR_4);
 do {
  if (VAR_7) {
   VAR_8.fd = VAR_4;
   VAR_8.events = VAR_2;

   VAR_9 = FUNC_0(&VAR_8, VAR_5);
   if (VAR_9) {
    FUNC_1("rpoll");
    return VAR_9;
   }
  }

  VAR_6 = FUNC_2(VAR_4, ((void*)0), ((void*)0));
 } while (VAR_6 < 0 && (VAR_3 == VAR_0 || VAR_3 == VAR_1));
 if (VAR_6 < 0) {
  FUNC_1("raccept");
  return VAR_6;
 }

 FUNC_3(VAR_6);
 return VAR_9;
}
