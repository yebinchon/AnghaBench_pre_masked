
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bufferevent {int dummy; } ;


 short VAR_0 ;
 short VAR_1 ;
 scalar_t__ FUNC_0 (unsigned long) ;
 scalar_t__ FUNC_1 (unsigned long) ;
 scalar_t__ FUNC_2 (unsigned long) ;
 int VAR_2 ;
 int FUNC_3 (struct bufferevent*,int ) ;
 int FUNC_4 (struct bufferevent*) ;
 unsigned long FUNC_5 (struct bufferevent*) ;
 int FUNC_6 (struct bufferevent*) ;
 int FUNC_7 (struct bufferevent*,int *,int ,void (*) (struct bufferevent*,short,void*),int *) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int ,char*,char const*,char const*,char const*) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (struct bufferevent*,void*) ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_12(struct bufferevent *VAR_6, short VAR_7, void *VAR_8)
{
 struct bufferevent *VAR_9 = VAR_8;

 if (VAR_7 & (VAR_0|VAR_1)) {
  if (VAR_7 & VAR_1) {
   unsigned long VAR_10;
   while ((VAR_10 = (FUNC_5(VAR_6)))) {
    const char *VAR_11 = (const char*)
        FUNC_2(VAR_10);
    const char *VAR_12 = (const char*)
        FUNC_1(VAR_10);
    const char *VAR_13 = (const char*)
        FUNC_0(VAR_10);
    FUNC_9(VAR_5,
        "%s in %s %s\n", VAR_11, VAR_12, VAR_13);
   }
   if (VAR_4)
    FUNC_10("connection error");
  }

  if (VAR_9) {

   FUNC_11(VAR_6, VAR_8);

   if (FUNC_8(
        FUNC_6(VAR_9))) {



    FUNC_7(VAR_9,
        ((void*)0), VAR_3,
        FUNC_12, ((void*)0));
    FUNC_3(VAR_9, VAR_2);
   } else {


    FUNC_4(VAR_9);
   }
  }
  FUNC_4(VAR_6);
 }
}
