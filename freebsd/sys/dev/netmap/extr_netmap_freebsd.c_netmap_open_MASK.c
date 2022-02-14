
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct netmap_priv_d {int dummy; } ;
struct cdev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (struct netmap_priv_d*,int ) ;
 int VAR_1 ;
 int FUNC_3 (struct netmap_priv_d*) ;
 struct netmap_priv_d* FUNC_4 () ;

__attribute__((used)) static int
FUNC_5(struct cdev *VAR_2, int VAR_3, int VAR_4, struct thread *VAR_5)
{
 struct netmap_priv_d *VAR_6;
 int VAR_7;

 (void)VAR_2;
 (void)VAR_3;
 (void)VAR_4;
 (void)VAR_5;

 FUNC_0();
 VAR_6 = FUNC_4();
 if (VAR_6 == ((void*)0)) {
  VAR_7 = VAR_0;
  goto out;
 }
 VAR_7 = FUNC_2(VAR_6, VAR_1);
 if (VAR_7) {
  FUNC_3(VAR_6);
 }
out:
 FUNC_1();
 return VAR_7;
}
