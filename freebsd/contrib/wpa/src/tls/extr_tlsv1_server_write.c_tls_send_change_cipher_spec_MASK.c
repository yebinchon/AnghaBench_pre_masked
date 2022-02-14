
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tlsv1_server {int state; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct tlsv1_server*,int **,int *) ;
 scalar_t__ FUNC_3 (struct tlsv1_server*,int **,int *) ;
 int FUNC_4 (struct tlsv1_server*,char*) ;

__attribute__((used)) static u8 * FUNC_5(struct tlsv1_server *VAR_1,
     size_t *VAR_2)
{
 u8 *VAR_3, *VAR_4, *VAR_5;

 *VAR_2 = 0;

 VAR_3 = FUNC_1(1000);
 if (VAR_3 == ((void*)0))
  return ((void*)0);

 VAR_5 = VAR_3;
 VAR_4 = VAR_3 + 1000;

 if (FUNC_2(VAR_1, &VAR_5, VAR_4) < 0 ||
     FUNC_3(VAR_1, &VAR_5, VAR_4) < 0) {
  FUNC_0(VAR_3);
  return ((void*)0);
 }

 *VAR_2 = VAR_5 - VAR_3;

 FUNC_4(VAR_1, "Handshake completed successfully");
 VAR_1->state = VAR_0;

 return VAR_3;
}
