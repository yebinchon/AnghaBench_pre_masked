
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cuse_client {int cflags; int server; } ;
struct cdev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct cdev*,int,int *) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;

__attribute__((used)) static void
FUNC_4(struct cdev *VAR_6, struct cuse_client *VAR_7)
{
 int VAR_8;

 FUNC_1();
 VAR_8 = (VAR_7->cflags & (VAR_0 |
     VAR_1));
 VAR_7->cflags &= ~(VAR_2 |
     VAR_3);
 FUNC_3();

 if (VAR_8 != 0) {

  VAR_8 = FUNC_0(VAR_6, VAR_4 | VAR_5, ((void*)0));

  if (VAR_8 & (VAR_4 | VAR_5)) {
   FUNC_1();
   if (VAR_8 & VAR_4)
    VAR_7->cflags |= VAR_2;
   if (VAR_8 & VAR_5)
    VAR_7->cflags |= VAR_3;


   FUNC_2(VAR_7->server);
   FUNC_3();
  }
 }
}
