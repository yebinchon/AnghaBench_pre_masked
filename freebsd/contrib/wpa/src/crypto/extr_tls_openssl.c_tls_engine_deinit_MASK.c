
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tls_connection {int * engine; int * private_key; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static void FUNC_3(struct tls_connection *VAR_1)
{

 FUNC_2(VAR_0, "ENGINE: engine deinit");
 if (VAR_1->private_key) {
  FUNC_1(VAR_1->private_key);
  VAR_1->private_key = ((void*)0);
 }
 if (VAR_1->engine) {

  FUNC_0(VAR_1->engine);

  VAR_1->engine = ((void*)0);
 }

}
