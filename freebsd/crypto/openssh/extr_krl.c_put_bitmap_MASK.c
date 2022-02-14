
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct sshbuf {int dummy; } ;
struct bitmap {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (struct bitmap*) ;
 scalar_t__ FUNC_1 (struct bitmap*,int *,size_t) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (size_t) ;
 int FUNC_4 (struct sshbuf*,int *,size_t) ;

__attribute__((used)) static int
FUNC_5(struct sshbuf *VAR_2, struct bitmap *VAR_3)
{
 size_t VAR_4;
 u_char *VAR_5;
 int VAR_6;

 VAR_4 = FUNC_0(VAR_3);
 if ((VAR_5 = FUNC_3(VAR_4)) == ((void*)0))
  return VAR_0;
 if (FUNC_1(VAR_3, VAR_5, VAR_4) != 0) {
  FUNC_2(VAR_5);
  return VAR_1;
 }
 VAR_6 = FUNC_4(VAR_2, VAR_5, VAR_4);
 FUNC_2(VAR_5);
 return VAR_6;
}
